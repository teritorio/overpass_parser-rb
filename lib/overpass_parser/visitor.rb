# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require_relative 'nodes/selectors'
require_relative 'nodes/filters'
require_relative 'nodes/query_objects'
require_relative 'nodes/query_union'
require_relative 'nodes/query_recurse'
require_relative 'nodes/request'
require_relative 'nodes/out'

module OverpassParser
  extend T::Sig

  class ParsingError < RuntimeError; end

  class ErrorListener < OverpassParser::BaseErrorListener
    extend T::Sig

    sig do
      params(
        line: Integer,
        char_position_in_line: Integer,
        msg: String
      ).void
    end
    def syntax_error(line, char_position_in_line, msg)
      raise(ParsingError, "line #{line}:#{char_position_in_line} #{msg}")
    end

    # def reportAmbiguity
    #   puts "reportAmbiguity"
    # end

    # def reportAttemptingFullContext
    #   puts "reportAttemptingFullContext"
    # end

    # def reportContextSensitivity
    #   puts "reportContextSensitivity"
    # end
  end

  class Walker < OverpassParser::Visitor
    attr_reader :stack

    def initialize
      super
      @stack = []
    end

    def visit_request(ctx)
      visit_children(ctx)
      r = Nodes::Request.new(
        timeout: ctx.metadata&.number&.text&.to_i,
        queries: @stack,
        out: Nodes::Out.new(**{
          geom: ctx.out&.out_geom&.text,
          level_of_details: ctx.out&.out_level_of_details&.text
        }.compact)
      )
      @stack = r
    end

    def visit_query_union(ctx)
      @stack.push([])
      visit_children(ctx)
      r = Nodes::QueryUnion.new(
        queries: @stack.pop,
        asignation: ctx&.asignation&.DOT_ID&.text&.[](1)
      )
      @stack.push(r)
    end

    def visit_query_object(ctx)
      @filters = []
      @selectors = []
      visit_children(ctx)
      r = Nodes::QueryObjects.new(
        object_type: ctx.object_type.text,
        selectors: (Nodes::Selectors.new(@selectors.compact) unless @selectors.empty?),
        filters: (Nodes::Filters.new(@filters.compact.dup) unless @filters.empty?),
        set: ctx.DOT_ID&.text&.[](1),
        asignation: ctx&.asignation&.DOT_ID&.text&.[](1)
      )
      if @stack[-1].is_a?(Array)
        @stack[-1] << r
      else
        @stack.push(r)
      end
    end

    def visit_query_recurse(ctx)
      visit_children(ctx)
      r = Nodes::QueryRecurse.new(
        recurse: ctx.text,
        asignation: ctx&.asignation&.DOT_ID&.text&.[](1)
      )
      if @stack[-1].is_a?(Array)
        @stack[-1] << r
      else
        @stack.push(r)
      end
    end

    def visit_selector(ctx)
      visit_children(ctx)
      r = if ctx.token[1].nil?
            Nodes::Selector.new(key: @stack.pop, not_: ctx.NOT&.text == '!')
          else
            value = @stack.pop
            Nodes::Selector.new(key: @stack.pop, operator: ctx.OPERATOR.text, value: value)
          end
      @selectors << r
    end

    def visit_filter(ctx)
      visit_children(ctx)
      r = Nodes::Filter.new(
        bbox: ctx.filter_bbox&.number&.collect(&:text)&.collect(&:to_f),
        poly: split_poly_ccords(ctx.filter_poly),
        ids: (
          ctx.filter_osm_id.nil? ? ctx.filter_osm_ids&.osm_id : [ctx.filter_osm_id])
            &.collect(&:text)&.collect(&:to_i),
        area_id: ctx.filter_area&.DOT_ID&.text&.[](1),
        around: (ctx.filter_around && Nodes::FilterAround.new(
          core: ctx.filter_around.DOT_ID.text&.[](1),
          radius: ctx.filter_around.number.text.to_f
        )) || nil
      )
      @filters << r
    end

    def visit_token(ctx)
      visit_children(ctx)
      @stack.push(unquote(ctx) || (ctx.UNQUOTED_STRING || ctx.number).text)
    end

    private

    def unquote(ctx)
      if !ctx.SIMPLE_QUOTED_STRING.nil?
        ctx.SIMPLE_QUOTED_STRING.text[1..-2].gsub("\\'", "'")
      elsif !ctx.DOUBLE_QUOTED_STRING.nil?
        ctx.DOUBLE_QUOTED_STRING.text[1..-2].gsub('\\"', '"')
      end
    end

    def split_poly_ccords(ctx)
      return nil if ctx.nil?

      unquote(ctx).split(/\s+/).collect(&:to_f).each_slice(2).to_a
    end
  end
end

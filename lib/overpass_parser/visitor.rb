# frozen_string_literal: true
# typed: true

require "overpass_parser"
require "sorbet-runtime"
require_relative "nodes/selectors"
require_relative "nodes/filters"

module OverpassParser
  class Walker < OverpassParser::Visitor
    attr_reader :stack

    def initialize
      super
      @stack = []
    end

    def visit_request(ctx)
      visit_children(ctx)
      r = { type: :request, queries: @stack }
      @stack = []
      @stack.push(r)
    end

    def visit_query_group(ctx)
      @stack.push([])
      visit_children(ctx)
      r = { type: :query_group, queries: @stack.pop }
      @stack.push(r)
    end

    def visit_query_object(ctx)
      @filters = []
      @selectors = []
      visit_children(ctx)
      r = { type: :query_object, set: ctx.DOT_ID&.text, object_type: ctx.object_type.text,
            selectors: Nodes::Selectors.new(@selectors.compact),
            filters: Nodes::Filters.new(@filters.compact.dup) }
      if @stack[-1].is_a?(Array)
        @stack[-1] << r
      else
        @stack.push(r)
      end
    end

    def visit_query_recurse(ctx)
      visit_children(ctx)
      r = { type: :query_recurse, recurse: ctx.text }
      if @stack[-1].is_a?(Array)
        @stack[-1] << r
      else
        @stack.push(r)
      end
    end

    def visit_selector(ctx)
      visit_children(ctx)
      r = if ctx.token[1].nil?
            Nodes::Selector.new(@stack.pop, not_: ctx.NOT&.text == "!")
          else
            value = @stack.pop
            Nodes::Selector.new(@stack.pop, operator: ctx.OPERATOR.text, value: value)
          end
      @selectors << r
    end

    def visit_filter(ctx)
      visit_children(ctx)
      r = Nodes::Filter.new(
        bbox: ctx.filter_bbox&.number&.collect(&:text)&.collect(&:to_f),
        ids: (!ctx.filter_osm_id.nil? ? [ctx.filter_osm_id] : ctx.filter_osm_ids&.osm_id)&.collect(&:text)&.collect(&:to_i),
        area_id: ctx.filter_area&.DOT_ID&.text,
        around: ctx.filter_around && Nodes::FilterAround.new(
          core: ctx.filter_around.DOT_ID.text,
          radius: ctx.filter_around.number.text.to_f
        ) || nil
      )
      @filters << r
    end

    def visit_token(ctx)
      visit_children(ctx)
      text = !ctx.UNQUOTED_STRING.nil? || !ctx.number.nil? ? (ctx.UNQUOTED_STRING || ctx.number).text : ctx.text[1..-2]
      @stack.push(text)
    end
  end

  def self.tree(overpass_script)
    parser = OverpassParser::Parser.parse(overpass_script)
    walker = OverpassParser::Walker.new
    parser.visit(walker)
    walker.stack
  end
end

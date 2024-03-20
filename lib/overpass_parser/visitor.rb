# frozen_string_literal: true

require "overpass_parser"

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
            selectors: @selectors.compact.dup, filter: @filters.compact.dup }
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
            { type: :selector, key: @stack.pop, not: ctx.NOT&.text == "!" }
          else
            { type: :selector, value: @stack.pop, key: @stack.pop, operator: ctx.OPERATOR.text }
          end
      @selectors << r
    end

    def visit_filter(ctx)
      visit_children(ctx)
      r = {
        type: :filter,
        bbox: ctx.filter_bbox&.NUMBERS&.collect(&:text)&.collect(&:to_f),
        ids: !ctx.filter_osm_id.nil? ? [ctx.filter_osm_id] : ctx.filter_osm_ids&.NUMBER,
        area_id: ctx.filter_area&.DOT_ID&.text
      }
      @filters << r
    end

    def visit_token(ctx)
      visit_children(ctx)
      text = !ctx.UNQUOTED_STRING.nil? ? ctx.UNQUOTED_STRING.text : ctx.text[1..-2]
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

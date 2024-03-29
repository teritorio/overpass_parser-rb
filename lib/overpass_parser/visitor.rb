# frozen_string_literal: true
# typed: true

require "overpass_parser"
require "sorbet-runtime"

module OverpassParser
  class Selector
    extend T::Sig
    include Comparable
    attr_reader :not_
    attr_reader :key, :operator, :value

    def initialize(key, not_: nil, operator: nil, value: nil)
      @key = key
      @not_ = not_
      @operator = operator
      @value = !operator.nil? && ["~", "!~"].include?(operator) ? Regexp.new(value) : value
    end

    sig do
      params(
        tags: T::Hash[String, String]
      ).returns(T.nilable(T.any(T::Array[String], TrueClass)))
    end
    def matches(tags)
      m = (
        if @operator.nil?
          if @not_
            return true unless tags.key?(@key)
          else
            tags.key?(@key)
          end
        else
          value = tags[@key]
          return if value.nil?

          case @operator
          when "=" then value == @value
          when "!=" then value != @value
          when "~" then !!T.cast(@value, Regexp).match(value)
          when "!~" then !T.cast(@value, Regexp).match(value)
          else throw "Not implemented operator #{@operator}"
          end
        end
      )
      m ? [@key] : nil
    end

    sig { returns(String) }
    def to_overpass
      q = if operator.nil?
            "#{not_ ? "!" : ""}#{quote(key)}"
          else
            "#{quote(key)}#{operator}#{quote(value)}"
          end
      "[#{q}]"
    end

    sig do
      params(
        escape_literal: T.proc.params(s: String).returns(String)
      ).returns(String)
    end
    def to_sql(escape_literal)
      key = escape_literal.call(@key)

      value = @value
      unless value.nil?
        value = value.to_s.gsub(/^\(\?-mix:/, "(") if value.is_a?(Regexp)
        value = escape_literal.call(value.to_s)
      end

      case @operator
      when nil then "#{@not_ ? "NOT " : ""}tags?#{key}"
      when "=" then value.nil? ? "(NOT tags?#{key})" : "(tags?#{key} AND tags->>#{key} = #{value})"
      when "!=" then "(NOT tags?#{key} OR tags->>#{key} != #{value})"
      when "~" then "(tags?#{key} AND tags->>#{key} ~ #{value})"
      when "!~" then "(NOT tags?#{key} OR tags->>#{key} !~ #{value})"
      else throw "Not implemented operator #{op}"
      end
    end

    def <=>(other)
      [@key, @not_, @operator, @value] <=> [other.key, other.not_, other.operator, other.value]
    end

    private

    def quote(string)
      string = string.to_s[7..-2] if string.is_a?(Regexp)

      simple_quote = string.include?("'")
      double_quote = string.include?('"')
      if simple_quote || double_quote || /[^-_a-zA-Z0-9]/.match?(string)
        if double_quote && !simple_quote
          "'#{string}'"
        else
          "\"#{string.gsub('\"', '\\\"')}\""
        end
      else
        string
      end
    end
  end

  class Selectors < Array
    extend T::Sig

    def initialize(*args)
      super(*args)
    end

    sig do
      params(
        object: T::Hash[String, String]
      ).returns(T.nilable(T::Array[String]))
    end
    def matches(object)
      r = collect { |selector| selector.matches(object) }.flatten.uniq
      r.all? ? r.filter { |rr| rr != true } : nil
    end

    sig { returns(String) }
    def to_overpass
      collect(&:to_overpass).join
    end

    sig do
      params(
        escape_literal: T.proc.params(s: String).returns(String)
      ).returns(String)
    end
    def to_sql(escape_literal)
      if size == 1
        self[0].to_sql(escape_literal)
      else
        collect { |s| s.to_sql(escape_literal) }.join(" AND ")
      end
    end
  end

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
            selectors: Selectors.new(@selectors.compact), filters: @filters.compact.dup }
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
            Selector.new(@stack.pop, not_: ctx.NOT&.text == "!")
          else
            value = @stack.pop
            Selector.new(@stack.pop, operator: ctx.OPERATOR.text, value: value)
          end
      @selectors << r
    end

    def visit_filter(ctx)
      visit_children(ctx)
      r = {
        type: :filter,
        bbox: ctx.filter_bbox&.number&.collect(&:text)&.collect(&:to_f),
        ids: !ctx.filter_osm_id.nil? ? [ctx.filter_osm_id] : ctx.filter_osm_ids&.INTEGER,
        area_id: ctx.filter_area&.DOT_ID&.text,
        around: { core: ctx.filter_around&.DOT_ID&.text, radius: ctx.filter_around&.number&.text }
      }
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

# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'

module OverpassParser
  module Nodes
    class Selector < T::InexactStruct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :not_, Integer, default: 0
      const :key, String
      const :operator, T.nilable(String)
      const :value, T.nilable(T.any(String, Regexp))

      sig do
        params(
          key: String,
          not_: T::Boolean,
          operator: T.nilable(String),
          value: T.nilable(String)
        ).void
      end
      def initialize(key:, not_: false, operator: nil, value: nil)
        super(
          key: key,
          # Does not use boolean, as not comparable
          not_: not_ == true ? 1 : 0,
          operator: operator,
          value: !operator.nil? && ['~', '!~'].include?(operator) ? Regexp.new(T.must(value)) : value,
        )
      end

      sig do
        params(
          tags: T::Hash[String, String]
        ).returns(T.nilable(T.any(T::Array[String], TrueClass)))
      end
      def matches(tags)
        m = (
          if @operator.nil?
            if @not_ == 1
              return true unless tags.key?(@key)
            else
              tags.key?(@key)
            end
          else
            value = tags[@key]
            return if value.nil?

            case @operator
            when '=' then value == @value
            when '!=' then value != @value
            when '~' then !T.cast(@value, Regexp).match(value).nil?
            when '!~' then !T.cast(@value, Regexp).match(value)
            else throw "Not implemented operator #{@operator}"
            end
          end
        )
        m ? [@key] : nil
      end

      sig { returns(String) }
      def to_overpass
        q = if operator.nil?
              "#{not_ == 1 ? '!' : ''}#{quote(key)}"
            else
              "#{quote(key)}#{operator}#{quote(value)}"
            end
        "[#{q}]"
      end

      sig do
        params(
          sql_dialect: SqlDialect::SqlDialect
        ).returns(String)
      end
      def to_sql(sql_dialect)
        value = @value
        unless value.nil?
          value = value.to_s.gsub(/^\(\?-mix:/, '(') if value.is_a?(Regexp)
          value = sql_dialect.escape_literal(value.to_s)
        end

        case @operator
        when nil then "#{@not_ == 1 ? 'NOT ' : ''}#{sql_dialect.hash_exits(key)}"
        when '=' then (
          if value.nil?
            "(NOT #{sql_dialect.hash_exits(key)})"
          else
            "(#{sql_dialect.hash_exits(key)} AND #{sql_dialect.hash_get(key)} = #{value})"
          end
        )
        when '!=' then "(NOT #{sql_dialect.hash_exits(key)} OR #{sql_dialect.hash_get(key)} != #{value})"
        when '~' then "(#{sql_dialect.hash_exits(key)} AND #{sql_dialect.hash_get(key)} ~ #{value})"
        when '!~' then "(NOT #{sql_dialect.hash_exits(key)} OR #{sql_dialect.hash_get(key)} !~ #{value})"
        else throw "Not implemented operator #{@operator}"
        end
      end

      # Based on T::Struct::ActsAsComparable
      def <=>(other)
        return NOT_COMPARABLE if other.class != T.unsafe(self).class

        T.unsafe(self).class.decorator.props.keys.each do |attribute_key|
          a = T.unsafe(self).send(attribute_key)
          b = other.send(attribute_key)
          compare_result = (
            if a.nil? && b.nil?
              0
            elsif a.nil? && !b.nil?
              -1
            else
              !a.nil? && b.nil? ? 1 : a <=> b
            end
          )
          return T.cast(compare_result, T.nilable(Integer)) if compare_result != EQUAL
        end
        EQUAL
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

      sig { returns(Selectors) }
      def sort
        Selectors.new(super)
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
          sql_dialect: SqlDialect::SqlDialect
        ).returns(String)
      end
      def to_sql(sql_dialect)
        if size == 1
          self[0].to_sql(sql_dialect)
        else
          collect { |s| s.to_sql(sql_dialect) }.join(' AND ')
        end
      end
    end
  end
end

# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'
require_relative 'sql_dialect'

module OverpassParser
  module SqlDialect
    class Postgres < SqlDialect
      extend T::Sig

      sig do
        params(
          postgres_escape_literal: T.nilable(T.proc.params(s: String).returns(String))
        ).void
      end
      def initialize(postgres_escape_literal: nil)
        super()
        @postgres_escape_literal = postgres_escape_literal
      end

      def escape_literal(string)
        @postgres_escape_literal ? @postgres_escape_literal.call(string) : super(string)
      end

      def hash_exits(key)
        key = escape_literal(key)
        "tags?#{key}"
      end

      def hash_get(key)
        key = escape_literal(key)
        "tags->>#{key}"
      end

      def statement_timeout(timeout)
        "SET statement_timeout = #{timeout};"
      end

      def json_strip_nulls
        'jsonb_strip_nulls'
      end

      def json_build_object
        'jsonb_build_object'
      end

      def jsonb_agg
        'jsonb_agg'
      end

      def st_union
        'ST_Union'
      end

      def st_dump_points
        'ST_DumpPoints'
      end

      def st_intersects_extent
        'ST_Intersects'
      end
    end
  end
end

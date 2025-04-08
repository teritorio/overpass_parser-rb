# frozen_string_literal: true
# typed: strict

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

      sig do
        params(string: String).returns(String)
      end
      def escape_literal(string)
        @postgres_escape_literal ? @postgres_escape_literal.call(string) : super(string)
      end

      sig do
        params(key: String).returns(String)
      end
      def hash_exits(key)
        key = escape_literal(key)
        "tags?#{key}"
      end

      sig do
        params(key: String).returns(String)
      end
      def hash_get(key)
        key = escape_literal(key)
        "tags->>#{key}"
      end

      sig do
        params(timeout: Integer).returns(String)
      end
      def statement_timeout(timeout)
        "SET statement_timeout = #{timeout};"
      end

      sig do
        returns(String)
      end
      def json_strip_nulls
        'jsonb_strip_nulls'
      end

      sig do
        returns(String)
      end
      def json_build_object
        'jsonb_build_object'
      end

      sig do
        returns(String)
      end
      def jsonb_agg
        'jsonb_agg'
      end

      sig do
        returns(String)
      end
      def st_union
        'ST_Union'
      end

      sig do
        returns(T.nilable(String))
      end
      def st_dump_points
        'ST_DumpPoints'
      end

      sig do
        returns(String)
      end
      def st_intersects
        'ST_Intersects'
      end

      sig do
        returns(String)
      end
      def st_intersects_extent
        'ST_Intersects'
      end

      sig do
        params(geom: String, srid: T.any(Integer, String)).returns(String)
      end
      def st_transform(geom, srid)
        "ST_Transform(#{geom}, #{srid})"
      end

      sig do
        params(geom: String, _srid: T.any(Integer, String)).returns(String)
      end
      def st_transform_reverse(geom, _srid)
        "ST_Transform(#{geom}, 4326)"
      end
    end
  end
end

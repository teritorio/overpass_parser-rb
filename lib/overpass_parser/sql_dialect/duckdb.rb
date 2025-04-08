# frozen_string_literal: true
# typed: strict

require 'sorbet-runtime'
require 'sorbet-struct-comparable'
require_relative 'sql_dialect'

module OverpassParser
  module SqlDialect
    class Duckdb < SqlDialect
      extend T::Sig

      sig do
        params(key: String).returns(String)
      end
      def hash_exits(key)
        key = escape_literal(key)
        "(tags->>#{key}) IS NOT NULL"
      end

      sig do
        params(key: String).returns(String)
      end
      def hash_get(key)
        key = escape_literal(key)
        "(tags->>#{key})"
      end

      sig do
        params(_timeout: Integer).returns(String)
      end
      def statement_timeout(_timeout)
        ''
      end

      sig do
        returns(String)
      end
      def json_strip_nulls
        ''
      end

      sig do
        returns(String)
      end
      def json_build_object
        'json_object'
      end

      sig do
        returns(String)
      end
      def jsonb_agg
        'json_group_array'
      end

      sig do
        returns(String)
      end
      def st_union
        '' # 'ST_Union_Agg'
      end

      sig do
        returns(T.nilable(String))
      end
      def st_dump_points
        nil
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
        'ST_Intersects_Extent'
      end

      sig do
        params(geom: String, srid: T.any(Integer, String)).returns(String)
      end
      def st_transform(geom, srid)
        "ST_Transform(#{geom}, 'EPSG:4326', 'EPSG:#{srid}')"
      end

      sig do
        params(geom: String, srid: T.any(Integer, String)).returns(String)
      end
      def st_transform_reverse(geom, srid)
        "ST_Transform(#{geom}, 'EPSG:#{srid}', 'EPSG:4326')"
      end

      sig do
        params(geom: String, _maxdecimaldigits: Integer).returns(String)
      end
      def st_asgeojson(geom, _maxdecimaldigits)
        "ST_AsGeoJSON(#{geom})"
      end
    end
  end
end

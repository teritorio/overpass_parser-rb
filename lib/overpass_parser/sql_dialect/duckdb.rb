# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'
require_relative 'sql_dialect'

module OverpassParser
  module SqlDialect
    class Duckdb < SqlDialect
      def hash_exits(key)
        key = escape_literal(key)
        "(tags->>#{key}) IS NOT NULL"
      end

      def hash_get(key)
        key = escape_literal(key)
        "(tags->>#{key})"
      end

      def statement_timeout(_timeout)
        ''
      end

      def json_strip_nulls
        ''
      end

      def json_build_object
        'json_object'
      end

      def jsonb_agg
        'json_group_array'
      end

      def st_union
        '' # 'ST_Union_Agg'
      end

      def st_dump_points
        nil
      end

      def st_intersects_extent
        'ST_Intersects_Extent'
      end
    end
  end
end

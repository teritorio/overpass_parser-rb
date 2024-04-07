# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'

module OverpassParser
  module SqlDialect
    class SqlDialect
      # T.proc.params(s: String).returns(String)
      def escape_literal(string)
        "'#{string}'"
      end

      def statement_timeout(timeout); end

      def hash_exits(key); end

      def hash_get; end

      def json_strip_nulls; end

      def json_build_object; end

      def jsonb_agg; end

      def st_union; end

      def st_dump_points; end

      def st_intersects_extent; end
    end
  end
end

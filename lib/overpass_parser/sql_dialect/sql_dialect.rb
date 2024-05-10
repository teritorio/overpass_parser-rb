# frozen_string_literal: true
# typed: strict

require 'sorbet-runtime'
require 'sorbet-struct-comparable'

module OverpassParser
  module SqlDialect
    class SqlDialect
      extend T::Sig

      sig do
        params(string: String).returns(String)
      end
      def escape_literal(string)
        "'#{string.gsub("'", "''")}'"
      end

      sig do
        params(_timeout: Integer).returns(String)
      end
      def statement_timeout(_timeout) = ''

      sig do
        params(_key: String).returns(String)
      end
      def hash_exits(_key) = ''

      sig do
        params(_key: String).returns(String)
      end
      def hash_get(_key) = ''

      sig do
        returns(String)
      end
      def json_strip_nulls = ''

      sig do
        returns(String)
      end
      def json_build_object = ''

      sig do
        returns(String)
      end
      def jsonb_agg = ''

      sig do
        returns(String)
      end
      def st_union = ''

      sig do
        returns(T.nilable(String))
      end
      def st_dump_points = ''

      sig do
        returns(String)
      end
      def st_intersects_extent = ''
    end
  end
end

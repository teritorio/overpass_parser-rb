# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "sorbet-struct-comparable"
require "digest/sha1"

module OverpassParser
  module Nodes
    class QueryObjects < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :object_type, String
      const :selectors, T.nilable(Selectors)
      const :filters, T.nilable(Filters)
      const :set, T.nilable(String)
      const :asignation, T.nilable(String)

      def initialize(object_type, selectors: nil, filters: nil, set: nil, asignation: nil)
        @object_type = object_type
        @selectors = selectors
        @filters = filters
        @set = set
        @asignation = asignation.nil? ? "_#{Digest::SHA1.hexdigest(inspect)}" : "_#{asignation}"
      end

      sig do
        params(
          escape_literal: T.proc.params(s: String).returns(String)
        ).returns(String)
      end
      def to_sql(escape_literal)
        from = set.nil? ? object_type : "_#{set}"
        where = [
          object_type == "nwr" ? "osm_type = ANY (ARRAY['node', 'way', 'relation'])" : "osm_type = '#{object_type}'",
          selectors&.to_sql(escape_literal) || nil,
          filters&.to_sql(escape_literal) || nil
        ].compact.join(" AND\n  ")

        sql = "SELECT
  *
FROM
  #{from}"
        unless where.nil?
          sql += "
WHERE
  #{where}"
        end
        sql
      end
    end
  end
end

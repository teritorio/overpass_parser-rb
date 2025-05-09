# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'
require 'digest/sha1'

module OverpassParser
  module Nodes
    class QueryObjects < T::InexactStruct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :object_type, String
      const :selectors, T.nilable(Selectors)
      const :filters, T.nilable(Filters)
      const :set, T.nilable(String)
      const :asignation, T.nilable(String)

      def initialize(object_type:, selectors: nil, filters: nil, set: nil, asignation: nil)
        super(
          object_type: object_type,
          selectors: selectors,
          filters: filters,
          set: set,
          asignation: asignation,
        )
        @asignation = asignation.nil? ? "_#{Digest::SHA1.hexdigest(inspect)}" : "_#{asignation}"
      end

      sig do
        params(
          sql_dialect: SqlDialect::SqlDialect,
          srid: Integer,
          default_set: T.nilable(String)
        ).returns(String)
      end
      def to_sql(sql_dialect, srid, default_set)
        from = (
          if set.nil?
            object_type
          elsif set == '_'
            default_set
          else
            "_#{set}"
          end
        )
        where = [
          if object_type == 'nwr'
            "osm_type = ANY (ARRAY['n', 'w', 'r'])"
          elsif object_type == 'area'
            nil
          else
            "osm_type = '#{object_type[0]}'"
          end,
          selectors&.to_sql(sql_dialect) || nil,
          filters&.to_sql(sql_dialect, srid) || nil
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

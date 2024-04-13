# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'digest/sha1'

module OverpassParser
  module Nodes
    class QueryUnion < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      ### FIXME
      # const :queries, T::Array[T.any(QueryObjects, QueryUnion, QueryRecurse)]
      const :queries, T::Array[QueryObjects]
      const :asignation, T.nilable(String)

      def initialize(queries:, asignation: nil)
        super(
          queries: queries,
          asignation: asignation,
        )
        @asignation = asignation.nil? ? "_#{Digest::SHA1.hexdigest(inspect)}" : "_#{asignation}"
      end

      sig do
        params(
          sql_dialect: SqlDialect::SqlDialect,
          _default_set: T.nilable(String)
        ).returns(String)
      end
      def to_sql(sql_dialect, _default_set)
        default_set = T.let(nil, T.nilable(String))
        with = queries.collect do |querie|
          sql = querie.to_sql(sql_dialect, default_set).gsub(/^/, '  ')
          default_set = querie.asignation
          "#{querie.asignation} AS (\n#{sql}\n)"
        end.join(",\n")
        asignations = queries.collect do |querie|
          "(SELECT * FROM #{querie.asignation})"
        end
        "WITH
#{with}
SELECT DISTINCT ON(osm_type, id)
  *
FROM (
  #{asignations.join(" UNION\n  ")}
) AS t
ORDER BY
  osm_type, id"
      end
    end
  end
end

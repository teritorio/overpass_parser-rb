# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'
require 'digest/sha1'

module OverpassParser
  module Nodes
    class QueryRecurse < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :recurse, String
      const :asignation, T.nilable(String)

      def initialize(recurse:, asignation: nil)
        super(
          recurse: recurse,
          asignation: asignation,
        )
        @asignation = asignation.nil? ? "_#{Digest::SHA1.hexdigest(inspect)}" : "_#{asignation}"
      end

      sig do
        params(
          _sql_dialect: SqlDialect::SqlDialect,
          _srid: Integer,
          default_set: T.nilable(String)
        ).returns(String)
      end
      def to_sql(_sql_dialect, _srid, default_set)
        "SELECT
  way.*
FROM
  #{default_set} AS way
  JOIN node ON
    node.id = ANY(way.nodes) AND
    node.geom && way.geom
WHERE
  way.osm_type = 'w'
UNION ALL
SELECT
  node.*
FROM
  #{default_set} AS relation
  JOIN LATERAL (
    SELECT * FROM jsonb_to_recordset(members) AS t(ref bigint, role text, type text) WHERE type = 'n'
  ) AS members ON
    type = 'w'
  JOIN node ON
    node.id = members.ref
WHERE
  relation.osm_type = 'r'
UNION ALL
SELECT
  way.*
FROM
  #{default_set} AS relation
  JOIN LATERAL (
    SELECT * FROM jsonb_to_recordset(members) AS t(ref bigint, role text, type text) WHERE type = 'w'
  ) AS members ON
    true
  JOIN way ON
    way.id = members.ref
WHERE
  relation.osm_type = 'r'"
      end
    end
  end
end

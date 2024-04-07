# frozen_string_literal: true
# typed: true

require 'test_helper'

module OverpassParser
  module Nodes
    class TestQueryRecurse < Minitest::Test
      extend T::Sig

      sig { void }
      def test_matches_to_sql
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal(
          "SELECT
  way.*
FROM
  _ AS way
  JOIN node ON
    node.id = ANY(way.nodes) AND
    node.geom && way.geom
WHERE
  way.osm_type = 'w'
UNION ALL
SELECT
  node.*
FROM
  _ AS relation
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
  _ AS relation
  JOIN LATERAL (
    SELECT * FROM jsonb_to_recordset(members) AS t(ref bigint, role text, type text) WHERE type = 'w'
  ) AS members ON
    true
  JOIN way ON
    way.id = members.ref
WHERE
  relation.osm_type = 'r'",
          OverpassParser.tree('way;>;')[0].queries[1].to_sql(d, '_')
        )
      end
    end
  end
end

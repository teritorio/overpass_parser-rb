# frozen_string_literal: true
# typed: true

require "test_helper"

module OverpassParser
  module Nodes
    class TestQueryUnion < Minitest::Test
      extend T::Sig

      sig { void }
      def test_matches_to_sql
        q = ->(s) { "'#{s}'" }
        assert_equal(
          "WITH
_62a85cc5638292f0ac99dd285b425a96dd482e81 AS (
  SELECT
    *
  FROM
    node
  WHERE
    osm_type = 'node'
),
_900a9b977c4cdee02c2fbc7761d773e0d7aad959 AS (
  SELECT
    *
  FROM
    way
  WHERE
    osm_type = 'way'
)
SELECT
  *
FROM (
  _62a85cc5638292f0ac99dd285b425a96dd482e81 UNION ALL _900a9b977c4cdee02c2fbc7761d773e0d7aad959
) AS t",
          OverpassParser.tree("(node;way;);")[0].queries[0].to_sql(q)
        )
      end
    end
  end
end

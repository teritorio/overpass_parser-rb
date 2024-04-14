# frozen_string_literal: true
# typed: true

require 'test_helper'

module OverpassParser
  module Nodes
    class TestQueryUnion < Minitest::Test
      extend T::Sig

      sig { void }
      def test_matches_to_sql
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal(
          "WITH
_62a85cc5638292f0ac99dd285b425a96dd482e81 AS (
  SELECT
    *
  FROM
    node
  WHERE
    osm_type = 'n'
),
_900a9b977c4cdee02c2fbc7761d773e0d7aad959 AS (
  SELECT
    *
  FROM
    way
  WHERE
    osm_type = 'w'
)
SELECT DISTINCT ON(osm_type, id)
  *
FROM (
  (SELECT * FROM _62a85cc5638292f0ac99dd285b425a96dd482e81) UNION
  (SELECT * FROM _900a9b977c4cdee02c2fbc7761d773e0d7aad959)
) AS t
ORDER BY
  osm_type, id",
          OverpassParser.parse('(node;way;);').queries[0]&.to_sql(d, '_')
        )
      end
    end
  end
end

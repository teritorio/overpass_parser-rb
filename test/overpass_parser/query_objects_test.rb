# frozen_string_literal: true
# typed: true

require "test_helper"

module OverpassParser
  module Nodes
    class TestQueryObjects < Minitest::Test
      extend T::Sig

      sig do
        params(
          query: String
        ).returns(OverpassParser::Nodes::QueryObjects)
      end
      def parse(query)
        tree = OverpassParser.tree("#{query};")
        tree[0].queries[0]
      end

      sig { void }
      def test_matches_to_sql
        q = ->(s) { "'#{s}'" }
        assert_equal(
          "SELECT
  *
FROM
  _a
WHERE
  osm_type = 'node' AND
  (tags?'a' AND tags->>'a' = 'b') AND
  ST_Envelope('LINESTRING(1.0 2.0, 3.0 4.0)'::geometry) && geom",
          parse("node.a[a=b](1,2,3,4)->.b").to_sql(q)
        )
      end
    end
  end
end

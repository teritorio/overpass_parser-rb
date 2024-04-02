# frozen_string_literal: true
# typed: true

require "test_helper"

module OverpassParser::Nodes
  class TestQueryObjects < Minitest::Test
    extend T::Sig

    sig do
      params(
        query: String
      ).returns(OverpassParser::Nodes::QueryObjects)
    end
    def parse(query)
      tree = OverpassParser.tree("#{query};")
      tree[0][:queries][0]
    end

    sig { void }
    def test_matches_to_sql
      q = ->(s) { "'#{s}'" }
      assert_equal(
        """
_29ce396b12327b71ffd2503f771773aa25f1e855 AS (
  SELECT
    *
  FROM
    node
  WHERE
    (tags?'a' AND tags->>'a' = 'b') AND
    ST_Envelope('LINESTRING(1.0 2.0, 3.0 4.0)'::geometry) && geom
)
""",
        parse("node[a=b](1,2,3,4)").to_sql(q)
      )
    end
  end
end

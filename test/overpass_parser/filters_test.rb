# frozen_string_literal: true
# typed: true

require "test_helper"

module OverpassParser
  module Nodes
    class TestFilters < Minitest::Test
      extend T::Sig

      sig do
        params(
          query: String
        ).returns(OverpassParser::Nodes::Filters)
      end
      def parse(query)
        tree = OverpassParser.tree("node#{query};")
        tree[0].queries[0].filters
      end

      sig { void }
      def test_matches_to_sql
        q = ->(s) { "'#{s}'" }
        assert_equal("ST_Envelope('LINESTRING(1.0 2.0, 3.0 4.0)'::geometry) && geom", parse("(1,2,3,4)").to_sql(q))
        assert_equal("id = ANY (ARRAY[1, 2, 3])", parse("(id:1,2,3)").to_sql(q))
        assert_equal("ST_Intersects(geom, (SELECT geom FROM _a))", parse("(area.a)").to_sql(q))
        assert_equal("ST_Within(geom, (SELECT geom FROM _a), 12.3)", parse("(around.a:12.3)").to_sql(q))
      end
    end
  end
end

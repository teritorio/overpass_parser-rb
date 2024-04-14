# frozen_string_literal: true
# typed: true

require 'test_helper'

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
        tree = OverpassParser.parse("#{query};")
        tree[0].queries[0]
      end

      sig { void }
      def test_matches_to_sql
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal(
          "SELECT
  *
FROM
  _a
WHERE
  osm_type = 'n' AND
  (tags?'a' AND tags->>'a' = 'b') AND
  ST_Intersects(ST_Envelope('SRID=4326;LINESTRING(2.0 1.0, 4.0 3.0)'::geometry), geom)",
          parse('node.a[a=b](1,2,3,4)->.b').to_sql(d, '_')
        )
      end
    end
  end
end

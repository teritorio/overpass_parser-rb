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
        T.must(T.cast(tree.queries[0], QueryObjects))
      end

      sig { void }
      def test_matches_bbox_to_sql
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal(
          "SELECT
  *
FROM
  _a
WHERE
  osm_type = 'n' AND
  (tags?'a' AND tags->>'a' = 'b') AND
  ST_Intersects(ST_Transform(ST_Envelope('SRID=4326;LINESTRING(2.0 1.0, 4.0 3.0)'::geometry), 4326), geom)",
          parse('node.a[a=b](1,2,3,4)->.b').to_sql(d, 4326, '_')
        )
      end

      sig { void }
      def test_matches_poly_to_sql
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal(
          "SELECT
  *
FROM
  _a
WHERE
  osm_type = 'n' AND
  ST_Intersects(ST_Transform('SRID=4326;POLYGON(2.0 1.0, 4.0 3.0, 6.0 5.0)'::geometry, 4326), geom)",
          parse('node.a(poly:"1 2 3 4 5 6")').to_sql(d, 4326, '_')
        )
      end
    end
  end
end

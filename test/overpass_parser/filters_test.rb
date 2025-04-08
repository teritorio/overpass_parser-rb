# frozen_string_literal: true
# typed: true

require 'test_helper'

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
        tree = OverpassParser.parse("node#{query};")
        T.must(T.cast(tree.queries[0], T.nilable(QueryObjects))&.filters)
      end

      sig { void }
      def test_matches_to_sql
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal("ST_Intersects(ST_Transform(\
ST_Envelope('SRID=4326;LINESTRING(2.0 -1.1, 4.0 3.0)'::geometry), 4326), geom)", parse('(-1.1,2,3,4)').to_sql(d, 4326))
        assert_equal('id = ANY (ARRAY[11111111111111])', parse('(11111111111111)').to_sql(d, 4326))
        assert_equal('id = ANY (ARRAY[1, 2, 3])', parse('(id:1,2,3)').to_sql(d, 4326))
        assert_equal('ST_Intersects(geom, (SELECT ST_Union(geom) FROM _a))', parse('(area.a)').to_sql(d, 4326))
        assert_equal('ST_Intersects(
          geom,
          ST_Transform(
            ST_Buffer(
              ST_Transform(
                (SELECT ST_Union(geom) FROM _a), ' + '
                -- Calculate UTM zone from
                32600 +
                CASE WHEN ST_Y(ST_Centroid(
                  (SELECT ST_Union(geom) FROM _a)
                )) >= 0 THEN 1 ELSE 31 END +
                floor(ST_X(ST_Centroid(
                  (SELECT ST_Union(geom) FROM _a)
                ) + 180) / 6)
              ),
              12.3
            ), 4326)
        )', parse('(around.a:12.3)').to_sql(d, 4326))
      end
    end
  end
end

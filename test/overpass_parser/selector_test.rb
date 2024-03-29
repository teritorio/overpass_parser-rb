# frozen_string_literal: true

require "test_helper"

module OverpassParser
  class TestSelector < Minitest::Test
    extend T::Sig

    sig {
      params(
        query: String,
      ).returns(String)
    }
    def parse(query)
      tree = OverpassParser.tree("node#{query};")
      tree[0][:queries][0][:selectors]
    end

    sig { void }
    def test_match_value
      assert(parse("[p]").match?({ "p" => "+48" }))

      assert(parse("[p=\"+48\"]").match?({ "p" => "+48" }))
      assert(!parse("[p=\"+48\"]").match?({ "p" => "+4" }))

      assert(parse("[p~4]").match?({ "p" => "+48" }))
      assert(!parse("[p~5]").match?({ "p" => "+48" }))

      assert(!parse("[highway=footway][footway=traffic_island]").match?({ "highway" => "footway" }))
      assert(parse("[highway=footway][footway=traffic_island]").match?({ "highway" => "footway",
                                                                         "footway" => "traffic_island" }))

      assert(parse("[highway=footway][!footway]").match?({ "highway" => "footway" }))
      assert(!parse("[highway=footway][!footway]").match?({ "highway" => "footway", "footway" => "traffic_island" }))
    end

    sig { void }
    def test_matches_to_overpass
      assert_equal("[amenity]", parse("[amenity]").to_overpass)
      assert_equal("[shop=florist]", parse("[shop=florist]").to_overpass)
      assert_equal("[shop~\"pizza.*\"]", parse('[shop~"pizza.*"]').to_overpass)
      assert_equal("[highway=footway][footway=traffic_island]",
                   parse("[highway=footway][footway=traffic_island]").to_overpass)
      assert_equal("[!amenity]", parse("[!amenity]").to_overpass)
    end

    sig { void }
    def test_matches_to_sql
      q = ->(s) { "'#{s}'" }
      assert_equal("tags?'amenity'", parse("[amenity]").to_sql(q))
      assert_equal("(tags?'shop' AND tags->>'shop' = 'florist')", parse("[shop=florist]").to_sql(q))
      assert_equal("(tags?'shop' AND tags->>'shop' ~ '(pizza.*)')", parse('[shop~"pizza.*"]').to_sql(q))
      assert_equal(
        "(tags?'highway' AND tags->>'highway' = 'footway') AND " \
        "(tags?'footway' AND tags->>'footway' = 'traffic_island')",
        parse("[highway=footway][footway=traffic_island]").to_sql(q)
      )
      assert_equal("NOT tags?'amenity'", parse("[!amenity]").to_sql(q))
    end
  end
end

# frozen_string_literal: true
# typed: true

require 'test_helper'

module OverpassParser
  module Nodes
    class TestSelectors < Minitest::Test
      extend T::Sig

      sig do
        params(
          query: String
        ).returns(OverpassParser::Nodes::Selectors)
      end
      def parse(query)
        tree = OverpassParser.tree("node#{query};")
        tree[0].queries[0].selectors
      end

      sig { void }
      def test_match_value
        assert_equal(['p'], parse('[p]').matches({ 'p' => '+48' }))

        assert_equal(['p'], parse('[p="+48"]').matches({ 'p' => '+48' }))
        assert_nil(parse('[p="+48"]').matches({ 'p' => '+4' }))

        assert_equal(['p'], parse('[p~4]').matches({ 'p' => '+48' }))
        assert_nil(parse('[p~5]').matches({ 'p' => '+48' }))

        assert_nil(parse('[highway=footway][footway=traffic_island]').matches({ 'highway' => 'footway' }))
        assert_equal(
          %w[highway footway],
          parse('[highway=footway][footway=traffic_island]').matches({ 'highway' => 'footway',
                                                                       'footway' => 'traffic_island' })
        )

        assert_equal(['highway'], parse('[highway=footway][!footway]').matches({ 'highway' => 'footway' }))
        assert_nil(
          parse('[highway=footway][!footway]').matches({ 'highway' => 'footway',
                                                         'footway' => 'traffic_island' })
        )
      end

      sig { void }
      def test_sort
        parse('[highway=footway][!footway]')
      end

      sig { void }
      def test_matches_to_overpass
        assert_equal('[amenity]', parse('[amenity]').to_overpass)
        assert_equal('[shop=florist]', parse('[shop=florist]').to_overpass)
        assert_equal('[shop~"pizza.*"]', parse('[shop~"pizza.*"]').to_overpass)
        assert_equal('[highway=footway][footway=traffic_island]',
                     parse('[highway=footway][footway=traffic_island]').to_overpass)
        assert_equal('[!amenity]', parse('[!amenity]').to_overpass)

        assert_equal('[amenity]', parse('[amenity]').sort.to_overpass)
      end

      sig { void }
      def test_matches_to_sql
        q = ->(s) { "'#{s}'" }
        assert_equal("tags?'amenity'", parse('[amenity]').to_sql(q))
        assert_equal("(tags?'shop' AND tags->>'shop' = 'florist')", parse('[shop=florist]').to_sql(q))
        assert_equal("(tags?'shop' AND tags->>'shop' ~ '(pizza.*)')", parse('[shop~"pizza.*"]').to_sql(q))
        assert_equal(
          "(tags?'highway' AND tags->>'highway' = 'footway') AND " \
          "(tags?'footway' AND tags->>'footway' = 'traffic_island')",
          parse('[highway=footway][footway=traffic_island]').to_sql(q)
        )
        assert_equal("NOT tags?'amenity'", parse('[!amenity]').to_sql(q))
      end
    end
  end
end

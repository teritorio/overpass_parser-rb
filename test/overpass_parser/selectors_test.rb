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
        tree = OverpassParser.parse("node#{query};")
        T.must(T.cast(tree.queries[0], T.nilable(QueryObjects))&.selectors)
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
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal("tags?'amenity'", parse('[amenity]').to_sql(d))
        assert_equal("(tags?'shop' AND tags->>'shop' = 'florist')", parse('[shop=florist]').to_sql(d))
        assert_equal("(tags?'shop' AND tags->>'shop' ~ '(pizza.*)')", parse('[shop~"pizza.*"]').to_sql(d))
        assert_equal(
          "(tags?'highway' AND tags->>'highway' = 'footway') AND " \
          "(tags?'footway' AND tags->>'footway' = 'traffic_island')",
          parse('[highway=footway][footway=traffic_island]').to_sql(d)
        )
        assert_equal("NOT tags?'amenity'", parse('[!amenity]').to_sql(d))
      end

      sig { void }
      def test_matches_to_sql_quote
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal("(tags?'name' AND tags->>'name' = 'l''l')", parse('[name="l\'l"]').to_sql(d))

        d = OverpassParser::SqlDialect::Postgres.new(postgres_escape_literal: ->(s) { "_#{s}_" })
        assert_equal("(tags?_name_ AND tags->>_name_ = _l'l_)", parse('[name="l\'l"]').to_sql(d))
      end

      sig { void }
      def test_sort
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal(
          "tags?'power' AND (NOT tags?'power' OR tags->>'power' !~ '(no|cable|line|minor_line$)')",
          parse('[power!~"no|cable|line|minor_line$"][power]').sort.to_sql(d)
        )
      end
    end
  end
end

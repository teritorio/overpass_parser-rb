# frozen_string_literal: true
# typed: true

require "test_helper"

module OverpassParser
  module Nodes
    class TestRequest < Minitest::Test
      extend T::Sig

      sig { void }
      def test_matches_to_sql
        q = ->(s) { "'#{s}'" }
        assert_equal(
          "WITH
_a AS (
  SELECT
    *
  FROM
    node
  WHERE
    osm_type = 'n' AND
    id = ANY (ARRAY[1])
)
SELECT
  osm_type,
  id,
  version,
  created,
  tags,
  nodes,
  members,
  ST_PointOnSurface(geom) AS geom
FROM (
  (SELECT * FROM _a)
) AS t",
          OverpassParser.tree("[out:json][timeout:25];node(1)->.a;out center meta;")[0].to_sql(q)
        )
      end
    end
  end
end

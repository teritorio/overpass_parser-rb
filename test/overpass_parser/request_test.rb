# frozen_string_literal: true
# typed: true

require 'test_helper'

module OverpassParser
  module Nodes
    class TestRequest < Minitest::Test
      extend T::Sig

      sig { void }
      def test_matches_to_sql
        q = ->(s) { "'#{s}'" }
        assert_equal(
          "SET statement_timeout = 25;
WITH
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
  -- 'changeset'
  -- 'user'
  -- 'uid'
  jsonb_strip_nulls(jsonb_build_object(
    'type', CASE osm_type WHEN 'n' THEN 'node' WHEN 'w' THEN 'node' WHEN 'r' THEN 'relation' WHEN 'a' THEN 'area' END,
    'id', id,
    'lon', CASE osm_type WHEN 'n' THEN ST_X(geom) END,
    'lat', CASE osm_type WHEN 'n' THEN ST_Y(geom) END,
    'timestamp', created,
    'version', version,
    'center', json_build_object(
      'lon', ST_PointOnSurface(geom),
      'at', ST_PointOnSurface(geom)
    ),
    'nodes', nodes,
    'members', members,
    'tags', tags))
FROM
  _a",
          OverpassParser.tree('[out:json][timeout:25];node(1)->.a;out center meta;')[0].to_sql(q)
        )
      end
    end
  end
end

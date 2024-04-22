# frozen_string_literal: true
# typed: true

require 'test_helper'

module OverpassParser
  module Nodes
    class TestRequest < Minitest::Test
      extend T::Sig

      sig { void }
      def test_matches_to_sql
        d = OverpassParser::SqlDialect::Postgres.new
        assert_equal(
          "SET statement_timeout = 25000;
WITH
_a AS (
  SELECT
    *
  FROM
    node
  WHERE
    osm_type = 'n' AND
    id = ANY (ARRAY[1])
),
__finalizer AS (
  SELECT * FROM _a
)
SELECT
  jsonb_strip_nulls(jsonb_build_object(
    'type', CASE osm_type WHEN 'n' THEN 'node' WHEN 'w' THEN 'way' WHEN 'r' THEN 'relation' WHEN 'a' THEN 'area' END,
    'id', id,
    'lon', CASE osm_type WHEN 'n' THEN ST_X(geom)::numeric END,
    'lat', CASE osm_type WHEN 'n' THEN ST_Y(geom)::numeric END,
    'timestamp', created,
    'version', version,
    'changeset', changeset,
    'user', \"user\",
    'uid', uid,
    'center', CASE osm_type = 'w' OR osm_type = 'r'
      WHEN true THEN jsonb_build_object(
        'lon', ST_X(ST_PointOnSurface(geom))::numeric,
        'lat', ST_Y(ST_PointOnSurface(geom))::numeric
      )
    END,
    'nodes', nodes,
    'members', members,
    'tags', tags)) AS j
FROM
  __finalizer
;",
          OverpassParser.parse('[out:json][timeout:25];node(1)->.a;out center meta;').to_sql(
            d,
            'SELECT * FROM {{query}}'
          )
        )
      end
    end
  end
end

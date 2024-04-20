# frozen_string_literal: true

require 'test_helper'

module OverpassParser
  module Nodes
    class TestVisitor < Minitest::Test
      def test_quote
        tree = OverpassParser.parse("node['highway'=\"primary\"][operator=\"Commune d'Anglet\"];")
        assert_equal(
          QueryObjects.new(
            object_type: 'node',
            selectors: Selectors.new([
              Selector.new(key: 'highway', value: 'primary', operator: '='),
              Selector.new(key: 'operator', value: "Commune d'Anglet", operator: '=')
            ])
          ),
          tree.queries[0]
        )
      end

      def test_selector_key
        tree = OverpassParser.parse('node[highway];')
        assert_equal(
          QueryObjects.new(object_type: 'node', selectors: Selectors.new([Selector.new(key: 'highway', not_: false)])),
          tree.queries[0]
        )
      end

      def test_selector_key_value
        tree = OverpassParser.parse('node[highway=primary][ref=33];')
        assert_equal(
          QueryObjects.new(
            object_type: 'node',
            selectors: Selectors.new([
              Selector.new(key: 'highway', value: 'primary', operator: '='),
              Selector.new(key: 'ref', value: '33', operator: '=')
            ])
          ),
          tree.queries[0]
        )
      end

      def test_selector_set
        tree = OverpassParser.parse('node._[highway=primary];')
        assert_equal(
          QueryObjects.new(
            object_type: 'node',
            selectors: Selectors.new([Selector.new(key: 'highway', value: 'primary', operator: '=')]),
            set: '_'
          ),
          tree.queries[0]
        )
      end

      def test_filter_arround
        tree = OverpassParser.parse('node(around.a:100.0);')
        assert_equal(
          QueryObjects.new(
            object_type: 'node',
            filters: Filters.new([Filter.new(around: FilterAround.new(core: 'a', radius: 100.0))])
          ),
          tree.queries[0]
        )
      end

      def test_recurse
        tree = OverpassParser.parse('>;')
        assert_equal(QueryRecurse.new(recurse: '>'), tree.queries[0])
      end

      def test_parse_error
        assert_raises ParsingError do
          OverpassParser.parse(':')
        end
      end

      def test_full
        tree = OverpassParser.parse('
          [out:json][timeout:25];
          area(id:3600000001)->.a;
          area(3600000002)->.b;
          relation[name="En aban !"](around._:500);
          >;
          nwr._[highway=bus_stop];
          out center meta;
        ')
        assert_equal(
          Request.new(
            timeout: 25,
            queries: [
              QueryObjects.new(object_type: 'area', filters: Filters.new([Filter.new(ids: [3_600_000_001])]),
                               asignation: 'a'),
              QueryObjects.new(object_type: 'area', filters: Filters.new([Filter.new(ids: [3_600_000_002])]),
                               asignation: 'b'),
              QueryObjects.new(
                object_type: 'relation',
                selectors: Selectors.new([Selector.new(key: 'name', value: 'En aban !', operator: '=')]),
                filters: Filters.new([Filter.new(around: FilterAround.new(core: '_', radius: 500.0))])
              ),
              QueryRecurse.new(recurse: '>'),
              QueryObjects.new(
                object_type: 'nwr',
                selectors: Selectors.new([Selector.new(key: 'highway', value: 'bus_stop', operator: '=')]),
                set: '_'
              )
            ],
            out: Out.new(geom: 'center', level_of_details: 'meta')
          ),
          tree
        )
      end

      def test_to_sql
        tree = OverpassParser.parse('
          [out:json][timeout:25];
          area(3600166718)->.a;
          (
            nwr[a="Ñ\'\\""][b=\'"\'](area.a)->.x;
            nwr[c](area.a)->.z;
          )->.k;
          out center meta;
        ')
        d = OverpassParser::SqlDialect::Postgres.new

        assert_equal("SET statement_timeout = 25000;
WITH
_a AS (
  SELECT
    *
  FROM
    area
  WHERE
    id = ANY (ARRAY[3600166718])
),
_k AS (
  WITH
  _x AS (
    SELECT
      *
    FROM
      nwr
    WHERE
      osm_type = ANY (ARRAY['n', 'w', 'r']) AND
      (tags?'a' AND tags->>'a' = 'Ñ''\"') AND (tags?'b' AND tags->>'b' = '\"') AND
      ST_Intersects(geom, (SELECT ST_Union(geom) FROM _a))
  ),
  _z AS (
    SELECT
      *
    FROM
      nwr
    WHERE
      osm_type = ANY (ARRAY['n', 'w', 'r']) AND
      tags?'c' AND
      ST_Intersects(geom, (SELECT ST_Union(geom) FROM _a))
  )
  SELECT DISTINCT ON(osm_type, id)
    *
  FROM (
    (SELECT * FROM _x) UNION
    (SELECT * FROM _z)
  ) AS t
  ORDER BY
    osm_type, id
)
SELECT
  -- 'changeset'
  -- 'user'
  -- 'uid'
  jsonb_strip_nulls(jsonb_build_object(
    'type', CASE osm_type WHEN 'n' THEN 'node' WHEN 'w' THEN 'way' WHEN 'r' THEN 'relation' WHEN 'a' THEN 'area' END,
    'id', id,
    'lon', CASE osm_type WHEN 'n' THEN ST_X(geom)::numeric END,
    'lat', CASE osm_type WHEN 'n' THEN ST_Y(geom)::numeric END,
    'timestamp', created,
    'version', version,
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
  _k
;",
                     tree.to_sql(d))
      end
    end
  end
end

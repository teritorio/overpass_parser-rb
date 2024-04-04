# frozen_string_literal: true

require "test_helper"

module OverpassParser
  module Nodes
    class TestVisitor < Minitest::Test
      def test_quote
        tree = OverpassParser.tree("node['highway'=\"primary\"][operator=\"Commune d'Anglet\"];")
        assert_equal(
          QueryObjects.new(
            "node",
            selectors: [
              Selector.new("highway", value: "primary", operator: "="),
              Selector.new("operator", value: "Commune d'Anglet", operator: "=")
            ]
          ),
          tree[0].queries[0]
        )
      end

      def test_selector_key
        tree = OverpassParser.tree("node[highway];")
        assert_equal(
          QueryObjects.new("node", selectors: [Selector.new("highway", not_: false)]),
          tree[0].queries[0]
        )
      end

      def test_selector_key_value
        tree = OverpassParser.tree("node[highway=primary][ref=33];")
        assert_equal(
          QueryObjects.new(
            "node",
            selectors: [
              Selector.new("highway", value: "primary", operator: "="),
              Selector.new("ref", value: "33", operator: "=")
            ]
          ),
          tree[0].queries[0]
        )
      end

      def test_selector_set
        tree = OverpassParser.tree("node._[highway=primary];")
        assert_equal(
          QueryObjects.new(
            "node",
            selectors: [Selector.new("highway", value: "primary", operator: "=")],
            set: "_"
          ),
          tree[0].queries[0]
        )
      end

      def test_filter_arround
        tree = OverpassParser.tree("node(around.a:100.0);")
        assert_equal(
          QueryObjects.new("node", filters: [Filter.new(around: FilterAround.new(core: "a", radius: 100.0))]),
          tree[0].queries[0]
        )
      end

      def test_recurse
        tree = OverpassParser.tree(">;")
        assert_equal(QueryRecurse.new(recurse: ">"), tree[0].queries[0])
      end

      def test_full
        tree = OverpassParser.tree('
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
            queries: [
              QueryObjects.new("area", filters: [Filter.new(ids: [3_600_000_001])], asignation: "a"),
              QueryObjects.new("area", filters: [Filter.new(ids: [3_600_000_002])], asignation: "b"),
              QueryObjects.new(
                "relation",
                selectors: [Selector.new("name", value: "En aban !", operator: "=")],
                filters: [Filter.new(around: FilterAround.new(core: "_", radius: 500.0))]
              ),
              QueryRecurse.new(recurse: ">"),
              QueryObjects.new(
                "nwr",
                selectors: [Selector.new("highway", value: "bus_stop", operator: "=")],
                set: "_"
              )
            ],
            out: Out.new(geom: "center", level_of_details: "meta")
          ),
          tree[0]
        )
      end

      def test_to_sql
        tree = OverpassParser.tree('
          [out:json][timeout:25];
          area(3600166718)->.a;
          (
            nwr[a="Ñ"](area.a)->.x;
            nwr[c](area.a)->.z;
          )->.k;
          out center meta;
        ')
        q = ->(s) { "'#{s}'" }

        assert_equal("WITH
_a AS (
  SELECT
    *
  FROM
    area
  WHERE
    osm_type = 'a' AND
    id = ANY (ARRAY[166718])
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
      (tags?'a' AND tags->>'a' = 'Ñ') AND
      ST_Intersects(geom, (SELECT geom FROM _a))
  ),
  _z AS (
    SELECT
      *
    FROM
      nwr
    WHERE
      osm_type = ANY (ARRAY['n', 'w', 'r']) AND
      tags?'c' AND
      ST_Intersects(geom, (SELECT geom FROM _a))
  )
  SELECT
    *
  FROM (
    (SELECT * FROM _x) UNION ALL
    (SELECT * FROM _z)
  ) AS t
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
FROM
  _k",
                     tree[0].to_sql(q))
      end
    end
  end
end

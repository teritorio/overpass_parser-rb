# frozen_string_literal: true

require "test_helper"

module OverpassParser::Nodes
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
        tree[0][:queries][0]
      )
    end

    def test_selector_key
      tree = OverpassParser.tree("node[highway];")
      assert_equal(
        QueryObjects.new("node", selectors: [Selector.new("highway", not_: false)]),
        tree[0][:queries][0]
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
        tree[0][:queries][0]
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
        tree[0][:queries][0]
      )
    end

    def test_filter_arround
      tree = OverpassParser.tree("node(around.a:100.0);")
      assert_equal(
        QueryObjects.new("node", filters: [Filter.new(around: FilterAround.new(core: "a", radius: 100.0))]),
        tree[0][:queries][0]
      )
    end

    def test_recurse
      tree = OverpassParser.tree(">;")
      assert_equal({ type: :query_recurse, recurse: ">" }, tree[0][:queries][0])
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
        [
          QueryObjects.new("area", filters: [Filter.new(ids: [3_600_000_001])], asignation: "a"),
          QueryObjects.new("area", filters: [Filter.new(ids: [3_600_000_002])], asignation: "b"),
          QueryObjects.new(
            "relation",
            selectors: [Selector.new("name", value: "En aban !", operator: "=")],
            filters: [Filter.new(around: FilterAround.new(core: "_", radius: 500.0))]
          ),
          { type: :query_recurse, recurse: ">" },
          QueryObjects.new(
            "nwr",
            selectors: [Selector.new("highway", value: "bus_stop", operator: "=")],
            set: "_"
          )
        ],
        tree[0][:queries]
      )
    end
  end
end

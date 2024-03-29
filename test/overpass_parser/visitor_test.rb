# frozen_string_literal: true

require "test_helper"

module OverpassParser
  class TestVisitor < Minitest::Test
    def test_quote
      tree = OverpassParser.tree("node['highway'=\"primary\"][operator=\"Commune d'Anglet\"];")
      assert_equal(
        { type: :query_object, set: nil, object_type: "node", selectors: [
          Selector.new("highway", value: "primary", operator: "="),
          Selector.new("operator", value: "Commune d'Anglet", operator: "=")
        ], filter: [] }, tree[0][:queries][0]
      )
    end

    def test_selector_key
      tree = OverpassParser.tree("node[highway];")
      assert_equal(
        { type: :query_object, set: nil, object_type: "node", selectors: [
          Selector.new("highway", not_: false)
        ], filter: [] }, tree[0][:queries][0]
      )
    end

    def test_selector_key_value
      tree = OverpassParser.tree("node[highway=primary][ref=33];")
      assert_equal(
        { type: :query_object, set: nil, object_type: "node", selectors: [
          Selector.new("highway", value: "primary", operator: "="),
          Selector.new("ref", value: "33", operator: "=")
        ], filter: [] }, tree[0][:queries][0]
      )
    end

    def test_selector_set
      tree = OverpassParser.tree("node._[highway=primary];")
      assert_equal(
        { type: :query_object, set: "._", object_type: "node", selectors: [
          Selector.new("highway", value: "primary", operator: "=")
        ], filter: [] }, tree[0][:queries][0]
      )
    end

    def test_filter_arround
      tree = OverpassParser.tree("node(around.a:100.0);")
      assert_equal(
        { type: :query_object, set: nil, object_type: "node", selectors: [],
          filter: [
            { type: :filter, bbox: nil, ids: nil, area_id: nil, around: { core: ".a", radius: "100.0" } }
          ] }, tree[0][:queries][0]
      )
    end

    def test_recurse
      tree = OverpassParser.tree(">;")
      assert_equal({ type: :query_recurse, recurse: ">" }, tree[0][:queries][0])
    end

    def test_full
      tree = OverpassParser.tree('
        [out:json][timeout:25];
        relation[name="En aban !"];>;nwr._[highway=bus_stop];
        out center meta;
      ')
      assert_equal(
        [
          { type: :query_object, set: nil, object_type: "relation", selectors: [
            Selector.new("name", value: "En aban !", operator: "=")
          ], filter: [] },
          { type: :query_recurse, recurse: ">" },
          { type: :query_object, set: "._", object_type: "nwr",
            selectors: [
              Selector.new("highway", value: "bus_stop", operator: "=")
            ], filter: [] }
        ], tree[0][:queries]
      )
    end
  end
end

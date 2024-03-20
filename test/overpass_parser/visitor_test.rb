# frozen_string_literal: true

require "test_helper"

class OverpassParser::TestVisitor < Minitest::Test
  def test_quote
    tree = OverpassParser.tree("node['highway'=\"primary\"];")
    assert_equal(
      { type: :query_object, set: nil, object_type: "node",
        selectors: [{ type: :selector, value: "primary", key: "highway", operator: "=" }], filter: [] }, tree[0][:queries][0]
    )
  end

  def test_selector
    tree = OverpassParser.tree("node[highway=primary];")
    assert_equal(
      { type: :query_object, set: nil, object_type: "node",
        selectors: [{ type: :selector, value: "primary", key: "highway", operator: "=" }], filter: [] }, tree[0][:queries][0]
    )
  end

  def test_selector_set
    tree = OverpassParser.tree("node._[highway=primary];")
    assert_equal(
      { type: :query_object, set: "._", object_type: "node",
        selectors: [{ type: :selector, value: "primary", key: "highway", operator: "=" }], filter: [] }, tree[0][:queries][0]
    )
  end

  def test_recurse
    tree = OverpassParser.tree(">;")
    assert_equal({ type: :query_recurse, recurse: ">" }, tree[0][:queries][0])
  end

  def test_full
    tree = OverpassParser.tree('
relation[name="En aban !"];
>;
nwr._[highway=bus_stop];
    ')
    assert_equal(
      [
        { type: :query_object, set: nil, object_type: "relation",
          selectors: [{ type: :selector, value: "En aban !", key: "name", operator: "=" }], filter: [] }, { type: :query_recurse, recurse: ">" }, { type: :query_object, set: "._", object_type: "nwr", selectors: [{ type: :selector, value: "bus_stop", key: "highway", operator: "=" }], filter: [] }
      ], tree[0][:queries]
    )
  end
end

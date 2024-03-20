# frozen_string_literal: true

require "test_helper"

class OverpassParser::TestVisitor < Minitest::Test
  def test_selector
    tree = OverpassParser.tree('node[highway=primary];')
    assert_equal([{:type=>:request, :queries=>[{:type=>:query, :object_type=>"node", :selectors=>[{:type=>:selector, :value=>"primary", :key=>"highway", :operator=>"="}], :filter=>[]}]}], tree)
  end
end

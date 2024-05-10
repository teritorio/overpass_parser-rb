# frozen_string_literal: true
# typed: strict

# load the native extension
require File.expand_path(File.join('..', 'ext', 'overpass_parser', 'overpass_parser'), __dir__)
require 'sorbet-runtime'
require_relative('overpass_parser/visitor')
require_relative('overpass_parser/sql_dialect/duckdb')
require_relative('overpass_parser/sql_dialect/postgres')
require_relative('overpass_parser/sql_dialect/sql_dialect')

module OverpassParser
  extend T::Sig

  sig do
    params(
      overpass_script: String
    ).returns(Nodes::Request)
  end
  def self.parse(overpass_script)
    parser = OverpassParser::Parser.parse(overpass_script)
    parser.add_error_listener(ErrorListener.new)
    walker = OverpassParser::Walker.new
    parser.visit(walker)
    walker.stack
  end
end

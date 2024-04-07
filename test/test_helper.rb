# frozen_string_literal: true

$LOAD_PATH.unshift File.expand_path('../lib', __dir__)
require 'overpass_parser'
require 'overpass_parser/visitor'
require 'overpass_parser/sql_dialect/sql_dialect'
require 'overpass_parser/sql_dialect/postgres'

require 'minitest/autorun'

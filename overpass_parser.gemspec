# frozen_string_literal: true

$:.unshift File.join(File.dirname(__FILE__), "lib")
require "overpass_parser/version"

Gem::Specification.new do |s|
  s.name     = "overpass_parser"
  s.version  = OverpassParser::VERSION
  s.authors  = ["Frédéric Rodrigo"]
  s.email    = ["fred.rodrigo@gmail.com"]
  s.homepage = "https://github.com/frodrigo/ovarpass-api_language-parser_rb"

  s.description = s.summary = "An Overpass API subset parser for Ruby"

  s.platform = Gem::Platform::RUBY
  s.required_ruby_version = ">= 3.0"

  s.add_dependency "rice", "~> 4.0"
  s.add_dependency "sorbet-struct-comparable", "~> 1.3.0"

  s.extensions = File.join(*%w[ext overpass_parser extconf.rb])

  s.require_path = "lib"
  s.files = Dir[
    "{lib,spec}/**/*",
    "ext/overpass_parser/*.{cpp,h}",
    "ext/overpass_parser/extconf.rb",
    "ext/overpass_parser/antlrgen/*",
    "ext/overpass_parser/antlr4-upstream/runtime/Cpp/runtime/src/**/*.{cpp,h}",
    "Gemfile",
    "README.md",
    "Rakefile",
    "overpass_parser.gemspec"
  ]
  s.metadata["rubygems_mfa_required"] = "true"
end

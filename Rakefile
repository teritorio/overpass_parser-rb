# frozen_string_literal: true

require "bundler/gem_tasks"
require "minitest/test_task"
require "bundler"

require "antlr4-native"
require "etc"

Minitest::TestTask.create

require "rubocop/rake_task"

RuboCop::RakeTask.new

task default: %i[test rubocop]

def ruby_installer?
  Object.const_defined?(:RubyInstaller)
end

Bundler::GemHelper.install_tasks

task :generate do
  generator = Antlr4Native::Generator.new(
    grammar_files: ["./Overpass.g4"],
    output_dir: "ext/",
    parser_root_method: "request"
  )

  generator.generate
end

task :compile do
  Dir.chdir(File.join(%w[ext overpass_parser])) do
    load "extconf.rb"
    RubyInstaller::Runtime.enable_msys_apps if ruby_installer?
    exec "make -j #{Etc.nprocessors}"
  end
end

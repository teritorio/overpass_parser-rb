require 'bundler'

require 'antlr4-native'
require 'etc'

def ruby_installer?
  Object.const_defined?(:RubyInstaller)
end

Bundler::GemHelper.install_tasks

task :generate do
  generator = Antlr4Native::Generator.new(
    grammar_files: ['./Overpass.g4'],
    output_dir: 'ext/',
    parser_root_method: 'request'
  )

  generator.generate
end

task :compile do
  Dir.chdir(File.join(%w[ext overpass_parser])) do
    load 'extconf.rb'
    RubyInstaller::Runtime.enable_msys_apps if ruby_installer?
    exec "make -j #{Etc.nprocessors}"
  end
end

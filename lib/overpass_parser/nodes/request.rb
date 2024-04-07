# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'
require 'digest/sha1'
require_relative 'out'

module OverpassParser
  module Nodes
    class Request < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :timeout, T.nilable(Integer), default: 180
      const :queries, T::Array[T.any(QueryObjects, QueryUnion, QueryRecurse)]
      const :out, Nodes::Out, default: Nodes::Out.new

      sig do
        params(
          sql_dialect: SqlDialect::SqlDialect
        ).returns(T.nilable(String))
      end
      def to_sql(sql_dialect)
        default_set = T.let(nil, T.nilable(String))
        with = queries.collect do |querie|
          sql = querie.to_sql(sql_dialect, default_set).gsub(/^/, '  ')
          default_set = querie.asignation
          "#{querie.asignation} AS (\n#{sql}\n)"
        end.join(",\n")
        select = out.to_sql(sql_dialect)
        "#{sql_dialect.statement_timeout([timeout || 180, 500].min * 1000)}
WITH
#{with}
#{select}
FROM
  #{T.must(queries[-1]).asignation}
;"
      end
    end
  end
end

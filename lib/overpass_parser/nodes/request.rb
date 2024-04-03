# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "sorbet-struct-comparable"
require "digest/sha1"

module OverpassParser
  module Nodes
    class Request < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :queries, T::Array[T.any(QueryObjects, QueryUnion, QueryRecurse)]

      sig do
        params(
          escape_literal: T.proc.params(s: String).returns(String)
        ).returns(T.nilable(String))
      end
      def to_sql(escape_literal)
        asignations = queries.collect(&:asignation)
        with = queries.collect do |querie|
          sql = querie.to_sql(escape_literal).gsub(/^/, "  ")
          "#{querie.asignation} AS (\n#{sql}\n)"
        end.join(",\n")
        asignations = queries.collect do |querie|
          "(SELECT * FROM #{querie.asignation})"
        end
        "WITH
#{with}
SELECT
  *
FROM (
  #{asignations.join(" UNION ALL\n  ")}
) AS t"
      end
    end
  end
end

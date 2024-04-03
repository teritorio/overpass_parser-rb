# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "sorbet-struct-comparable"
require "digest/sha1"

module OverpassParser
  module Nodes
    class Request < T::Struct
      extend T::Sig

      const :queries, T::Array[T.any(QueryObjects, QueryUnion)]

      sig do
        params(
          escape_literal: T.proc.params(s: String).returns(String)
        ).returns(T.nilable(String))
      end
      def to_sql(escape_literal)
        asignations = queries.collect(&:asignation)
        with = queries.collect { |q| q.to_sql(escape_literal) }.join(",\n")
        "WITH
#{with}
SELECT
  *
FROM (
  #{asignations.join(" UNION ALL")}
) AS t"
      end
    end
  end
end

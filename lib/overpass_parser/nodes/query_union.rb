# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "sorbet-struct-comparable"
require "digest/sha1"

module OverpassParser
  module Nodes
    class QueryUnion < Array
      extend T::Sig

      sig do
        params(
          escape_literal: T.proc.params(s: String).returns(String)
        ).returns(T.nilable(String))
      end
      def to_sql(escape_literal)
        asignations = collect(&:asignation)
        with = collect { |q| q.to_sql(escape_literal) }.join(",\n")
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

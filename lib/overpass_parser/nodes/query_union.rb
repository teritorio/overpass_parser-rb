# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "digest/sha1"

module OverpassParser
  module Nodes
    class QueryUnion < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      ### FIXME
      # const :queries, T::Array[T.any(QueryObjects, QueryUnion, QueryRecurse)]
      const :queries, T::Array[QueryObjects]
      const :asignation, T.nilable(String)

      def initialize(queries:, asignation: nil)
        @queries = queries
        @asignation = asignation.nil? ? "_#{Digest::SHA1.hexdigest(inspect)}" : "_#{asignation}"
      end

      sig do
        params(
          escape_literal: T.proc.params(s: String).returns(String)
        ).returns(T.nilable(String))
      end
      def to_sql(escape_literal)
        asignations = queries.collect(&:asignation)
        with = queries.collect { |q| q.to_sql(escape_literal) }.join(",\n")
        "#{@asignation} AS WITH
#{with}
SELECT
  *
FROM (
  #{asignations.join(" UNION ALL ")}
) AS t"
      end
    end
  end
end

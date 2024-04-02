# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "sorbet-struct-comparable"
require "digest/sha1"

module OverpassParser::Nodes
  class QueryObjects < T::Struct
    include T::Struct::ActsAsComparable
    extend T::Sig

    const :object_type, String
    const :selectors, T.nilable(Selectors)
    const :filters, T.nilable(Filters)
    const :set, String

    def initialize(object_type, selectors: nil, filters: nil, set: nil)
      @object_type = object_type
      @selectors = selectors
      @filters = filters
      @set = set.nil? ? "_#{Digest::SHA1.hexdigest(inspect)}" : set
    end

    sig do
      params(
        escape_literal: T.proc.params(s: String).returns(String)
      ).returns(T.nilable(String))
    end
    def to_sql(escape_literal)
      where = [
        selectors&.to_sql(escape_literal) || [],
        filters&.to_sql(escape_literal) || []
      ].compact.join(" AND\n    ")
      return unless where

      """
#{set} AS (
  SELECT
    *
  FROM
    #{object_type}
  WHERE
    #{where}
)
"""
    end
  end
end

# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "sorbet-struct-comparable"
require "digest/sha1"

module OverpassParser
  module Nodes
    class QueryRecurse < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :recurse, String

      sig do
        params(
          escape_literal: T.proc.params(s: String).returns(String)
        ).returns(T.nilable(String))
      end
      def to_sql(escape_literal)
        # TODO
      end
    end
  end
end

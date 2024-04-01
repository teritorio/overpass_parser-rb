# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "sorbet-struct-comparable"

module OverpassParser::Nodes
  class FilterAround < T::Struct
    include T::Struct::ActsAsComparable

    const :core, String
    const :radius, Float
  end

  class Filter < T::Struct
    include T::Struct::ActsAsComparable
    extend T::Sig

    const :bbox, T.nilable(T::Array[Float])
    const :ids, T.nilable(T::Array[Integer])
    const :area_id, T.nilable(String)
    const :around, T.nilable(FilterAround)

    sig do
      params(
        _escape_literal: T.proc.params(s: String).returns(String)
      ).returns(T.nilable(String))
    end
    def to_sql(_escape_literal)
      clauses = []
      unless bbox.nil?
        clauses << "ST_Envelope('LINESTRING(#{bbox[0]} #{bbox[1]}, #{bbox[2]} #{bbox[3]})'::geometry) && geom"
      end
      clauses << "id = ANY (ARRAY[#{ids.collect(&:to_s).join(", ")}])" unless ids.nil?
      clauses << "ST_Intersects(geom, (SELECT geom FROM #{area_id}))" unless area_id.nil?
      clauses << "ST_Within(geom, (SELECT geom FROM #{around.core}, #{around.radius})" unless around.nil?

      return nil if clauses.empty?

      clauses.join(" AND ")
    end
  end

  class Filters < Array
    extend T::Sig

    sig do
      params(
        escape_literal: T.proc.params(s: String).returns(String)
      ).returns(T.nilable(String))
    end
    def to_sql(escape_literal)
      if empty?
        nil
      elsif size == 1
        self[0].to_sql(escape_literal)
      else
        collect { |s| s.to_sql(escape_literal) }.join(" AND ")
      end
    end
  end
end

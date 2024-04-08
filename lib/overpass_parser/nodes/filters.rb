# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'

module OverpassParser
  module Nodes
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
          sql_dialect: SqlDialect::SqlDialect
        ).returns(T.nilable(String))
      end
      def to_sql(sql_dialect)
        clauses = []
        unless bbox.nil?
          clauses << "#{sql_dialect.st_intersects_extent}(ST_Envelope('LINESTRING(#{bbox[0]} #{bbox[1]}, #{bbox[2]} #{bbox[3]})'::geometry), geom)"
        end
        clauses << "id = ANY (ARRAY[#{ids.collect(&:to_s).join(', ')}])" unless ids.nil?
        clauses << "ST_Intersects(geom, (SELECT #{sql_dialect.st_union}(geom) FROM _#{area_id}))" unless area_id.nil?
        unless around.nil?
          clauses << "ST_Within(geom, (SELECT #{sql_dialect.st_union}(geom) FROM _#{around.core}), #{around.radius})"
        end

        return nil if clauses.empty?

        clauses.join(' AND ')
      end
    end

    class Filters < Array
      extend T::Sig

      sig do
        params(
          sql_dialect: SqlDialect::SqlDialect
        ).returns(T.nilable(String))
      end
      def to_sql(sql_dialect)
        if empty?
          nil
        elsif size == 1
          self[0].to_sql(sql_dialect)
        else
          collect { |s| s.to_sql(sql_dialect) }.join(' AND ')
        end
      end
    end
  end
end

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

      const :bbox, T.nilable([Float, Float, Float, Float])
      const :poly, T.nilable(T::Array[[Float, Float]])
      const :ids, T.nilable(T::Array[Integer])
      const :area_id, T.nilable(String)
      const :around, T.nilable(FilterAround)

      def bbox_clauses(sql_dialect, srid)
        "#{sql_dialect.st_intersects_extent}(" +
          sql_dialect.st_transform(
            "ST_Envelope('SRID=4326;LINESTRING(" \
            "#{T.must(bbox)[1]} #{T.must(bbox)[0]}, " \
            "#{T.must(bbox)[3]} #{T.must(bbox)[2]}" \
            ")'::geometry)", srid
          ) + ', geom)'
      end

      def poly_clauses(sql_dialect, srid)
        coords = T.must(poly).collect do |lat, lon|
          "#{lon} #{lat}"
        end.join(', ')
        "#{sql_dialect.st_intersects}(" +
          sql_dialect.st_transform("'SRID=4326;POLYGON(#{coords})'::geometry", srid) +
          ', geom)'
      end

      def around_clause(sql_dialect, srid)
        # Implementing Within clause using buffer in meters in the best UTM zone
        "ST_Intersects(
          geom,
          " + sql_dialect.st_transform("
            ST_Buffer(
              " + sql_dialect.st_transform("
                (SELECT #{sql_dialect.st_union}(geom) FROM _#{around&.core})",
                                           "
                -- Calculate UTM zone from
                32600 +
                CASE WHEN ST_Y(ST_Centroid(
                  (SELECT #{sql_dialect.st_union}(geom) FROM _#{around&.core})
                )) >= 0 THEN 1 ELSE 31 END +
                floor(ST_X(ST_Centroid(
                  (SELECT #{sql_dialect.st_union}(geom) FROM _#{around&.core})
                ) + 180) / 6)
              ") + ",
              #{around&.radius}
            )", srid) + "
        )"
      end

      sig do
        params(
          sql_dialect: SqlDialect::SqlDialect,
          srid: Integer
        ).returns(T.nilable(String))
      end
      def to_sql(sql_dialect, srid)
        clauses = []
        clauses << bbox_clauses(sql_dialect, srid) unless bbox.nil?
        clauses << poly_clauses(sql_dialect, srid) unless poly.nil?
        clauses << "id = ANY (ARRAY[#{ids&.collect(&:to_s)&.join(', ')}])" unless ids.nil?
        clauses << "ST_Intersects(geom, (SELECT #{sql_dialect.st_union}(geom) FROM _#{area_id}))" unless area_id.nil?
        clauses << around_clause(sql_dialect, srid) unless around.nil?

        return nil if clauses.empty?

        clauses.join(' AND ')
      end
    end

    class Filters < Array
      extend T::Sig

      sig do
        params(
          sql_dialect: SqlDialect::SqlDialect,
          srid: Integer
        ).returns(T.nilable(String))
      end
      def to_sql(sql_dialect, srid)
        if empty?
          nil
        elsif size == 1
          self[0].to_sql(sql_dialect, srid)
        else
          collect { |s| s.to_sql(sql_dialect, srid) }.join(' AND ')
        end
      end
    end
  end
end

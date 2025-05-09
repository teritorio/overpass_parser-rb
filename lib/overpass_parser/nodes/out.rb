# frozen_string_literal: true
# typed: true

require 'sorbet-runtime'
require 'sorbet-struct-comparable'
require 'digest/sha1'

module OverpassParser
  module Nodes
    class Out < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :geom, String, default: 'geom'
      const :level_of_details, String, default: 'body'

      sig do
        params(
          sql_dialect: SqlDialect::SqlDialect,
          srid: T.any(Integer, String)
        ).returns(String)
      end
      def to_sql(sql_dialect, srid)
        way_member_nodes =  %w[skel body meta].include?(@level_of_details)
        relations_members = %w[skel body meta].include?(@level_of_details)
        tags = %w[body tags meta].include?(@level_of_details)
        meta = ['meta'].include?(@level_of_details)
        "SELECT
  #{sql_dialect.json_strip_nulls}(#{sql_dialect.json_build_object}(
    'type', CASE osm_type WHEN 'n' THEN 'node' WHEN 'w' THEN 'way' WHEN 'r' THEN 'relation' WHEN 'a' THEN 'area' END,
    'id', id,
    'lon', CASE osm_type WHEN 'n' THEN ST_X(#{sql_dialect.st_transform_reverse('geom', srid)})::numeric END,
    'lat', CASE osm_type WHEN 'n' THEN ST_Y(#{sql_dialect.st_transform_reverse('geom', srid)})::numeric END\
#{meta ? ",\n    'timestamp', created" : ''}\
#{meta ? ",\n    'version', version" : ''}\
#{meta ? ",\n    'changeset', changeset" : ''}\
#{meta ? ",\n    'user', \"user\"" : ''}\
#{meta ? ",\n    'uid', uid" : ''}\
#{if @geom == 'center'
    ",
    'center', CASE osm_type = 'w' OR osm_type = 'r'
      WHEN true THEN #{sql_dialect.json_build_object}(
        'lon', ST_X(ST_PointOnSurface(#{sql_dialect.st_transform_reverse('geom', srid)}))::numeric,
        'lat', ST_Y(ST_PointOnSurface(#{sql_dialect.st_transform_reverse('geom', srid)}))::numeric
      )
    END"
  else
    ''
  end}\
#{if @geom == 'bb' || @geom == 'geom'
    ",
    'bounds', CASE osm_type = 'w' OR osm_type = 'r'
      WHEN true THEN #{sql_dialect.json_build_object}(
        'minlon', ST_XMin(ST_Envelope(#{sql_dialect.st_transform_reverse('geom', srid)}))::numeric,
        'minlat', ST_YMin(ST_Envelope(#{sql_dialect.st_transform_reverse('geom', srid)}))::numeric,
        'maxlon', ST_XMax(ST_Envelope(#{sql_dialect.st_transform_reverse('geom', srid)}))::numeric,
        'maxlat', ST_YMax(ST_Envelope(#{sql_dialect.st_transform_reverse('geom', srid)}))::numeric
      )
    END"
  end}\
#{if @geom == 'geom'
    ",
    'geometry', CASE osm_type
      WHEN 'w' THEN " + (
      if sql_dialect.st_dump_points
        "(SELECT \
#{sql_dialect.jsonb_agg}(#{sql_dialect.json_build_object}(\
'lon', ST_X(#{sql_dialect.st_transform_reverse('geom', srid)})::numeric, \
'lat', ST_Y(#{sql_dialect.st_transform_reverse('geom', srid)})::numeric)) \
FROM #{sql_dialect.st_dump_points}(geom))"
      else
        "replace(replace(replace(replace(replace((
          CASE ST_GeometryType(geom)
          WHEN 'LINESTRING' THEN #{sql_dialect.st_asgeojson(
            sql_dialect.st_transform_reverse('geom', srid), 7
          )}->'coordinates'
          ELSE #{sql_dialect.st_asgeojson(
            sql_dialect.st_transform_reverse('geom', srid), 7
          )}->'coordinates'->0
          END
        )::text, '[', '{\"lon\":'), \
',', ',\"lat\":'), \
'{\"lon\":{\"lon\":', '[{\"lon\":'), \
'],\"lat\":{\"lon\":', '},{\"lon\":'), \
']]', '}]')::json"
      end
    ) + "
    END"
  end}\
#{way_member_nodes ? ",\n    'nodes', nodes" : ''}\
#{relations_members ? ",\n    'members', members" : ''}\
#{tags ? ",\n    'tags', tags" : ''}\
)) AS j"
      end
    end
  end
end

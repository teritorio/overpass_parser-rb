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
          _escape_literal: T.proc.params(s: String).returns(String)
        ).returns(T.nilable(String))
      end
      def to_sql(_escape_literal)
        coordinates = %w[skel body meta].include?(@level_of_details)
        way_member_nodes =  %w[skel body meta].include?(@level_of_details)
        relations_members = %w[skel body meta].include?(@level_of_details)
        tags = %w[body tags meta].include?(@level_of_details)
        meta = ['meta'].include?(@level_of_details)
        "SELECT
  -- 'changeset'
  -- 'user'
  -- 'uid'
  jsonb_strip_nulls(jsonb_build_object(
    'type', CASE osm_type WHEN 'n' THEN 'node' WHEN 'w' THEN 'node' WHEN 'r' THEN 'relation' WHEN 'a' THEN 'area' END,
    'id', id,
    'lon', CASE osm_type WHEN 'n' THEN ST_X(geom) END,
    'lat', CASE osm_type WHEN 'n' THEN ST_Y(geom) END\
#{meta ? ",\n    'timestamp', created" : ''}\
#{meta ? ",\n    'version', version" : ''}\
#{if @geom == 'center'
    ",
    'center', json_build_object(
      'lon', ST_PointOnSurface(geom),
      'at', ST_PointOnSurface(geom)
    )"
  else
    ''
  end}\
#{if @geom == 'bb'
    ",
    'bounds', json_build_object(
      'minlon', ST_XMin(ST_Envelope(geom)),
      'minlat', ST_YMin(ST_Envelope(geom)),
      'maxlon', ST_XMax(ST_Envelope(geom)),
      'maxnlat', ST_YMax(ST_Envelope(geom))
    )"
  else
    ''
  end}\
#{way_member_nodes ? ",\n    'nodes', nodes" : ''}\
#{relations_members ? ",\n    'members', members" : ''}\
#{meta ? ",\n    'tags', tags" : ''}\
))"
      end
    end
  end
end

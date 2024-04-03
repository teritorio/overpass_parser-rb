# frozen_string_literal: true
# typed: true

require "sorbet-runtime"
require "sorbet-struct-comparable"
require "digest/sha1"

module OverpassParser
  module Nodes
    class Out < T::Struct
      include T::Struct::ActsAsComparable
      extend T::Sig

      const :geom, String, default: "geom"
      const :level_of_details, String, default: "body"

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
        meta = ["meta"].include?(@level_of_details)
        "SELECT
  osm_type,
  id,
#{meta ? "  version," : ""}
#{meta ? "  created," : ""}
#{tags ? "  tags," : ""}
#{way_member_nodes ? "  nodes," : ""}
#{relations_members ? "  members," : ""}
  #{case @geom
    when "center"
      "ST_PointOnSurface(geom)"
    when "bb"
      "ST_Envelope(geom)"
    else "geom"
    end
  } AS geom"
      end
    end
  end
end

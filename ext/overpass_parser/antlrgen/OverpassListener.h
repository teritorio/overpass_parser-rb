
// Generated from ./Overpass.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "OverpassParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by OverpassParser.
 */
class  OverpassListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterOsm_id(OverpassParser::Osm_idContext *ctx) = 0;
  virtual void exitOsm_id(OverpassParser::Osm_idContext *ctx) = 0;

  virtual void enterNumber(OverpassParser::NumberContext *ctx) = 0;
  virtual void exitNumber(OverpassParser::NumberContext *ctx) = 0;

  virtual void enterToken(OverpassParser::TokenContext *ctx) = 0;
  virtual void exitToken(OverpassParser::TokenContext *ctx) = 0;

  virtual void enterMetadata(OverpassParser::MetadataContext *ctx) = 0;
  virtual void exitMetadata(OverpassParser::MetadataContext *ctx) = 0;

  virtual void enterSelector(OverpassParser::SelectorContext *ctx) = 0;
  virtual void exitSelector(OverpassParser::SelectorContext *ctx) = 0;

  virtual void enterFilter_bbox(OverpassParser::Filter_bboxContext *ctx) = 0;
  virtual void exitFilter_bbox(OverpassParser::Filter_bboxContext *ctx) = 0;

  virtual void enterFilter_poly(OverpassParser::Filter_polyContext *ctx) = 0;
  virtual void exitFilter_poly(OverpassParser::Filter_polyContext *ctx) = 0;

  virtual void enterFilter_osm_id(OverpassParser::Filter_osm_idContext *ctx) = 0;
  virtual void exitFilter_osm_id(OverpassParser::Filter_osm_idContext *ctx) = 0;

  virtual void enterFilter_osm_ids(OverpassParser::Filter_osm_idsContext *ctx) = 0;
  virtual void exitFilter_osm_ids(OverpassParser::Filter_osm_idsContext *ctx) = 0;

  virtual void enterFilter_area(OverpassParser::Filter_areaContext *ctx) = 0;
  virtual void exitFilter_area(OverpassParser::Filter_areaContext *ctx) = 0;

  virtual void enterFilter_around(OverpassParser::Filter_aroundContext *ctx) = 0;
  virtual void exitFilter_around(OverpassParser::Filter_aroundContext *ctx) = 0;

  virtual void enterFilter(OverpassParser::FilterContext *ctx) = 0;
  virtual void exitFilter(OverpassParser::FilterContext *ctx) = 0;

  virtual void enterAsignation(OverpassParser::AsignationContext *ctx) = 0;
  virtual void exitAsignation(OverpassParser::AsignationContext *ctx) = 0;

  virtual void enterObject_type(OverpassParser::Object_typeContext *ctx) = 0;
  virtual void exitObject_type(OverpassParser::Object_typeContext *ctx) = 0;

  virtual void enterQuery_object(OverpassParser::Query_objectContext *ctx) = 0;
  virtual void exitQuery_object(OverpassParser::Query_objectContext *ctx) = 0;

  virtual void enterQuery_recurse(OverpassParser::Query_recurseContext *ctx) = 0;
  virtual void exitQuery_recurse(OverpassParser::Query_recurseContext *ctx) = 0;

  virtual void enterQuery(OverpassParser::QueryContext *ctx) = 0;
  virtual void exitQuery(OverpassParser::QueryContext *ctx) = 0;

  virtual void enterQuery_union(OverpassParser::Query_unionContext *ctx) = 0;
  virtual void exitQuery_union(OverpassParser::Query_unionContext *ctx) = 0;

  virtual void enterQuery_sequence(OverpassParser::Query_sequenceContext *ctx) = 0;
  virtual void exitQuery_sequence(OverpassParser::Query_sequenceContext *ctx) = 0;

  virtual void enterOut_geom(OverpassParser::Out_geomContext *ctx) = 0;
  virtual void exitOut_geom(OverpassParser::Out_geomContext *ctx) = 0;

  virtual void enterOut_level_of_details(OverpassParser::Out_level_of_detailsContext *ctx) = 0;
  virtual void exitOut_level_of_details(OverpassParser::Out_level_of_detailsContext *ctx) = 0;

  virtual void enterOut(OverpassParser::OutContext *ctx) = 0;
  virtual void exitOut(OverpassParser::OutContext *ctx) = 0;

  virtual void enterRequest(OverpassParser::RequestContext *ctx) = 0;
  virtual void exitRequest(OverpassParser::RequestContext *ctx) = 0;


};


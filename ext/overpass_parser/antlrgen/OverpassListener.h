
// Generated from ./Overpass.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "OverpassParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by OverpassParser.
 */
class  OverpassListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterToken(OverpassParser::TokenContext *ctx) = 0;
  virtual void exitToken(OverpassParser::TokenContext *ctx) = 0;

  virtual void enterMetadata(OverpassParser::MetadataContext *ctx) = 0;
  virtual void exitMetadata(OverpassParser::MetadataContext *ctx) = 0;

  virtual void enterSelector(OverpassParser::SelectorContext *ctx) = 0;
  virtual void exitSelector(OverpassParser::SelectorContext *ctx) = 0;

  virtual void enterFilter_bbox(OverpassParser::Filter_bboxContext *ctx) = 0;
  virtual void exitFilter_bbox(OverpassParser::Filter_bboxContext *ctx) = 0;

  virtual void enterFilter_osm_id(OverpassParser::Filter_osm_idContext *ctx) = 0;
  virtual void exitFilter_osm_id(OverpassParser::Filter_osm_idContext *ctx) = 0;

  virtual void enterFilter_osm_ids(OverpassParser::Filter_osm_idsContext *ctx) = 0;
  virtual void exitFilter_osm_ids(OverpassParser::Filter_osm_idsContext *ctx) = 0;

  virtual void enterFilter_area(OverpassParser::Filter_areaContext *ctx) = 0;
  virtual void exitFilter_area(OverpassParser::Filter_areaContext *ctx) = 0;

  virtual void enterFilter(OverpassParser::FilterContext *ctx) = 0;
  virtual void exitFilter(OverpassParser::FilterContext *ctx) = 0;

  virtual void enterAsignation(OverpassParser::AsignationContext *ctx) = 0;
  virtual void exitAsignation(OverpassParser::AsignationContext *ctx) = 0;

  virtual void enterObject_type(OverpassParser::Object_typeContext *ctx) = 0;
  virtual void exitObject_type(OverpassParser::Object_typeContext *ctx) = 0;

  virtual void enterQuery(OverpassParser::QueryContext *ctx) = 0;
  virtual void exitQuery(OverpassParser::QueryContext *ctx) = 0;

  virtual void enterQuery_group(OverpassParser::Query_groupContext *ctx) = 0;
  virtual void exitQuery_group(OverpassParser::Query_groupContext *ctx) = 0;

  virtual void enterQuery_sequence(OverpassParser::Query_sequenceContext *ctx) = 0;
  virtual void exitQuery_sequence(OverpassParser::Query_sequenceContext *ctx) = 0;

  virtual void enterOuput(OverpassParser::OuputContext *ctx) = 0;
  virtual void exitOuput(OverpassParser::OuputContext *ctx) = 0;

  virtual void enterRequest(OverpassParser::RequestContext *ctx) = 0;
  virtual void exitRequest(OverpassParser::RequestContext *ctx) = 0;


};


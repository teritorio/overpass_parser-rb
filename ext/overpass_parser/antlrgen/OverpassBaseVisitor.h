
// Generated from ./Overpass.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "OverpassVisitor.h"


/**
 * This class provides an empty implementation of OverpassVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  OverpassBaseVisitor : public OverpassVisitor {
public:

  virtual std::any visitOsm_id(OverpassParser::Osm_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(OverpassParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitToken(OverpassParser::TokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMetadata(OverpassParser::MetadataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelector(OverpassParser::SelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter_bbox(OverpassParser::Filter_bboxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter_osm_id(OverpassParser::Filter_osm_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter_osm_ids(OverpassParser::Filter_osm_idsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter_area(OverpassParser::Filter_areaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter_around(OverpassParser::Filter_aroundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter(OverpassParser::FilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsignation(OverpassParser::AsignationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject_type(OverpassParser::Object_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_object(OverpassParser::Query_objectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_recurse(OverpassParser::Query_recurseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery(OverpassParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_union(OverpassParser::Query_unionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_sequence(OverpassParser::Query_sequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOut_geom(OverpassParser::Out_geomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOut_level_of_details(OverpassParser::Out_level_of_detailsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOut(OverpassParser::OutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRequest(OverpassParser::RequestContext *ctx) override {
    return visitChildren(ctx);
  }


};


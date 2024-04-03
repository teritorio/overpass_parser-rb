
// Generated from ./Overpass.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "OverpassListener.h"


/**
 * This class provides an empty implementation of OverpassListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  OverpassBaseListener : public OverpassListener {
public:

  virtual void enterOsm_id(OverpassParser::Osm_idContext * /*ctx*/) override { }
  virtual void exitOsm_id(OverpassParser::Osm_idContext * /*ctx*/) override { }

  virtual void enterNumber(OverpassParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(OverpassParser::NumberContext * /*ctx*/) override { }

  virtual void enterToken(OverpassParser::TokenContext * /*ctx*/) override { }
  virtual void exitToken(OverpassParser::TokenContext * /*ctx*/) override { }

  virtual void enterMetadata(OverpassParser::MetadataContext * /*ctx*/) override { }
  virtual void exitMetadata(OverpassParser::MetadataContext * /*ctx*/) override { }

  virtual void enterSelector(OverpassParser::SelectorContext * /*ctx*/) override { }
  virtual void exitSelector(OverpassParser::SelectorContext * /*ctx*/) override { }

  virtual void enterFilter_bbox(OverpassParser::Filter_bboxContext * /*ctx*/) override { }
  virtual void exitFilter_bbox(OverpassParser::Filter_bboxContext * /*ctx*/) override { }

  virtual void enterFilter_osm_id(OverpassParser::Filter_osm_idContext * /*ctx*/) override { }
  virtual void exitFilter_osm_id(OverpassParser::Filter_osm_idContext * /*ctx*/) override { }

  virtual void enterFilter_osm_ids(OverpassParser::Filter_osm_idsContext * /*ctx*/) override { }
  virtual void exitFilter_osm_ids(OverpassParser::Filter_osm_idsContext * /*ctx*/) override { }

  virtual void enterFilter_area(OverpassParser::Filter_areaContext * /*ctx*/) override { }
  virtual void exitFilter_area(OverpassParser::Filter_areaContext * /*ctx*/) override { }

  virtual void enterFilter_around(OverpassParser::Filter_aroundContext * /*ctx*/) override { }
  virtual void exitFilter_around(OverpassParser::Filter_aroundContext * /*ctx*/) override { }

  virtual void enterFilter(OverpassParser::FilterContext * /*ctx*/) override { }
  virtual void exitFilter(OverpassParser::FilterContext * /*ctx*/) override { }

  virtual void enterAsignation(OverpassParser::AsignationContext * /*ctx*/) override { }
  virtual void exitAsignation(OverpassParser::AsignationContext * /*ctx*/) override { }

  virtual void enterObject_type(OverpassParser::Object_typeContext * /*ctx*/) override { }
  virtual void exitObject_type(OverpassParser::Object_typeContext * /*ctx*/) override { }

  virtual void enterQuery_object(OverpassParser::Query_objectContext * /*ctx*/) override { }
  virtual void exitQuery_object(OverpassParser::Query_objectContext * /*ctx*/) override { }

  virtual void enterQuery_recurse(OverpassParser::Query_recurseContext * /*ctx*/) override { }
  virtual void exitQuery_recurse(OverpassParser::Query_recurseContext * /*ctx*/) override { }

  virtual void enterQuery(OverpassParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(OverpassParser::QueryContext * /*ctx*/) override { }

  virtual void enterQuery_union(OverpassParser::Query_unionContext * /*ctx*/) override { }
  virtual void exitQuery_union(OverpassParser::Query_unionContext * /*ctx*/) override { }

  virtual void enterQuery_sequence(OverpassParser::Query_sequenceContext * /*ctx*/) override { }
  virtual void exitQuery_sequence(OverpassParser::Query_sequenceContext * /*ctx*/) override { }

  virtual void enterOut_geom(OverpassParser::Out_geomContext * /*ctx*/) override { }
  virtual void exitOut_geom(OverpassParser::Out_geomContext * /*ctx*/) override { }

  virtual void enterOut_level_of_details(OverpassParser::Out_level_of_detailsContext * /*ctx*/) override { }
  virtual void exitOut_level_of_details(OverpassParser::Out_level_of_detailsContext * /*ctx*/) override { }

  virtual void enterOut(OverpassParser::OutContext * /*ctx*/) override { }
  virtual void exitOut(OverpassParser::OutContext * /*ctx*/) override { }

  virtual void enterRequest(OverpassParser::RequestContext * /*ctx*/) override { }
  virtual void exitRequest(OverpassParser::RequestContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


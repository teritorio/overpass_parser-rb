
// Generated from ./Overpass.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "OverpassParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by OverpassParser.
 */
class  OverpassVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by OverpassParser.
   */
    virtual std::any visitOsm_id(OverpassParser::Osm_idContext *context) = 0;

    virtual std::any visitNumber(OverpassParser::NumberContext *context) = 0;

    virtual std::any visitToken(OverpassParser::TokenContext *context) = 0;

    virtual std::any visitMetadata(OverpassParser::MetadataContext *context) = 0;

    virtual std::any visitSelector(OverpassParser::SelectorContext *context) = 0;

    virtual std::any visitFilter_bbox(OverpassParser::Filter_bboxContext *context) = 0;

    virtual std::any visitFilter_poly(OverpassParser::Filter_polyContext *context) = 0;

    virtual std::any visitFilter_osm_id(OverpassParser::Filter_osm_idContext *context) = 0;

    virtual std::any visitFilter_osm_ids(OverpassParser::Filter_osm_idsContext *context) = 0;

    virtual std::any visitFilter_area(OverpassParser::Filter_areaContext *context) = 0;

    virtual std::any visitFilter_around(OverpassParser::Filter_aroundContext *context) = 0;

    virtual std::any visitFilter(OverpassParser::FilterContext *context) = 0;

    virtual std::any visitAsignation(OverpassParser::AsignationContext *context) = 0;

    virtual std::any visitObject_type(OverpassParser::Object_typeContext *context) = 0;

    virtual std::any visitQuery_object(OverpassParser::Query_objectContext *context) = 0;

    virtual std::any visitQuery_recurse(OverpassParser::Query_recurseContext *context) = 0;

    virtual std::any visitQuery(OverpassParser::QueryContext *context) = 0;

    virtual std::any visitQuery_union(OverpassParser::Query_unionContext *context) = 0;

    virtual std::any visitQuery_sequence(OverpassParser::Query_sequenceContext *context) = 0;

    virtual std::any visitOut_geom(OverpassParser::Out_geomContext *context) = 0;

    virtual std::any visitOut_level_of_details(OverpassParser::Out_level_of_detailsContext *context) = 0;

    virtual std::any visitOut(OverpassParser::OutContext *context) = 0;

    virtual std::any visitRequest(OverpassParser::RequestContext *context) = 0;


};



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
    virtual std::any visitToken(OverpassParser::TokenContext *context) = 0;

    virtual std::any visitMetadata(OverpassParser::MetadataContext *context) = 0;

    virtual std::any visitSelector(OverpassParser::SelectorContext *context) = 0;

    virtual std::any visitFilter_bbox(OverpassParser::Filter_bboxContext *context) = 0;

    virtual std::any visitFilter_osm_id(OverpassParser::Filter_osm_idContext *context) = 0;

    virtual std::any visitFilter_osm_ids(OverpassParser::Filter_osm_idsContext *context) = 0;

    virtual std::any visitFilter_area(OverpassParser::Filter_areaContext *context) = 0;

    virtual std::any visitFilter(OverpassParser::FilterContext *context) = 0;

    virtual std::any visitAsignation(OverpassParser::AsignationContext *context) = 0;

    virtual std::any visitObject_type(OverpassParser::Object_typeContext *context) = 0;

    virtual std::any visitQuery(OverpassParser::QueryContext *context) = 0;

    virtual std::any visitQuery_group(OverpassParser::Query_groupContext *context) = 0;

    virtual std::any visitQuery_sequence(OverpassParser::Query_sequenceContext *context) = 0;

    virtual std::any visitOuput(OverpassParser::OuputContext *context) = 0;

    virtual std::any visitRequest(OverpassParser::RequestContext *context) = 0;


};


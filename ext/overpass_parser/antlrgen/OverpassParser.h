
// Generated from ./Overpass.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  OverpassParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, WS = 25, SL_COMMENT = 26, 
    ML_COMMENT = 27, INTEGER = 28, FLOAT = 29, OPERATOR = 30, NOT = 31, 
    UNQUOTED_STRING = 32, SIMPLE_QUOTED_STRING = 33, DOUBLE_QUOTED_STRING = 34, 
    ID = 35, DOT_ID = 36
  };

  enum {
    RuleNumber = 0, RuleToken = 1, RuleMetadata = 2, RuleSelector = 3, RuleFilter_bbox = 4, 
    RuleFilter_osm_id = 5, RuleFilter_osm_ids = 6, RuleFilter_area = 7, 
    RuleFilter_around = 8, RuleFilter = 9, RuleAsignation = 10, RuleObject_type = 11, 
    RuleQuery_object = 12, RuleQuery_recurse = 13, RuleQuery = 14, RuleQuery_group = 15, 
    RuleQuery_sequence = 16, RuleOuput = 17, RuleRequest = 18
  };

  explicit OverpassParser(antlr4::TokenStream *input);

  OverpassParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~OverpassParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class NumberContext;
  class TokenContext;
  class MetadataContext;
  class SelectorContext;
  class Filter_bboxContext;
  class Filter_osm_idContext;
  class Filter_osm_idsContext;
  class Filter_areaContext;
  class Filter_aroundContext;
  class FilterContext;
  class AsignationContext;
  class Object_typeContext;
  class Query_objectContext;
  class Query_recurseContext;
  class QueryContext;
  class Query_groupContext;
  class Query_sequenceContext;
  class OuputContext;
  class RequestContext; 

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  TokenContext : public antlr4::ParserRuleContext {
  public:
    TokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLE_QUOTED_STRING();
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_STRING();
    antlr4::tree::TerminalNode *UNQUOTED_STRING();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokenContext* token();

  class  MetadataContext : public antlr4::ParserRuleContext {
  public:
    MetadataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MetadataContext* metadata();

  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    OverpassParser::TokenContext *key = nullptr;
    OverpassParser::TokenContext *value = nullptr;
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERATOR();
    std::vector<TokenContext *> token();
    TokenContext* token(size_t i);
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectorContext* selector();

  class  Filter_bboxContext : public antlr4::ParserRuleContext {
  public:
    Filter_bboxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NumberContext *> number();
    NumberContext* number(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filter_bboxContext* filter_bbox();

  class  Filter_osm_idContext : public antlr4::ParserRuleContext {
  public:
    Filter_osm_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filter_osm_idContext* filter_osm_id();

  class  Filter_osm_idsContext : public antlr4::ParserRuleContext {
  public:
    Filter_osm_idsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INTEGER();
    antlr4::tree::TerminalNode* INTEGER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filter_osm_idsContext* filter_osm_ids();

  class  Filter_areaContext : public antlr4::ParserRuleContext {
  public:
    Filter_areaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filter_areaContext* filter_area();

  class  Filter_aroundContext : public antlr4::ParserRuleContext {
  public:
    Filter_aroundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_ID();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filter_aroundContext* filter_around();

  class  FilterContext : public antlr4::ParserRuleContext {
  public:
    FilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Filter_bboxContext *filter_bbox();
    Filter_osm_idContext *filter_osm_id();
    Filter_osm_idsContext *filter_osm_ids();
    Filter_areaContext *filter_area();
    Filter_aroundContext *filter_around();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterContext* filter();

  class  AsignationContext : public antlr4::ParserRuleContext {
  public:
    AsignationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsignationContext* asignation();

  class  Object_typeContext : public antlr4::ParserRuleContext {
  public:
    Object_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_typeContext* object_type();

  class  Query_objectContext : public antlr4::ParserRuleContext {
  public:
    Query_objectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Object_typeContext *object_type();
    antlr4::tree::TerminalNode *DOT_ID();
    std::vector<SelectorContext *> selector();
    SelectorContext* selector(size_t i);
    std::vector<FilterContext *> filter();
    FilterContext* filter(size_t i);
    AsignationContext *asignation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_objectContext* query_object();

  class  Query_recurseContext : public antlr4::ParserRuleContext {
  public:
    Query_recurseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_recurseContext* query_recurse();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_objectContext *query_object();
    Query_recurseContext *query_recurse();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  Query_groupContext : public antlr4::ParserRuleContext {
  public:
    Query_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Query_sequenceContext *> query_sequence();
    Query_sequenceContext* query_sequence(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_groupContext* query_group();

  class  Query_sequenceContext : public antlr4::ParserRuleContext {
  public:
    Query_sequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryContext *query();
    Query_groupContext *query_group();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_sequenceContext* query_sequence();

  class  OuputContext : public antlr4::ParserRuleContext {
  public:
    OuputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OuputContext* ouput();

  class  RequestContext : public antlr4::ParserRuleContext {
  public:
    RequestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetadataContext *metadata();
    std::vector<Query_sequenceContext *> query_sequence();
    Query_sequenceContext* query_sequence(size_t i);
    OuputContext *ouput();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequestContext* request();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


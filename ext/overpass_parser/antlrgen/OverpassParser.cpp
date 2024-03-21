
// Generated from ./Overpass.g4 by ANTLR 4.10.1


#include "OverpassListener.h"
#include "OverpassVisitor.h"

#include "OverpassParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct OverpassParserStaticData final {
  OverpassParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  OverpassParserStaticData(const OverpassParserStaticData&) = delete;
  OverpassParserStaticData(OverpassParserStaticData&&) = delete;
  OverpassParserStaticData& operator=(const OverpassParserStaticData&) = delete;
  OverpassParserStaticData& operator=(OverpassParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag overpassParserOnceFlag;
OverpassParserStaticData *overpassParserStaticData = nullptr;

void overpassParserInitialize() {
  assert(overpassParserStaticData == nullptr);
  auto staticData = std::make_unique<OverpassParserStaticData>(
    std::vector<std::string>{
      "token", "metadata", "selector", "filter_bbox", "filter_osm_id", "filter_osm_ids", 
      "filter_area", "filter", "asignation", "object_type", "query_object", 
      "query_recurse", "query", "query_group", "query_sequence", "ouput", 
      "request"
    },
    std::vector<std::string>{
      "", "'['", "'out:json'", "']'", "'timeout:'", "','", "'id:'", "'area'", 
      "'('", "')'", "'->'", "'node'", "'way'", "'relation'", "'nwr'", "'<'", 
      "'<<'", "'>'", "'>>'", "';'", "'out'", "'center'", "'meta'", "", "", 
      "", "", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "WS", "SL_COMMENT", "ML_COMMENT", "FLOAT_NUMBER", 
      "INTEGER_NUMBER", "OPERATOR", "NOT", "UNQUOTED_STRING", "SIMPLE_QUOTED_STRING", 
      "DOUBLE_QUOTED_STRING", "ID", "DOT_ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,155,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,44,8,1,
  	1,2,1,2,3,2,48,8,2,1,2,1,2,1,2,1,2,1,2,3,2,55,8,2,1,2,1,2,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,5,5,73,8,5,10,5,12,5,76,9,
  	5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,3,7,86,8,7,1,7,1,7,1,8,1,8,1,8,1,9,
  	1,9,1,10,1,10,3,10,97,8,10,1,10,5,10,100,8,10,10,10,12,10,103,9,10,1,
  	10,5,10,106,8,10,10,10,12,10,109,9,10,1,10,3,10,112,8,10,1,11,1,11,1,
  	12,1,12,3,12,118,8,12,1,13,1,13,1,13,1,13,4,13,124,8,13,11,13,12,13,125,
  	1,13,1,13,1,14,1,14,3,14,132,8,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,
  	3,16,141,8,16,1,16,1,16,1,16,4,16,146,8,16,11,16,12,16,147,1,16,1,16,
  	1,16,3,16,153,8,16,1,16,0,0,17,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,0,3,2,0,26,26,30,32,2,0,7,7,11,14,1,0,15,18,154,0,34,1,0,0,0,2,
  	36,1,0,0,0,4,45,1,0,0,0,6,58,1,0,0,0,8,66,1,0,0,0,10,68,1,0,0,0,12,77,
  	1,0,0,0,14,80,1,0,0,0,16,89,1,0,0,0,18,92,1,0,0,0,20,94,1,0,0,0,22,113,
  	1,0,0,0,24,117,1,0,0,0,26,119,1,0,0,0,28,131,1,0,0,0,30,133,1,0,0,0,32,
  	140,1,0,0,0,34,35,7,0,0,0,35,1,1,0,0,0,36,37,5,1,0,0,37,38,5,2,0,0,38,
  	43,5,3,0,0,39,40,5,1,0,0,40,41,5,4,0,0,41,42,5,27,0,0,42,44,5,3,0,0,43,
  	39,1,0,0,0,43,44,1,0,0,0,44,3,1,0,0,0,45,54,5,1,0,0,46,48,5,29,0,0,47,
  	46,1,0,0,0,47,48,1,0,0,0,48,49,1,0,0,0,49,55,3,0,0,0,50,51,3,0,0,0,51,
  	52,5,28,0,0,52,53,3,0,0,0,53,55,1,0,0,0,54,47,1,0,0,0,54,50,1,0,0,0,55,
  	56,1,0,0,0,56,57,5,3,0,0,57,5,1,0,0,0,58,59,5,26,0,0,59,60,5,5,0,0,60,
  	61,5,26,0,0,61,62,5,5,0,0,62,63,5,26,0,0,63,64,5,5,0,0,64,65,5,26,0,0,
  	65,7,1,0,0,0,66,67,5,27,0,0,67,9,1,0,0,0,68,69,5,6,0,0,69,74,5,27,0,0,
  	70,71,5,5,0,0,71,73,5,27,0,0,72,70,1,0,0,0,73,76,1,0,0,0,74,72,1,0,0,
  	0,74,75,1,0,0,0,75,11,1,0,0,0,76,74,1,0,0,0,77,78,5,7,0,0,78,79,5,34,
  	0,0,79,13,1,0,0,0,80,85,5,8,0,0,81,86,3,6,3,0,82,86,3,8,4,0,83,86,3,10,
  	5,0,84,86,3,12,6,0,85,81,1,0,0,0,85,82,1,0,0,0,85,83,1,0,0,0,85,84,1,
  	0,0,0,86,87,1,0,0,0,87,88,5,9,0,0,88,15,1,0,0,0,89,90,5,10,0,0,90,91,
  	5,34,0,0,91,17,1,0,0,0,92,93,7,1,0,0,93,19,1,0,0,0,94,96,3,18,9,0,95,
  	97,5,34,0,0,96,95,1,0,0,0,96,97,1,0,0,0,97,101,1,0,0,0,98,100,3,4,2,0,
  	99,98,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,107,
  	1,0,0,0,103,101,1,0,0,0,104,106,3,14,7,0,105,104,1,0,0,0,106,109,1,0,
  	0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,110,
  	112,3,16,8,0,111,110,1,0,0,0,111,112,1,0,0,0,112,21,1,0,0,0,113,114,7,
  	2,0,0,114,23,1,0,0,0,115,118,3,20,10,0,116,118,3,22,11,0,117,115,1,0,
  	0,0,117,116,1,0,0,0,118,25,1,0,0,0,119,123,5,8,0,0,120,121,3,28,14,0,
  	121,122,5,19,0,0,122,124,1,0,0,0,123,120,1,0,0,0,124,125,1,0,0,0,125,
  	123,1,0,0,0,125,126,1,0,0,0,126,127,1,0,0,0,127,128,5,9,0,0,128,27,1,
  	0,0,0,129,132,3,24,12,0,130,132,3,26,13,0,131,129,1,0,0,0,131,130,1,0,
  	0,0,132,29,1,0,0,0,133,134,5,20,0,0,134,135,5,21,0,0,135,136,5,22,0,0,
  	136,31,1,0,0,0,137,138,3,2,1,0,138,139,5,19,0,0,139,141,1,0,0,0,140,137,
  	1,0,0,0,140,141,1,0,0,0,141,145,1,0,0,0,142,143,3,28,14,0,143,144,5,19,
  	0,0,144,146,1,0,0,0,145,142,1,0,0,0,146,147,1,0,0,0,147,145,1,0,0,0,147,
  	148,1,0,0,0,148,152,1,0,0,0,149,150,3,30,15,0,150,151,5,19,0,0,151,153,
  	1,0,0,0,152,149,1,0,0,0,152,153,1,0,0,0,153,33,1,0,0,0,15,43,47,54,74,
  	85,96,101,107,111,117,125,131,140,147,152
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  overpassParserStaticData = staticData.release();
}

}

OverpassParser::OverpassParser(TokenStream *input) : OverpassParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

OverpassParser::OverpassParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  OverpassParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *overpassParserStaticData->atn, overpassParserStaticData->decisionToDFA, overpassParserStaticData->sharedContextCache, options);
}

OverpassParser::~OverpassParser() {
  delete _interpreter;
}

const atn::ATN& OverpassParser::getATN() const {
  return *overpassParserStaticData->atn;
}

std::string OverpassParser::getGrammarFileName() const {
  return "Overpass.g4";
}

const std::vector<std::string>& OverpassParser::getRuleNames() const {
  return overpassParserStaticData->ruleNames;
}

const dfa::Vocabulary& OverpassParser::getVocabulary() const {
  return overpassParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView OverpassParser::getSerializedATN() const {
  return overpassParserStaticData->serializedATN;
}


//----------------- TokenContext ------------------------------------------------------------------

OverpassParser::TokenContext::TokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::TokenContext::SIMPLE_QUOTED_STRING() {
  return getToken(OverpassParser::SIMPLE_QUOTED_STRING, 0);
}

tree::TerminalNode* OverpassParser::TokenContext::DOUBLE_QUOTED_STRING() {
  return getToken(OverpassParser::DOUBLE_QUOTED_STRING, 0);
}

tree::TerminalNode* OverpassParser::TokenContext::UNQUOTED_STRING() {
  return getToken(OverpassParser::UNQUOTED_STRING, 0);
}

tree::TerminalNode* OverpassParser::TokenContext::FLOAT_NUMBER() {
  return getToken(OverpassParser::FLOAT_NUMBER, 0);
}


size_t OverpassParser::TokenContext::getRuleIndex() const {
  return OverpassParser::RuleToken;
}

void OverpassParser::TokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToken(this);
}

void OverpassParser::TokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToken(this);
}


std::any OverpassParser::TokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitToken(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::TokenContext* OverpassParser::token() {
  TokenContext *_localctx = _tracker.createInstance<TokenContext>(_ctx, getState());
  enterRule(_localctx, 0, OverpassParser::RuleToken);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::FLOAT_NUMBER)
      | (1ULL << OverpassParser::UNQUOTED_STRING)
      | (1ULL << OverpassParser::SIMPLE_QUOTED_STRING)
      | (1ULL << OverpassParser::DOUBLE_QUOTED_STRING))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MetadataContext ------------------------------------------------------------------

OverpassParser::MetadataContext::MetadataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::MetadataContext::INTEGER_NUMBER() {
  return getToken(OverpassParser::INTEGER_NUMBER, 0);
}


size_t OverpassParser::MetadataContext::getRuleIndex() const {
  return OverpassParser::RuleMetadata;
}

void OverpassParser::MetadataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMetadata(this);
}

void OverpassParser::MetadataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMetadata(this);
}


std::any OverpassParser::MetadataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitMetadata(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::MetadataContext* OverpassParser::metadata() {
  MetadataContext *_localctx = _tracker.createInstance<MetadataContext>(_ctx, getState());
  enterRule(_localctx, 2, OverpassParser::RuleMetadata);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(OverpassParser::T__0);
    setState(37);
    match(OverpassParser::T__1);
    setState(38);
    match(OverpassParser::T__2);
    setState(43);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__0) {
      setState(39);
      match(OverpassParser::T__0);
      setState(40);
      match(OverpassParser::T__3);
      setState(41);
      match(OverpassParser::INTEGER_NUMBER);
      setState(42);
      match(OverpassParser::T__2);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorContext ------------------------------------------------------------------

OverpassParser::SelectorContext::SelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::SelectorContext::OPERATOR() {
  return getToken(OverpassParser::OPERATOR, 0);
}

std::vector<OverpassParser::TokenContext *> OverpassParser::SelectorContext::token() {
  return getRuleContexts<OverpassParser::TokenContext>();
}

OverpassParser::TokenContext* OverpassParser::SelectorContext::token(size_t i) {
  return getRuleContext<OverpassParser::TokenContext>(i);
}

tree::TerminalNode* OverpassParser::SelectorContext::NOT() {
  return getToken(OverpassParser::NOT, 0);
}


size_t OverpassParser::SelectorContext::getRuleIndex() const {
  return OverpassParser::RuleSelector;
}

void OverpassParser::SelectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelector(this);
}

void OverpassParser::SelectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelector(this);
}


std::any OverpassParser::SelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitSelector(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::SelectorContext* OverpassParser::selector() {
  SelectorContext *_localctx = _tracker.createInstance<SelectorContext>(_ctx, getState());
  enterRule(_localctx, 4, OverpassParser::RuleSelector);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(OverpassParser::T__0);
    setState(54);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(47);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == OverpassParser::NOT) {
        setState(46);
        match(OverpassParser::NOT);
      }
      setState(49);
      antlrcpp::downCast<SelectorContext *>(_localctx)->key = token();
      break;
    }

    case 2: {
      setState(50);
      antlrcpp::downCast<SelectorContext *>(_localctx)->key = token();
      setState(51);
      match(OverpassParser::OPERATOR);
      setState(52);
      antlrcpp::downCast<SelectorContext *>(_localctx)->value = token();
      break;
    }

    default:
      break;
    }
    setState(56);
    match(OverpassParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Filter_bboxContext ------------------------------------------------------------------

OverpassParser::Filter_bboxContext::Filter_bboxContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> OverpassParser::Filter_bboxContext::FLOAT_NUMBER() {
  return getTokens(OverpassParser::FLOAT_NUMBER);
}

tree::TerminalNode* OverpassParser::Filter_bboxContext::FLOAT_NUMBER(size_t i) {
  return getToken(OverpassParser::FLOAT_NUMBER, i);
}


size_t OverpassParser::Filter_bboxContext::getRuleIndex() const {
  return OverpassParser::RuleFilter_bbox;
}

void OverpassParser::Filter_bboxContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilter_bbox(this);
}

void OverpassParser::Filter_bboxContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilter_bbox(this);
}


std::any OverpassParser::Filter_bboxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitFilter_bbox(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Filter_bboxContext* OverpassParser::filter_bbox() {
  Filter_bboxContext *_localctx = _tracker.createInstance<Filter_bboxContext>(_ctx, getState());
  enterRule(_localctx, 6, OverpassParser::RuleFilter_bbox);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(OverpassParser::FLOAT_NUMBER);
    setState(59);
    match(OverpassParser::T__4);
    setState(60);
    match(OverpassParser::FLOAT_NUMBER);
    setState(61);
    match(OverpassParser::T__4);
    setState(62);
    match(OverpassParser::FLOAT_NUMBER);
    setState(63);
    match(OverpassParser::T__4);
    setState(64);
    match(OverpassParser::FLOAT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Filter_osm_idContext ------------------------------------------------------------------

OverpassParser::Filter_osm_idContext::Filter_osm_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::Filter_osm_idContext::INTEGER_NUMBER() {
  return getToken(OverpassParser::INTEGER_NUMBER, 0);
}


size_t OverpassParser::Filter_osm_idContext::getRuleIndex() const {
  return OverpassParser::RuleFilter_osm_id;
}

void OverpassParser::Filter_osm_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilter_osm_id(this);
}

void OverpassParser::Filter_osm_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilter_osm_id(this);
}


std::any OverpassParser::Filter_osm_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitFilter_osm_id(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Filter_osm_idContext* OverpassParser::filter_osm_id() {
  Filter_osm_idContext *_localctx = _tracker.createInstance<Filter_osm_idContext>(_ctx, getState());
  enterRule(_localctx, 8, OverpassParser::RuleFilter_osm_id);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(OverpassParser::INTEGER_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Filter_osm_idsContext ------------------------------------------------------------------

OverpassParser::Filter_osm_idsContext::Filter_osm_idsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> OverpassParser::Filter_osm_idsContext::INTEGER_NUMBER() {
  return getTokens(OverpassParser::INTEGER_NUMBER);
}

tree::TerminalNode* OverpassParser::Filter_osm_idsContext::INTEGER_NUMBER(size_t i) {
  return getToken(OverpassParser::INTEGER_NUMBER, i);
}


size_t OverpassParser::Filter_osm_idsContext::getRuleIndex() const {
  return OverpassParser::RuleFilter_osm_ids;
}

void OverpassParser::Filter_osm_idsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilter_osm_ids(this);
}

void OverpassParser::Filter_osm_idsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilter_osm_ids(this);
}


std::any OverpassParser::Filter_osm_idsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitFilter_osm_ids(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Filter_osm_idsContext* OverpassParser::filter_osm_ids() {
  Filter_osm_idsContext *_localctx = _tracker.createInstance<Filter_osm_idsContext>(_ctx, getState());
  enterRule(_localctx, 10, OverpassParser::RuleFilter_osm_ids);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(OverpassParser::T__5);
    setState(69);
    match(OverpassParser::INTEGER_NUMBER);
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__4) {
      setState(70);
      match(OverpassParser::T__4);
      setState(71);
      match(OverpassParser::INTEGER_NUMBER);
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Filter_areaContext ------------------------------------------------------------------

OverpassParser::Filter_areaContext::Filter_areaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::Filter_areaContext::DOT_ID() {
  return getToken(OverpassParser::DOT_ID, 0);
}


size_t OverpassParser::Filter_areaContext::getRuleIndex() const {
  return OverpassParser::RuleFilter_area;
}

void OverpassParser::Filter_areaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilter_area(this);
}

void OverpassParser::Filter_areaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilter_area(this);
}


std::any OverpassParser::Filter_areaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitFilter_area(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Filter_areaContext* OverpassParser::filter_area() {
  Filter_areaContext *_localctx = _tracker.createInstance<Filter_areaContext>(_ctx, getState());
  enterRule(_localctx, 12, OverpassParser::RuleFilter_area);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(OverpassParser::T__6);
    setState(78);
    match(OverpassParser::DOT_ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilterContext ------------------------------------------------------------------

OverpassParser::FilterContext::FilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::Filter_bboxContext* OverpassParser::FilterContext::filter_bbox() {
  return getRuleContext<OverpassParser::Filter_bboxContext>(0);
}

OverpassParser::Filter_osm_idContext* OverpassParser::FilterContext::filter_osm_id() {
  return getRuleContext<OverpassParser::Filter_osm_idContext>(0);
}

OverpassParser::Filter_osm_idsContext* OverpassParser::FilterContext::filter_osm_ids() {
  return getRuleContext<OverpassParser::Filter_osm_idsContext>(0);
}

OverpassParser::Filter_areaContext* OverpassParser::FilterContext::filter_area() {
  return getRuleContext<OverpassParser::Filter_areaContext>(0);
}


size_t OverpassParser::FilterContext::getRuleIndex() const {
  return OverpassParser::RuleFilter;
}

void OverpassParser::FilterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilter(this);
}

void OverpassParser::FilterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilter(this);
}


std::any OverpassParser::FilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitFilter(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::FilterContext* OverpassParser::filter() {
  FilterContext *_localctx = _tracker.createInstance<FilterContext>(_ctx, getState());
  enterRule(_localctx, 14, OverpassParser::RuleFilter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(OverpassParser::T__7);
    setState(85);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OverpassParser::FLOAT_NUMBER: {
        setState(81);
        filter_bbox();
        break;
      }

      case OverpassParser::INTEGER_NUMBER: {
        setState(82);
        filter_osm_id();
        break;
      }

      case OverpassParser::T__5: {
        setState(83);
        filter_osm_ids();
        break;
      }

      case OverpassParser::T__6: {
        setState(84);
        filter_area();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(87);
    match(OverpassParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsignationContext ------------------------------------------------------------------

OverpassParser::AsignationContext::AsignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::AsignationContext::DOT_ID() {
  return getToken(OverpassParser::DOT_ID, 0);
}


size_t OverpassParser::AsignationContext::getRuleIndex() const {
  return OverpassParser::RuleAsignation;
}

void OverpassParser::AsignationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsignation(this);
}

void OverpassParser::AsignationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsignation(this);
}


std::any OverpassParser::AsignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitAsignation(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::AsignationContext* OverpassParser::asignation() {
  AsignationContext *_localctx = _tracker.createInstance<AsignationContext>(_ctx, getState());
  enterRule(_localctx, 16, OverpassParser::RuleAsignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(OverpassParser::T__9);
    setState(90);
    match(OverpassParser::DOT_ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_typeContext ------------------------------------------------------------------

OverpassParser::Object_typeContext::Object_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t OverpassParser::Object_typeContext::getRuleIndex() const {
  return OverpassParser::RuleObject_type;
}

void OverpassParser::Object_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_type(this);
}

void OverpassParser::Object_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_type(this);
}


std::any OverpassParser::Object_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitObject_type(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Object_typeContext* OverpassParser::object_type() {
  Object_typeContext *_localctx = _tracker.createInstance<Object_typeContext>(_ctx, getState());
  enterRule(_localctx, 18, OverpassParser::RuleObject_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__6)
      | (1ULL << OverpassParser::T__10)
      | (1ULL << OverpassParser::T__11)
      | (1ULL << OverpassParser::T__12)
      | (1ULL << OverpassParser::T__13))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_objectContext ------------------------------------------------------------------

OverpassParser::Query_objectContext::Query_objectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::Object_typeContext* OverpassParser::Query_objectContext::object_type() {
  return getRuleContext<OverpassParser::Object_typeContext>(0);
}

tree::TerminalNode* OverpassParser::Query_objectContext::DOT_ID() {
  return getToken(OverpassParser::DOT_ID, 0);
}

std::vector<OverpassParser::SelectorContext *> OverpassParser::Query_objectContext::selector() {
  return getRuleContexts<OverpassParser::SelectorContext>();
}

OverpassParser::SelectorContext* OverpassParser::Query_objectContext::selector(size_t i) {
  return getRuleContext<OverpassParser::SelectorContext>(i);
}

std::vector<OverpassParser::FilterContext *> OverpassParser::Query_objectContext::filter() {
  return getRuleContexts<OverpassParser::FilterContext>();
}

OverpassParser::FilterContext* OverpassParser::Query_objectContext::filter(size_t i) {
  return getRuleContext<OverpassParser::FilterContext>(i);
}

OverpassParser::AsignationContext* OverpassParser::Query_objectContext::asignation() {
  return getRuleContext<OverpassParser::AsignationContext>(0);
}


size_t OverpassParser::Query_objectContext::getRuleIndex() const {
  return OverpassParser::RuleQuery_object;
}

void OverpassParser::Query_objectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_object(this);
}

void OverpassParser::Query_objectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_object(this);
}


std::any OverpassParser::Query_objectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitQuery_object(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Query_objectContext* OverpassParser::query_object() {
  Query_objectContext *_localctx = _tracker.createInstance<Query_objectContext>(_ctx, getState());
  enterRule(_localctx, 20, OverpassParser::RuleQuery_object);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    object_type();
    setState(96);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::DOT_ID) {
      setState(95);
      match(OverpassParser::DOT_ID);
    }
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__0) {
      setState(98);
      selector();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__7) {
      setState(104);
      filter();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__9) {
      setState(110);
      asignation();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_recurseContext ------------------------------------------------------------------

OverpassParser::Query_recurseContext::Query_recurseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t OverpassParser::Query_recurseContext::getRuleIndex() const {
  return OverpassParser::RuleQuery_recurse;
}

void OverpassParser::Query_recurseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_recurse(this);
}

void OverpassParser::Query_recurseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_recurse(this);
}


std::any OverpassParser::Query_recurseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitQuery_recurse(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Query_recurseContext* OverpassParser::query_recurse() {
  Query_recurseContext *_localctx = _tracker.createInstance<Query_recurseContext>(_ctx, getState());
  enterRule(_localctx, 22, OverpassParser::RuleQuery_recurse);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__14)
      | (1ULL << OverpassParser::T__15)
      | (1ULL << OverpassParser::T__16)
      | (1ULL << OverpassParser::T__17))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryContext ------------------------------------------------------------------

OverpassParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::Query_objectContext* OverpassParser::QueryContext::query_object() {
  return getRuleContext<OverpassParser::Query_objectContext>(0);
}

OverpassParser::Query_recurseContext* OverpassParser::QueryContext::query_recurse() {
  return getRuleContext<OverpassParser::Query_recurseContext>(0);
}


size_t OverpassParser::QueryContext::getRuleIndex() const {
  return OverpassParser::RuleQuery;
}

void OverpassParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void OverpassParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}


std::any OverpassParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::QueryContext* OverpassParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 24, OverpassParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OverpassParser::T__6:
      case OverpassParser::T__10:
      case OverpassParser::T__11:
      case OverpassParser::T__12:
      case OverpassParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(115);
        query_object();
        break;
      }

      case OverpassParser::T__14:
      case OverpassParser::T__15:
      case OverpassParser::T__16:
      case OverpassParser::T__17: {
        enterOuterAlt(_localctx, 2);
        setState(116);
        query_recurse();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_groupContext ------------------------------------------------------------------

OverpassParser::Query_groupContext::Query_groupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OverpassParser::Query_sequenceContext *> OverpassParser::Query_groupContext::query_sequence() {
  return getRuleContexts<OverpassParser::Query_sequenceContext>();
}

OverpassParser::Query_sequenceContext* OverpassParser::Query_groupContext::query_sequence(size_t i) {
  return getRuleContext<OverpassParser::Query_sequenceContext>(i);
}


size_t OverpassParser::Query_groupContext::getRuleIndex() const {
  return OverpassParser::RuleQuery_group;
}

void OverpassParser::Query_groupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_group(this);
}

void OverpassParser::Query_groupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_group(this);
}


std::any OverpassParser::Query_groupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitQuery_group(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Query_groupContext* OverpassParser::query_group() {
  Query_groupContext *_localctx = _tracker.createInstance<Query_groupContext>(_ctx, getState());
  enterRule(_localctx, 26, OverpassParser::RuleQuery_group);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(OverpassParser::T__7);
    setState(123); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(120);
      query_sequence();
      setState(121);
      match(OverpassParser::T__18);
      setState(125); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__6)
      | (1ULL << OverpassParser::T__7)
      | (1ULL << OverpassParser::T__10)
      | (1ULL << OverpassParser::T__11)
      | (1ULL << OverpassParser::T__12)
      | (1ULL << OverpassParser::T__13)
      | (1ULL << OverpassParser::T__14)
      | (1ULL << OverpassParser::T__15)
      | (1ULL << OverpassParser::T__16)
      | (1ULL << OverpassParser::T__17))) != 0));
    setState(127);
    match(OverpassParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_sequenceContext ------------------------------------------------------------------

OverpassParser::Query_sequenceContext::Query_sequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::QueryContext* OverpassParser::Query_sequenceContext::query() {
  return getRuleContext<OverpassParser::QueryContext>(0);
}

OverpassParser::Query_groupContext* OverpassParser::Query_sequenceContext::query_group() {
  return getRuleContext<OverpassParser::Query_groupContext>(0);
}


size_t OverpassParser::Query_sequenceContext::getRuleIndex() const {
  return OverpassParser::RuleQuery_sequence;
}

void OverpassParser::Query_sequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_sequence(this);
}

void OverpassParser::Query_sequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_sequence(this);
}


std::any OverpassParser::Query_sequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitQuery_sequence(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Query_sequenceContext* OverpassParser::query_sequence() {
  Query_sequenceContext *_localctx = _tracker.createInstance<Query_sequenceContext>(_ctx, getState());
  enterRule(_localctx, 28, OverpassParser::RuleQuery_sequence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OverpassParser::T__6:
      case OverpassParser::T__10:
      case OverpassParser::T__11:
      case OverpassParser::T__12:
      case OverpassParser::T__13:
      case OverpassParser::T__14:
      case OverpassParser::T__15:
      case OverpassParser::T__16:
      case OverpassParser::T__17: {
        enterOuterAlt(_localctx, 1);
        setState(129);
        query();
        break;
      }

      case OverpassParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(130);
        query_group();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OuputContext ------------------------------------------------------------------

OverpassParser::OuputContext::OuputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t OverpassParser::OuputContext::getRuleIndex() const {
  return OverpassParser::RuleOuput;
}

void OverpassParser::OuputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOuput(this);
}

void OverpassParser::OuputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOuput(this);
}


std::any OverpassParser::OuputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitOuput(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::OuputContext* OverpassParser::ouput() {
  OuputContext *_localctx = _tracker.createInstance<OuputContext>(_ctx, getState());
  enterRule(_localctx, 30, OverpassParser::RuleOuput);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(OverpassParser::T__19);
    setState(134);
    match(OverpassParser::T__20);
    setState(135);
    match(OverpassParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequestContext ------------------------------------------------------------------

OverpassParser::RequestContext::RequestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::MetadataContext* OverpassParser::RequestContext::metadata() {
  return getRuleContext<OverpassParser::MetadataContext>(0);
}

std::vector<OverpassParser::Query_sequenceContext *> OverpassParser::RequestContext::query_sequence() {
  return getRuleContexts<OverpassParser::Query_sequenceContext>();
}

OverpassParser::Query_sequenceContext* OverpassParser::RequestContext::query_sequence(size_t i) {
  return getRuleContext<OverpassParser::Query_sequenceContext>(i);
}

OverpassParser::OuputContext* OverpassParser::RequestContext::ouput() {
  return getRuleContext<OverpassParser::OuputContext>(0);
}


size_t OverpassParser::RequestContext::getRuleIndex() const {
  return OverpassParser::RuleRequest;
}

void OverpassParser::RequestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequest(this);
}

void OverpassParser::RequestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequest(this);
}


std::any OverpassParser::RequestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitRequest(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::RequestContext* OverpassParser::request() {
  RequestContext *_localctx = _tracker.createInstance<RequestContext>(_ctx, getState());
  enterRule(_localctx, 32, OverpassParser::RuleRequest);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__0) {
      setState(137);
      metadata();
      setState(138);
      match(OverpassParser::T__18);
    }
    setState(145); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(142);
      query_sequence();
      setState(143);
      match(OverpassParser::T__18);
      setState(147); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__6)
      | (1ULL << OverpassParser::T__7)
      | (1ULL << OverpassParser::T__10)
      | (1ULL << OverpassParser::T__11)
      | (1ULL << OverpassParser::T__12)
      | (1ULL << OverpassParser::T__13)
      | (1ULL << OverpassParser::T__14)
      | (1ULL << OverpassParser::T__15)
      | (1ULL << OverpassParser::T__16)
      | (1ULL << OverpassParser::T__17))) != 0));
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__19) {
      setState(149);
      ouput();
      setState(150);
      match(OverpassParser::T__18);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void OverpassParser::initialize() {
  std::call_once(overpassParserOnceFlag, overpassParserInitialize);
}

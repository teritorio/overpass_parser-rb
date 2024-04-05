
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
      "osm_id", "number", "token", "metadata", "selector", "filter_bbox", 
      "filter_osm_id", "filter_osm_ids", "filter_area", "filter_around", 
      "filter", "asignation", "object_type", "query_object", "query_recurse", 
      "query", "query_union", "query_sequence", "out_geom", "out_level_of_details", 
      "out", "request"
    },
    std::vector<std::string>{
      "", "'['", "'out:json'", "']'", "'timeout:'", "','", "'id:'", "'area'", 
      "'around'", "':'", "'('", "')'", "'->'", "'node'", "'way'", "'relation'", 
      "'nwr'", "'<'", "'<<'", "'>'", "'>>'", "';'", "'geom'", "'center'", 
      "'bb'", "'ids'", "'skel'", "'body'", "'tags'", "'meta'", "'out'", 
      "", "", "", "", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "WS", "SL_COMMENT", 
      "ML_COMMENT", "INTEGER", "FLOAT", "OPERATOR", "NOT", "UNQUOTED_STRING", 
      "SIMPLE_QUOTED_STRING", "DOUBLE_QUOTED_STRING", "ID", "DOT_ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,42,192,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,3,2,53,8,2,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,63,8,3,1,4,1,4,3,4,67,8,4,1,4,1,4,1,4,1,4,1,4,3,4,74,8,4,
  	1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,5,7,92,
  	8,7,10,7,12,7,95,9,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,
  	10,1,10,1,10,3,10,111,8,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,13,1,
  	13,3,13,122,8,13,1,13,5,13,125,8,13,10,13,12,13,128,9,13,1,13,5,13,131,
  	8,13,10,13,12,13,134,9,13,1,13,3,13,137,8,13,1,14,1,14,3,14,141,8,14,
  	1,15,1,15,3,15,145,8,15,1,16,1,16,1,16,1,16,4,16,151,8,16,11,16,12,16,
  	152,1,16,1,16,1,16,3,16,158,8,16,1,17,1,17,3,17,162,8,17,1,18,1,18,1,
  	19,1,19,1,20,1,20,3,20,170,8,20,1,20,3,20,173,8,20,1,21,1,21,1,21,3,21,
  	178,8,21,1,21,1,21,1,21,4,21,183,8,21,11,21,12,21,184,1,21,1,21,1,21,
  	3,21,190,8,21,1,21,0,0,22,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,0,5,1,0,34,35,2,0,7,7,13,16,1,0,17,20,1,0,22,24,1,0,
  	25,29,194,0,44,1,0,0,0,2,46,1,0,0,0,4,52,1,0,0,0,6,54,1,0,0,0,8,64,1,
  	0,0,0,10,77,1,0,0,0,12,85,1,0,0,0,14,87,1,0,0,0,16,96,1,0,0,0,18,99,1,
  	0,0,0,20,104,1,0,0,0,22,114,1,0,0,0,24,117,1,0,0,0,26,119,1,0,0,0,28,
  	138,1,0,0,0,30,144,1,0,0,0,32,146,1,0,0,0,34,161,1,0,0,0,36,163,1,0,0,
  	0,38,165,1,0,0,0,40,167,1,0,0,0,42,177,1,0,0,0,44,45,5,34,0,0,45,1,1,
  	0,0,0,46,47,7,0,0,0,47,3,1,0,0,0,48,53,5,39,0,0,49,53,5,40,0,0,50,53,
  	5,38,0,0,51,53,3,2,1,0,52,48,1,0,0,0,52,49,1,0,0,0,52,50,1,0,0,0,52,51,
  	1,0,0,0,53,5,1,0,0,0,54,55,5,1,0,0,55,56,5,2,0,0,56,62,5,3,0,0,57,58,
  	5,1,0,0,58,59,5,4,0,0,59,60,3,2,1,0,60,61,5,3,0,0,61,63,1,0,0,0,62,57,
  	1,0,0,0,62,63,1,0,0,0,63,7,1,0,0,0,64,73,5,1,0,0,65,67,5,37,0,0,66,65,
  	1,0,0,0,66,67,1,0,0,0,67,68,1,0,0,0,68,74,3,4,2,0,69,70,3,4,2,0,70,71,
  	5,36,0,0,71,72,3,4,2,0,72,74,1,0,0,0,73,66,1,0,0,0,73,69,1,0,0,0,74,75,
  	1,0,0,0,75,76,5,3,0,0,76,9,1,0,0,0,77,78,3,2,1,0,78,79,5,5,0,0,79,80,
  	3,2,1,0,80,81,5,5,0,0,81,82,3,2,1,0,82,83,5,5,0,0,83,84,3,2,1,0,84,11,
  	1,0,0,0,85,86,3,0,0,0,86,13,1,0,0,0,87,88,5,6,0,0,88,93,3,0,0,0,89,90,
  	5,5,0,0,90,92,3,0,0,0,91,89,1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,
  	1,0,0,0,94,15,1,0,0,0,95,93,1,0,0,0,96,97,5,7,0,0,97,98,5,42,0,0,98,17,
  	1,0,0,0,99,100,5,8,0,0,100,101,5,42,0,0,101,102,5,9,0,0,102,103,3,2,1,
  	0,103,19,1,0,0,0,104,110,5,10,0,0,105,111,3,10,5,0,106,111,3,12,6,0,107,
  	111,3,14,7,0,108,111,3,16,8,0,109,111,3,18,9,0,110,105,1,0,0,0,110,106,
  	1,0,0,0,110,107,1,0,0,0,110,108,1,0,0,0,110,109,1,0,0,0,111,112,1,0,0,
  	0,112,113,5,11,0,0,113,21,1,0,0,0,114,115,5,12,0,0,115,116,5,42,0,0,116,
  	23,1,0,0,0,117,118,7,1,0,0,118,25,1,0,0,0,119,121,3,24,12,0,120,122,5,
  	42,0,0,121,120,1,0,0,0,121,122,1,0,0,0,122,126,1,0,0,0,123,125,3,8,4,
  	0,124,123,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,
  	132,1,0,0,0,128,126,1,0,0,0,129,131,3,20,10,0,130,129,1,0,0,0,131,134,
  	1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,136,1,0,0,0,134,132,1,0,0,
  	0,135,137,3,22,11,0,136,135,1,0,0,0,136,137,1,0,0,0,137,27,1,0,0,0,138,
  	140,7,2,0,0,139,141,3,22,11,0,140,139,1,0,0,0,140,141,1,0,0,0,141,29,
  	1,0,0,0,142,145,3,26,13,0,143,145,3,28,14,0,144,142,1,0,0,0,144,143,1,
  	0,0,0,145,31,1,0,0,0,146,150,5,10,0,0,147,148,3,34,17,0,148,149,5,21,
  	0,0,149,151,1,0,0,0,150,147,1,0,0,0,151,152,1,0,0,0,152,150,1,0,0,0,152,
  	153,1,0,0,0,153,154,1,0,0,0,154,155,5,11,0,0,155,157,1,0,0,0,156,158,
  	3,22,11,0,157,156,1,0,0,0,157,158,1,0,0,0,158,33,1,0,0,0,159,162,3,30,
  	15,0,160,162,3,32,16,0,161,159,1,0,0,0,161,160,1,0,0,0,162,35,1,0,0,0,
  	163,164,7,3,0,0,164,37,1,0,0,0,165,166,7,4,0,0,166,39,1,0,0,0,167,169,
  	5,30,0,0,168,170,3,36,18,0,169,168,1,0,0,0,169,170,1,0,0,0,170,172,1,
  	0,0,0,171,173,3,38,19,0,172,171,1,0,0,0,172,173,1,0,0,0,173,41,1,0,0,
  	0,174,175,3,6,3,0,175,176,5,21,0,0,176,178,1,0,0,0,177,174,1,0,0,0,177,
  	178,1,0,0,0,178,182,1,0,0,0,179,180,3,34,17,0,180,181,5,21,0,0,181,183,
  	1,0,0,0,182,179,1,0,0,0,183,184,1,0,0,0,184,182,1,0,0,0,184,185,1,0,0,
  	0,185,189,1,0,0,0,186,187,3,40,20,0,187,188,5,21,0,0,188,190,1,0,0,0,
  	189,186,1,0,0,0,189,190,1,0,0,0,190,43,1,0,0,0,20,52,62,66,73,93,110,
  	121,126,132,136,140,144,152,157,161,169,172,177,184,189
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


//----------------- Osm_idContext ------------------------------------------------------------------

OverpassParser::Osm_idContext::Osm_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::Osm_idContext::INTEGER() {
  return getToken(OverpassParser::INTEGER, 0);
}


size_t OverpassParser::Osm_idContext::getRuleIndex() const {
  return OverpassParser::RuleOsm_id;
}

void OverpassParser::Osm_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOsm_id(this);
}

void OverpassParser::Osm_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOsm_id(this);
}


std::any OverpassParser::Osm_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitOsm_id(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Osm_idContext* OverpassParser::osm_id() {
  Osm_idContext *_localctx = _tracker.createInstance<Osm_idContext>(_ctx, getState());
  enterRule(_localctx, 0, OverpassParser::RuleOsm_id);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(OverpassParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

OverpassParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::NumberContext::INTEGER() {
  return getToken(OverpassParser::INTEGER, 0);
}

tree::TerminalNode* OverpassParser::NumberContext::FLOAT() {
  return getToken(OverpassParser::FLOAT, 0);
}


size_t OverpassParser::NumberContext::getRuleIndex() const {
  return OverpassParser::RuleNumber;
}

void OverpassParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void OverpassParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


std::any OverpassParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::NumberContext* OverpassParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 2, OverpassParser::RuleNumber);
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
    setState(46);
    _la = _input->LA(1);
    if (!(_la == OverpassParser::INTEGER

    || _la == OverpassParser::FLOAT)) {
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

OverpassParser::NumberContext* OverpassParser::TokenContext::number() {
  return getRuleContext<OverpassParser::NumberContext>(0);
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
  enterRule(_localctx, 4, OverpassParser::RuleToken);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(52);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OverpassParser::SIMPLE_QUOTED_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(48);
        match(OverpassParser::SIMPLE_QUOTED_STRING);
        break;
      }

      case OverpassParser::DOUBLE_QUOTED_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(49);
        match(OverpassParser::DOUBLE_QUOTED_STRING);
        break;
      }

      case OverpassParser::UNQUOTED_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(50);
        match(OverpassParser::UNQUOTED_STRING);
        break;
      }

      case OverpassParser::INTEGER:
      case OverpassParser::FLOAT: {
        enterOuterAlt(_localctx, 4);
        setState(51);
        number();
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

//----------------- MetadataContext ------------------------------------------------------------------

OverpassParser::MetadataContext::MetadataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::NumberContext* OverpassParser::MetadataContext::number() {
  return getRuleContext<OverpassParser::NumberContext>(0);
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
  enterRule(_localctx, 6, OverpassParser::RuleMetadata);
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
    setState(54);
    match(OverpassParser::T__0);

    setState(55);
    antlrcpp::downCast<MetadataContext *>(_localctx)->out_json = match(OverpassParser::T__1);
    setState(56);
    match(OverpassParser::T__2);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__0) {
      setState(57);
      match(OverpassParser::T__0);
      setState(58);
      match(OverpassParser::T__3);

      setState(59);
      antlrcpp::downCast<MetadataContext *>(_localctx)->timeout = number();
      setState(60);
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
  enterRule(_localctx, 8, OverpassParser::RuleSelector);
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
    setState(64);
    match(OverpassParser::T__0);
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(66);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == OverpassParser::NOT) {
        setState(65);
        match(OverpassParser::NOT);
      }
      setState(68);
      antlrcpp::downCast<SelectorContext *>(_localctx)->key = token();
      break;
    }

    case 2: {
      setState(69);
      antlrcpp::downCast<SelectorContext *>(_localctx)->key = token();
      setState(70);
      match(OverpassParser::OPERATOR);
      setState(71);
      antlrcpp::downCast<SelectorContext *>(_localctx)->value = token();
      break;
    }

    default:
      break;
    }
    setState(75);
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

std::vector<OverpassParser::NumberContext *> OverpassParser::Filter_bboxContext::number() {
  return getRuleContexts<OverpassParser::NumberContext>();
}

OverpassParser::NumberContext* OverpassParser::Filter_bboxContext::number(size_t i) {
  return getRuleContext<OverpassParser::NumberContext>(i);
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
  enterRule(_localctx, 10, OverpassParser::RuleFilter_bbox);

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
    number();
    setState(78);
    match(OverpassParser::T__4);
    setState(79);
    number();
    setState(80);
    match(OverpassParser::T__4);
    setState(81);
    number();
    setState(82);
    match(OverpassParser::T__4);
    setState(83);
    number();
   
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

OverpassParser::Osm_idContext* OverpassParser::Filter_osm_idContext::osm_id() {
  return getRuleContext<OverpassParser::Osm_idContext>(0);
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
  enterRule(_localctx, 12, OverpassParser::RuleFilter_osm_id);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    osm_id();
   
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

std::vector<OverpassParser::Osm_idContext *> OverpassParser::Filter_osm_idsContext::osm_id() {
  return getRuleContexts<OverpassParser::Osm_idContext>();
}

OverpassParser::Osm_idContext* OverpassParser::Filter_osm_idsContext::osm_id(size_t i) {
  return getRuleContext<OverpassParser::Osm_idContext>(i);
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
  enterRule(_localctx, 14, OverpassParser::RuleFilter_osm_ids);
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
    setState(87);
    match(OverpassParser::T__5);
    setState(88);
    osm_id();
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__4) {
      setState(89);
      match(OverpassParser::T__4);
      setState(90);
      osm_id();
      setState(95);
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
  enterRule(_localctx, 16, OverpassParser::RuleFilter_area);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(OverpassParser::T__6);
    setState(97);
    match(OverpassParser::DOT_ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Filter_aroundContext ------------------------------------------------------------------

OverpassParser::Filter_aroundContext::Filter_aroundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OverpassParser::Filter_aroundContext::DOT_ID() {
  return getToken(OverpassParser::DOT_ID, 0);
}

OverpassParser::NumberContext* OverpassParser::Filter_aroundContext::number() {
  return getRuleContext<OverpassParser::NumberContext>(0);
}


size_t OverpassParser::Filter_aroundContext::getRuleIndex() const {
  return OverpassParser::RuleFilter_around;
}

void OverpassParser::Filter_aroundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilter_around(this);
}

void OverpassParser::Filter_aroundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilter_around(this);
}


std::any OverpassParser::Filter_aroundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitFilter_around(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Filter_aroundContext* OverpassParser::filter_around() {
  Filter_aroundContext *_localctx = _tracker.createInstance<Filter_aroundContext>(_ctx, getState());
  enterRule(_localctx, 18, OverpassParser::RuleFilter_around);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(OverpassParser::T__7);
    setState(100);
    match(OverpassParser::DOT_ID);
    setState(101);
    match(OverpassParser::T__8);
    setState(102);
    number();
   
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

OverpassParser::Filter_aroundContext* OverpassParser::FilterContext::filter_around() {
  return getRuleContext<OverpassParser::Filter_aroundContext>(0);
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
  enterRule(_localctx, 20, OverpassParser::RuleFilter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(OverpassParser::T__9);
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(105);
      filter_bbox();
      break;
    }

    case 2: {
      setState(106);
      filter_osm_id();
      break;
    }

    case 3: {
      setState(107);
      filter_osm_ids();
      break;
    }

    case 4: {
      setState(108);
      filter_area();
      break;
    }

    case 5: {
      setState(109);
      filter_around();
      break;
    }

    default:
      break;
    }
    setState(112);
    match(OverpassParser::T__10);
   
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
  enterRule(_localctx, 22, OverpassParser::RuleAsignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(OverpassParser::T__11);
    setState(115);
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
  enterRule(_localctx, 24, OverpassParser::RuleObject_type);
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
    setState(117);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__6)
      | (1ULL << OverpassParser::T__12)
      | (1ULL << OverpassParser::T__13)
      | (1ULL << OverpassParser::T__14)
      | (1ULL << OverpassParser::T__15))) != 0))) {
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
  enterRule(_localctx, 26, OverpassParser::RuleQuery_object);
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
    object_type();
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::DOT_ID) {
      setState(120);
      match(OverpassParser::DOT_ID);
    }
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__0) {
      setState(123);
      selector();
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__9) {
      setState(129);
      filter();
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__11) {
      setState(135);
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

OverpassParser::AsignationContext* OverpassParser::Query_recurseContext::asignation() {
  return getRuleContext<OverpassParser::AsignationContext>(0);
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
  enterRule(_localctx, 28, OverpassParser::RuleQuery_recurse);
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
    setState(138);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__16)
      | (1ULL << OverpassParser::T__17)
      | (1ULL << OverpassParser::T__18)
      | (1ULL << OverpassParser::T__19))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__11) {
      setState(139);
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
  enterRule(_localctx, 30, OverpassParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OverpassParser::T__6:
      case OverpassParser::T__12:
      case OverpassParser::T__13:
      case OverpassParser::T__14:
      case OverpassParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(142);
        query_object();
        break;
      }

      case OverpassParser::T__16:
      case OverpassParser::T__17:
      case OverpassParser::T__18:
      case OverpassParser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(143);
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

//----------------- Query_unionContext ------------------------------------------------------------------

OverpassParser::Query_unionContext::Query_unionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::AsignationContext* OverpassParser::Query_unionContext::asignation() {
  return getRuleContext<OverpassParser::AsignationContext>(0);
}

std::vector<OverpassParser::Query_sequenceContext *> OverpassParser::Query_unionContext::query_sequence() {
  return getRuleContexts<OverpassParser::Query_sequenceContext>();
}

OverpassParser::Query_sequenceContext* OverpassParser::Query_unionContext::query_sequence(size_t i) {
  return getRuleContext<OverpassParser::Query_sequenceContext>(i);
}


size_t OverpassParser::Query_unionContext::getRuleIndex() const {
  return OverpassParser::RuleQuery_union;
}

void OverpassParser::Query_unionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_union(this);
}

void OverpassParser::Query_unionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_union(this);
}


std::any OverpassParser::Query_unionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitQuery_union(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Query_unionContext* OverpassParser::query_union() {
  Query_unionContext *_localctx = _tracker.createInstance<Query_unionContext>(_ctx, getState());
  enterRule(_localctx, 32, OverpassParser::RuleQuery_union);
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
    setState(146);
    match(OverpassParser::T__9);
    setState(150); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(147);
      query_sequence();
      setState(148);
      match(OverpassParser::T__20);
      setState(152); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__6)
      | (1ULL << OverpassParser::T__9)
      | (1ULL << OverpassParser::T__12)
      | (1ULL << OverpassParser::T__13)
      | (1ULL << OverpassParser::T__14)
      | (1ULL << OverpassParser::T__15)
      | (1ULL << OverpassParser::T__16)
      | (1ULL << OverpassParser::T__17)
      | (1ULL << OverpassParser::T__18)
      | (1ULL << OverpassParser::T__19))) != 0));
    setState(154);
    match(OverpassParser::T__10);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__11) {
      setState(156);
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

//----------------- Query_sequenceContext ------------------------------------------------------------------

OverpassParser::Query_sequenceContext::Query_sequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::QueryContext* OverpassParser::Query_sequenceContext::query() {
  return getRuleContext<OverpassParser::QueryContext>(0);
}

OverpassParser::Query_unionContext* OverpassParser::Query_sequenceContext::query_union() {
  return getRuleContext<OverpassParser::Query_unionContext>(0);
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
  enterRule(_localctx, 34, OverpassParser::RuleQuery_sequence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OverpassParser::T__6:
      case OverpassParser::T__12:
      case OverpassParser::T__13:
      case OverpassParser::T__14:
      case OverpassParser::T__15:
      case OverpassParser::T__16:
      case OverpassParser::T__17:
      case OverpassParser::T__18:
      case OverpassParser::T__19: {
        enterOuterAlt(_localctx, 1);
        setState(159);
        query();
        break;
      }

      case OverpassParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(160);
        query_union();
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

//----------------- Out_geomContext ------------------------------------------------------------------

OverpassParser::Out_geomContext::Out_geomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t OverpassParser::Out_geomContext::getRuleIndex() const {
  return OverpassParser::RuleOut_geom;
}

void OverpassParser::Out_geomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOut_geom(this);
}

void OverpassParser::Out_geomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOut_geom(this);
}


std::any OverpassParser::Out_geomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitOut_geom(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Out_geomContext* OverpassParser::out_geom() {
  Out_geomContext *_localctx = _tracker.createInstance<Out_geomContext>(_ctx, getState());
  enterRule(_localctx, 36, OverpassParser::RuleOut_geom);
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
    setState(163);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__21)
      | (1ULL << OverpassParser::T__22)
      | (1ULL << OverpassParser::T__23))) != 0))) {
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

//----------------- Out_level_of_detailsContext ------------------------------------------------------------------

OverpassParser::Out_level_of_detailsContext::Out_level_of_detailsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t OverpassParser::Out_level_of_detailsContext::getRuleIndex() const {
  return OverpassParser::RuleOut_level_of_details;
}

void OverpassParser::Out_level_of_detailsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOut_level_of_details(this);
}

void OverpassParser::Out_level_of_detailsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOut_level_of_details(this);
}


std::any OverpassParser::Out_level_of_detailsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitOut_level_of_details(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::Out_level_of_detailsContext* OverpassParser::out_level_of_details() {
  Out_level_of_detailsContext *_localctx = _tracker.createInstance<Out_level_of_detailsContext>(_ctx, getState());
  enterRule(_localctx, 38, OverpassParser::RuleOut_level_of_details);
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
    setState(165);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__24)
      | (1ULL << OverpassParser::T__25)
      | (1ULL << OverpassParser::T__26)
      | (1ULL << OverpassParser::T__27)
      | (1ULL << OverpassParser::T__28))) != 0))) {
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

//----------------- OutContext ------------------------------------------------------------------

OverpassParser::OutContext::OutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OverpassParser::Out_geomContext* OverpassParser::OutContext::out_geom() {
  return getRuleContext<OverpassParser::Out_geomContext>(0);
}

OverpassParser::Out_level_of_detailsContext* OverpassParser::OutContext::out_level_of_details() {
  return getRuleContext<OverpassParser::Out_level_of_detailsContext>(0);
}


size_t OverpassParser::OutContext::getRuleIndex() const {
  return OverpassParser::RuleOut;
}

void OverpassParser::OutContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOut(this);
}

void OverpassParser::OutContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OverpassListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOut(this);
}


std::any OverpassParser::OutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OverpassVisitor*>(visitor))
    return parserVisitor->visitOut(this);
  else
    return visitor->visitChildren(this);
}

OverpassParser::OutContext* OverpassParser::out() {
  OutContext *_localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 40, OverpassParser::RuleOut);
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
    setState(167);
    match(OverpassParser::T__29);
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__21)
      | (1ULL << OverpassParser::T__22)
      | (1ULL << OverpassParser::T__23))) != 0)) {
      setState(168);
      out_geom();
    }
    setState(172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__24)
      | (1ULL << OverpassParser::T__25)
      | (1ULL << OverpassParser::T__26)
      | (1ULL << OverpassParser::T__27)
      | (1ULL << OverpassParser::T__28))) != 0)) {
      setState(171);
      out_level_of_details();
    }
   
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

OverpassParser::OutContext* OverpassParser::RequestContext::out() {
  return getRuleContext<OverpassParser::OutContext>(0);
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
  enterRule(_localctx, 42, OverpassParser::RuleRequest);
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
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__0) {
      setState(174);
      metadata();
      setState(175);
      match(OverpassParser::T__20);
    }
    setState(182); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(179);
      query_sequence();
      setState(180);
      match(OverpassParser::T__20);
      setState(184); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << OverpassParser::T__6)
      | (1ULL << OverpassParser::T__9)
      | (1ULL << OverpassParser::T__12)
      | (1ULL << OverpassParser::T__13)
      | (1ULL << OverpassParser::T__14)
      | (1ULL << OverpassParser::T__15)
      | (1ULL << OverpassParser::T__16)
      | (1ULL << OverpassParser::T__17)
      | (1ULL << OverpassParser::T__18)
      | (1ULL << OverpassParser::T__19))) != 0));
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__29) {
      setState(186);
      out();
      setState(187);
      match(OverpassParser::T__20);
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

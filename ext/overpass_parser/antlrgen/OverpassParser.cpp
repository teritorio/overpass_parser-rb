
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
      "number", "token", "metadata", "selector", "filter_bbox", "filter_osm_id", 
      "filter_osm_ids", "filter_area", "filter_around", "filter", "asignation", 
      "object_type", "query_object", "query_recurse", "query", "query_group", 
      "query_sequence", "ouput", "request"
    },
    std::vector<std::string>{
      "", "'['", "'out:json'", "']'", "'timeout:'", "','", "'id:'", "'area'", 
      "'around'", "':'", "'('", "')'", "'->'", "'node'", "'way'", "'relation'", 
      "'nwr'", "'<'", "'<<'", "'>'", "'>>'", "';'", "'out'", "'center'", 
      "'meta'", "", "", "", "", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "WS", "SL_COMMENT", "ML_COMMENT", 
      "INTEGER", "FLOAT", "OPERATOR", "NOT", "UNQUOTED_STRING", "SIMPLE_QUOTED_STRING", 
      "DOUBLE_QUOTED_STRING", "ID", "DOT_ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,36,172,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,1,1,1,1,1,1,1,3,
  	1,45,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,55,8,2,1,3,1,3,3,3,59,8,
  	3,1,3,1,3,1,3,1,3,1,3,3,3,66,8,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,5,1,5,1,6,1,6,1,6,1,6,5,6,84,8,6,10,6,12,6,87,9,6,1,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,103,8,9,1,9,1,9,1,10,1,
  	10,1,10,1,11,1,11,1,12,1,12,3,12,114,8,12,1,12,5,12,117,8,12,10,12,12,
  	12,120,9,12,1,12,5,12,123,8,12,10,12,12,12,126,9,12,1,12,3,12,129,8,12,
  	1,13,1,13,1,14,1,14,3,14,135,8,14,1,15,1,15,1,15,1,15,4,15,141,8,15,11,
  	15,12,15,142,1,15,1,15,1,16,1,16,3,16,149,8,16,1,17,1,17,1,17,1,17,1,
  	18,1,18,1,18,3,18,158,8,18,1,18,1,18,1,18,4,18,163,8,18,11,18,12,18,164,
  	1,18,1,18,1,18,3,18,170,8,18,1,18,0,0,19,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,0,3,1,0,28,29,2,0,7,7,13,16,1,0,17,20,173,0,38,
  	1,0,0,0,2,44,1,0,0,0,4,46,1,0,0,0,6,56,1,0,0,0,8,69,1,0,0,0,10,77,1,0,
  	0,0,12,79,1,0,0,0,14,88,1,0,0,0,16,91,1,0,0,0,18,96,1,0,0,0,20,106,1,
  	0,0,0,22,109,1,0,0,0,24,111,1,0,0,0,26,130,1,0,0,0,28,134,1,0,0,0,30,
  	136,1,0,0,0,32,148,1,0,0,0,34,150,1,0,0,0,36,157,1,0,0,0,38,39,7,0,0,
  	0,39,1,1,0,0,0,40,45,5,33,0,0,41,45,5,34,0,0,42,45,5,32,0,0,43,45,3,0,
  	0,0,44,40,1,0,0,0,44,41,1,0,0,0,44,42,1,0,0,0,44,43,1,0,0,0,45,3,1,0,
  	0,0,46,47,5,1,0,0,47,48,5,2,0,0,48,54,5,3,0,0,49,50,5,1,0,0,50,51,5,4,
  	0,0,51,52,3,0,0,0,52,53,5,3,0,0,53,55,1,0,0,0,54,49,1,0,0,0,54,55,1,0,
  	0,0,55,5,1,0,0,0,56,65,5,1,0,0,57,59,5,31,0,0,58,57,1,0,0,0,58,59,1,0,
  	0,0,59,60,1,0,0,0,60,66,3,2,1,0,61,62,3,2,1,0,62,63,5,30,0,0,63,64,3,
  	2,1,0,64,66,1,0,0,0,65,58,1,0,0,0,65,61,1,0,0,0,66,67,1,0,0,0,67,68,5,
  	3,0,0,68,7,1,0,0,0,69,70,3,0,0,0,70,71,5,5,0,0,71,72,3,0,0,0,72,73,5,
  	5,0,0,73,74,3,0,0,0,74,75,5,5,0,0,75,76,3,0,0,0,76,9,1,0,0,0,77,78,5,
  	28,0,0,78,11,1,0,0,0,79,80,5,6,0,0,80,85,5,28,0,0,81,82,5,5,0,0,82,84,
  	5,28,0,0,83,81,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,13,
  	1,0,0,0,87,85,1,0,0,0,88,89,5,7,0,0,89,90,5,36,0,0,90,15,1,0,0,0,91,92,
  	5,8,0,0,92,93,5,36,0,0,93,94,5,9,0,0,94,95,3,0,0,0,95,17,1,0,0,0,96,102,
  	5,10,0,0,97,103,3,8,4,0,98,103,3,10,5,0,99,103,3,12,6,0,100,103,3,14,
  	7,0,101,103,3,16,8,0,102,97,1,0,0,0,102,98,1,0,0,0,102,99,1,0,0,0,102,
  	100,1,0,0,0,102,101,1,0,0,0,103,104,1,0,0,0,104,105,5,11,0,0,105,19,1,
  	0,0,0,106,107,5,12,0,0,107,108,5,36,0,0,108,21,1,0,0,0,109,110,7,1,0,
  	0,110,23,1,0,0,0,111,113,3,22,11,0,112,114,5,36,0,0,113,112,1,0,0,0,113,
  	114,1,0,0,0,114,118,1,0,0,0,115,117,3,6,3,0,116,115,1,0,0,0,117,120,1,
  	0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,124,1,0,0,0,120,118,1,0,0,0,
  	121,123,3,18,9,0,122,121,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,124,
  	125,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,127,129,3,20,10,0,128,127,
  	1,0,0,0,128,129,1,0,0,0,129,25,1,0,0,0,130,131,7,2,0,0,131,27,1,0,0,0,
  	132,135,3,24,12,0,133,135,3,26,13,0,134,132,1,0,0,0,134,133,1,0,0,0,135,
  	29,1,0,0,0,136,140,5,10,0,0,137,138,3,32,16,0,138,139,5,21,0,0,139,141,
  	1,0,0,0,140,137,1,0,0,0,141,142,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,
  	0,143,144,1,0,0,0,144,145,5,11,0,0,145,31,1,0,0,0,146,149,3,28,14,0,147,
  	149,3,30,15,0,148,146,1,0,0,0,148,147,1,0,0,0,149,33,1,0,0,0,150,151,
  	5,22,0,0,151,152,5,23,0,0,152,153,5,24,0,0,153,35,1,0,0,0,154,155,3,4,
  	2,0,155,156,5,21,0,0,156,158,1,0,0,0,157,154,1,0,0,0,157,158,1,0,0,0,
  	158,162,1,0,0,0,159,160,3,32,16,0,160,161,5,21,0,0,161,163,1,0,0,0,162,
  	159,1,0,0,0,163,164,1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,169,1,
  	0,0,0,166,167,3,34,17,0,167,168,5,21,0,0,168,170,1,0,0,0,169,166,1,0,
  	0,0,169,170,1,0,0,0,170,37,1,0,0,0,16,44,54,58,65,85,102,113,118,124,
  	128,134,142,148,157,164,169
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
  enterRule(_localctx, 0, OverpassParser::RuleNumber);
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
    setState(38);
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
  enterRule(_localctx, 2, OverpassParser::RuleToken);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OverpassParser::SIMPLE_QUOTED_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(40);
        match(OverpassParser::SIMPLE_QUOTED_STRING);
        break;
      }

      case OverpassParser::DOUBLE_QUOTED_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(41);
        match(OverpassParser::DOUBLE_QUOTED_STRING);
        break;
      }

      case OverpassParser::UNQUOTED_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(42);
        match(OverpassParser::UNQUOTED_STRING);
        break;
      }

      case OverpassParser::INTEGER:
      case OverpassParser::FLOAT: {
        enterOuterAlt(_localctx, 4);
        setState(43);
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
  enterRule(_localctx, 4, OverpassParser::RuleMetadata);
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
    match(OverpassParser::T__0);
    setState(47);
    match(OverpassParser::T__1);
    setState(48);
    match(OverpassParser::T__2);
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__0) {
      setState(49);
      match(OverpassParser::T__0);
      setState(50);
      match(OverpassParser::T__3);
      setState(51);
      number();
      setState(52);
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
  enterRule(_localctx, 6, OverpassParser::RuleSelector);
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
    setState(56);
    match(OverpassParser::T__0);
    setState(65);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(58);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == OverpassParser::NOT) {
        setState(57);
        match(OverpassParser::NOT);
      }
      setState(60);
      antlrcpp::downCast<SelectorContext *>(_localctx)->key = token();
      break;
    }

    case 2: {
      setState(61);
      antlrcpp::downCast<SelectorContext *>(_localctx)->key = token();
      setState(62);
      match(OverpassParser::OPERATOR);
      setState(63);
      antlrcpp::downCast<SelectorContext *>(_localctx)->value = token();
      break;
    }

    default:
      break;
    }
    setState(67);
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
  enterRule(_localctx, 8, OverpassParser::RuleFilter_bbox);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    number();
    setState(70);
    match(OverpassParser::T__4);
    setState(71);
    number();
    setState(72);
    match(OverpassParser::T__4);
    setState(73);
    number();
    setState(74);
    match(OverpassParser::T__4);
    setState(75);
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

tree::TerminalNode* OverpassParser::Filter_osm_idContext::INTEGER() {
  return getToken(OverpassParser::INTEGER, 0);
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
  enterRule(_localctx, 10, OverpassParser::RuleFilter_osm_id);

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
    match(OverpassParser::INTEGER);
   
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

std::vector<tree::TerminalNode *> OverpassParser::Filter_osm_idsContext::INTEGER() {
  return getTokens(OverpassParser::INTEGER);
}

tree::TerminalNode* OverpassParser::Filter_osm_idsContext::INTEGER(size_t i) {
  return getToken(OverpassParser::INTEGER, i);
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
  enterRule(_localctx, 12, OverpassParser::RuleFilter_osm_ids);
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
    setState(79);
    match(OverpassParser::T__5);
    setState(80);
    match(OverpassParser::INTEGER);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__4) {
      setState(81);
      match(OverpassParser::T__4);
      setState(82);
      match(OverpassParser::INTEGER);
      setState(87);
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
  enterRule(_localctx, 14, OverpassParser::RuleFilter_area);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(OverpassParser::T__6);
    setState(89);
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
  enterRule(_localctx, 16, OverpassParser::RuleFilter_around);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(OverpassParser::T__7);
    setState(92);
    match(OverpassParser::DOT_ID);
    setState(93);
    match(OverpassParser::T__8);
    setState(94);
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
  enterRule(_localctx, 18, OverpassParser::RuleFilter);

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
    match(OverpassParser::T__9);
    setState(102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(97);
      filter_bbox();
      break;
    }

    case 2: {
      setState(98);
      filter_osm_id();
      break;
    }

    case 3: {
      setState(99);
      filter_osm_ids();
      break;
    }

    case 4: {
      setState(100);
      filter_area();
      break;
    }

    case 5: {
      setState(101);
      filter_around();
      break;
    }

    default:
      break;
    }
    setState(104);
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
  enterRule(_localctx, 20, OverpassParser::RuleAsignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(OverpassParser::T__11);
    setState(107);
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
  enterRule(_localctx, 22, OverpassParser::RuleObject_type);
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
    setState(109);
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
  enterRule(_localctx, 24, OverpassParser::RuleQuery_object);
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
    setState(111);
    object_type();
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::DOT_ID) {
      setState(112);
      match(OverpassParser::DOT_ID);
    }
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__0) {
      setState(115);
      selector();
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OverpassParser::T__9) {
      setState(121);
      filter();
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__11) {
      setState(127);
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
  enterRule(_localctx, 26, OverpassParser::RuleQuery_recurse);
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
    setState(130);
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
  enterRule(_localctx, 28, OverpassParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OverpassParser::T__6:
      case OverpassParser::T__12:
      case OverpassParser::T__13:
      case OverpassParser::T__14:
      case OverpassParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(132);
        query_object();
        break;
      }

      case OverpassParser::T__16:
      case OverpassParser::T__17:
      case OverpassParser::T__18:
      case OverpassParser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(133);
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
  enterRule(_localctx, 30, OverpassParser::RuleQuery_group);
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
    setState(136);
    match(OverpassParser::T__9);
    setState(140); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(137);
      query_sequence();
      setState(138);
      match(OverpassParser::T__20);
      setState(142); 
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
    setState(144);
    match(OverpassParser::T__10);
   
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
  enterRule(_localctx, 32, OverpassParser::RuleQuery_sequence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(148);
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
        setState(146);
        query();
        break;
      }

      case OverpassParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(147);
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
  enterRule(_localctx, 34, OverpassParser::RuleOuput);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(OverpassParser::T__21);
    setState(151);
    match(OverpassParser::T__22);
    setState(152);
    match(OverpassParser::T__23);
   
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
  enterRule(_localctx, 36, OverpassParser::RuleRequest);
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
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__0) {
      setState(154);
      metadata();
      setState(155);
      match(OverpassParser::T__20);
    }
    setState(162); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(159);
      query_sequence();
      setState(160);
      match(OverpassParser::T__20);
      setState(164); 
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
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OverpassParser::T__21) {
      setState(166);
      ouput();
      setState(167);
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

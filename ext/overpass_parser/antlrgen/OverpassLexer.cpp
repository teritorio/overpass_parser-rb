
// Generated from ./Overpass.g4 by ANTLR 4.10.1


#include "OverpassLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct OverpassLexerStaticData final {
  OverpassLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  OverpassLexerStaticData(const OverpassLexerStaticData&) = delete;
  OverpassLexerStaticData(OverpassLexerStaticData&&) = delete;
  OverpassLexerStaticData& operator=(const OverpassLexerStaticData&) = delete;
  OverpassLexerStaticData& operator=(OverpassLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag overpasslexerLexerOnceFlag;
OverpassLexerStaticData *overpasslexerLexerStaticData = nullptr;

void overpasslexerLexerInitialize() {
  assert(overpasslexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<OverpassLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "WS", "SL_COMMENT", "ML_COMMENT", 
      "NUMBER", "OPERATOR", "NOT", "UNQUOTED_STRING", "SIMPLE_QUOTED_STRING", 
      "DOUBLE_QUOTED_STRING", "ID", "DOT_ID"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'['", "'out:json'", "']'", "'timeout:'", "','", "'id:'", "'area'", 
      "'('", "')'", "'->'", "'node'", "'way'", "'relation'", "'nwr'", "'<'", 
      "'<<'", "'>'", "'>>'", "';'", "'out'", "'center'", "'meta'", "", "", 
      "", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "WS", "SL_COMMENT", "ML_COMMENT", "NUMBER", 
      "OPERATOR", "NOT", "UNQUOTED_STRING", "SIMPLE_QUOTED_STRING", "DOUBLE_QUOTED_STRING", 
      "ID", "DOT_ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,33,255,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,
  	1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,
  	1,23,5,23,166,8,23,10,23,12,23,169,9,23,1,23,3,23,172,8,23,1,23,1,23,
  	1,23,1,23,1,24,1,24,1,24,1,24,5,24,182,8,24,10,24,12,24,185,9,24,1,24,
  	1,24,1,24,1,24,1,24,1,25,4,25,193,8,25,11,25,12,25,194,1,25,1,25,4,25,
  	199,8,25,11,25,12,25,200,3,25,203,8,25,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,3,26,215,8,26,1,27,1,27,1,28,4,28,220,8,28,11,28,
  	12,28,221,1,29,1,29,1,29,1,29,5,29,228,8,29,10,29,12,29,231,9,29,1,29,
  	1,29,1,30,1,30,1,30,1,30,5,30,239,8,30,10,30,12,30,242,9,30,1,30,1,30,
  	1,31,1,31,5,31,248,8,31,10,31,12,31,251,9,31,1,32,1,32,1,32,2,167,183,
  	0,33,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,
  	25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,1,0,7,3,0,9,10,12,
  	13,32,32,1,0,48,57,5,0,45,45,48,57,65,90,95,95,97,122,4,0,10,10,13,13,
  	34,34,92,92,2,0,34,34,92,92,4,0,10,10,13,13,39,39,92,92,3,0,65,90,95,
  	95,97,122,271,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,
  	1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,
  	0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,
  	0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,
  	1,0,0,0,0,65,1,0,0,0,1,67,1,0,0,0,3,69,1,0,0,0,5,78,1,0,0,0,7,80,1,0,
  	0,0,9,89,1,0,0,0,11,91,1,0,0,0,13,95,1,0,0,0,15,100,1,0,0,0,17,102,1,
  	0,0,0,19,104,1,0,0,0,21,107,1,0,0,0,23,112,1,0,0,0,25,116,1,0,0,0,27,
  	125,1,0,0,0,29,129,1,0,0,0,31,131,1,0,0,0,33,134,1,0,0,0,35,136,1,0,0,
  	0,37,139,1,0,0,0,39,141,1,0,0,0,41,145,1,0,0,0,43,152,1,0,0,0,45,157,
  	1,0,0,0,47,161,1,0,0,0,49,177,1,0,0,0,51,192,1,0,0,0,53,214,1,0,0,0,55,
  	216,1,0,0,0,57,219,1,0,0,0,59,223,1,0,0,0,61,234,1,0,0,0,63,245,1,0,0,
  	0,65,252,1,0,0,0,67,68,5,91,0,0,68,2,1,0,0,0,69,70,5,111,0,0,70,71,5,
  	117,0,0,71,72,5,116,0,0,72,73,5,58,0,0,73,74,5,106,0,0,74,75,5,115,0,
  	0,75,76,5,111,0,0,76,77,5,110,0,0,77,4,1,0,0,0,78,79,5,93,0,0,79,6,1,
  	0,0,0,80,81,5,116,0,0,81,82,5,105,0,0,82,83,5,109,0,0,83,84,5,101,0,0,
  	84,85,5,111,0,0,85,86,5,117,0,0,86,87,5,116,0,0,87,88,5,58,0,0,88,8,1,
  	0,0,0,89,90,5,44,0,0,90,10,1,0,0,0,91,92,5,105,0,0,92,93,5,100,0,0,93,
  	94,5,58,0,0,94,12,1,0,0,0,95,96,5,97,0,0,96,97,5,114,0,0,97,98,5,101,
  	0,0,98,99,5,97,0,0,99,14,1,0,0,0,100,101,5,40,0,0,101,16,1,0,0,0,102,
  	103,5,41,0,0,103,18,1,0,0,0,104,105,5,45,0,0,105,106,5,62,0,0,106,20,
  	1,0,0,0,107,108,5,110,0,0,108,109,5,111,0,0,109,110,5,100,0,0,110,111,
  	5,101,0,0,111,22,1,0,0,0,112,113,5,119,0,0,113,114,5,97,0,0,114,115,5,
  	121,0,0,115,24,1,0,0,0,116,117,5,114,0,0,117,118,5,101,0,0,118,119,5,
  	108,0,0,119,120,5,97,0,0,120,121,5,116,0,0,121,122,5,105,0,0,122,123,
  	5,111,0,0,123,124,5,110,0,0,124,26,1,0,0,0,125,126,5,110,0,0,126,127,
  	5,119,0,0,127,128,5,114,0,0,128,28,1,0,0,0,129,130,5,60,0,0,130,30,1,
  	0,0,0,131,132,5,60,0,0,132,133,5,60,0,0,133,32,1,0,0,0,134,135,5,62,0,
  	0,135,34,1,0,0,0,136,137,5,62,0,0,137,138,5,62,0,0,138,36,1,0,0,0,139,
  	140,5,59,0,0,140,38,1,0,0,0,141,142,5,111,0,0,142,143,5,117,0,0,143,144,
  	5,116,0,0,144,40,1,0,0,0,145,146,5,99,0,0,146,147,5,101,0,0,147,148,5,
  	110,0,0,148,149,5,116,0,0,149,150,5,101,0,0,150,151,5,114,0,0,151,42,
  	1,0,0,0,152,153,5,109,0,0,153,154,5,101,0,0,154,155,5,116,0,0,155,156,
  	5,97,0,0,156,44,1,0,0,0,157,158,7,0,0,0,158,159,1,0,0,0,159,160,6,22,
  	0,0,160,46,1,0,0,0,161,162,5,47,0,0,162,163,5,47,0,0,163,167,1,0,0,0,
  	164,166,9,0,0,0,165,164,1,0,0,0,166,169,1,0,0,0,167,168,1,0,0,0,167,165,
  	1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,170,172,5,13,0,0,171,170,1,0,
  	0,0,171,172,1,0,0,0,172,173,1,0,0,0,173,174,5,10,0,0,174,175,1,0,0,0,
  	175,176,6,23,0,0,176,48,1,0,0,0,177,178,5,47,0,0,178,179,5,42,0,0,179,
  	183,1,0,0,0,180,182,9,0,0,0,181,180,1,0,0,0,182,185,1,0,0,0,183,184,1,
  	0,0,0,183,181,1,0,0,0,184,186,1,0,0,0,185,183,1,0,0,0,186,187,5,42,0,
  	0,187,188,5,47,0,0,188,189,1,0,0,0,189,190,6,24,0,0,190,50,1,0,0,0,191,
  	193,7,1,0,0,192,191,1,0,0,0,193,194,1,0,0,0,194,192,1,0,0,0,194,195,1,
  	0,0,0,195,202,1,0,0,0,196,198,5,46,0,0,197,199,7,1,0,0,198,197,1,0,0,
  	0,199,200,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,203,1,0,0,0,202,
  	196,1,0,0,0,202,203,1,0,0,0,203,52,1,0,0,0,204,215,5,61,0,0,205,206,5,
  	126,0,0,206,215,5,61,0,0,207,208,5,61,0,0,208,215,5,126,0,0,209,210,5,
  	33,0,0,210,215,5,61,0,0,211,212,5,33,0,0,212,215,5,126,0,0,213,215,5,
  	126,0,0,214,204,1,0,0,0,214,205,1,0,0,0,214,207,1,0,0,0,214,209,1,0,0,
  	0,214,211,1,0,0,0,214,213,1,0,0,0,215,54,1,0,0,0,216,217,5,33,0,0,217,
  	56,1,0,0,0,218,220,7,2,0,0,219,218,1,0,0,0,220,221,1,0,0,0,221,219,1,
  	0,0,0,221,222,1,0,0,0,222,58,1,0,0,0,223,229,5,39,0,0,224,228,8,3,0,0,
  	225,226,5,92,0,0,226,228,7,4,0,0,227,224,1,0,0,0,227,225,1,0,0,0,228,
  	231,1,0,0,0,229,227,1,0,0,0,229,230,1,0,0,0,230,232,1,0,0,0,231,229,1,
  	0,0,0,232,233,5,39,0,0,233,60,1,0,0,0,234,240,5,34,0,0,235,239,8,5,0,
  	0,236,237,5,92,0,0,237,239,7,4,0,0,238,235,1,0,0,0,238,236,1,0,0,0,239,
  	242,1,0,0,0,240,238,1,0,0,0,240,241,1,0,0,0,241,243,1,0,0,0,242,240,1,
  	0,0,0,243,244,5,34,0,0,244,62,1,0,0,0,245,249,7,6,0,0,246,248,7,2,0,0,
  	247,246,1,0,0,0,248,251,1,0,0,0,249,247,1,0,0,0,249,250,1,0,0,0,250,64,
  	1,0,0,0,251,249,1,0,0,0,252,253,5,46,0,0,253,254,3,63,31,0,254,66,1,0,
  	0,0,14,0,167,171,183,194,200,202,214,221,227,229,238,240,249,1,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  overpasslexerLexerStaticData = staticData.release();
}

}

OverpassLexer::OverpassLexer(CharStream *input) : Lexer(input) {
  OverpassLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *overpasslexerLexerStaticData->atn, overpasslexerLexerStaticData->decisionToDFA, overpasslexerLexerStaticData->sharedContextCache);
}

OverpassLexer::~OverpassLexer() {
  delete _interpreter;
}

std::string OverpassLexer::getGrammarFileName() const {
  return "Overpass.g4";
}

const std::vector<std::string>& OverpassLexer::getRuleNames() const {
  return overpasslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& OverpassLexer::getChannelNames() const {
  return overpasslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& OverpassLexer::getModeNames() const {
  return overpasslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& OverpassLexer::getVocabulary() const {
  return overpasslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView OverpassLexer::getSerializedATN() const {
  return overpasslexerLexerStaticData->serializedATN;
}

const atn::ATN& OverpassLexer::getATN() const {
  return *overpasslexerLexerStaticData->atn;
}




void OverpassLexer::initialize() {
  std::call_once(overpasslexerLexerOnceFlag, overpasslexerLexerInitialize);
}

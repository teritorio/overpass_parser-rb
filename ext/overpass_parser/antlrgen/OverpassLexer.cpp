
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
      "NUMBER", "OPERATOR", "NOT", "UNQUOTED_STRING", "QUOTED_STRING", "ID", 
      "DOT_ID"
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
      "OPERATOR", "NOT", "UNQUOTED_STRING", "QUOTED_STRING", "ID", "DOT_ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,32,242,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,17,1,17,
  	1,17,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,5,23,
  	164,8,23,10,23,12,23,167,9,23,1,23,3,23,170,8,23,1,23,1,23,1,23,1,23,
  	1,24,1,24,1,24,1,24,5,24,180,8,24,10,24,12,24,183,9,24,1,24,1,24,1,24,
  	1,24,1,24,1,25,4,25,191,8,25,11,25,12,25,192,1,25,1,25,4,25,197,8,25,
  	11,25,12,25,198,3,25,201,8,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,3,26,213,8,26,1,27,1,27,1,28,4,28,218,8,28,11,28,12,28,219,
  	1,29,1,29,1,29,1,29,5,29,226,8,29,10,29,12,29,229,9,29,1,29,1,29,1,30,
  	1,30,5,30,235,8,30,10,30,12,30,238,9,30,1,31,1,31,1,31,2,165,181,0,32,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,
  	26,53,27,55,28,57,29,59,30,61,31,63,32,1,0,6,3,0,9,10,12,13,32,32,1,0,
  	48,57,5,0,45,45,48,57,65,90,95,95,97,122,4,0,10,10,13,13,34,34,92,92,
  	2,0,34,34,92,92,3,0,65,90,95,95,97,122,256,0,1,1,0,0,0,0,3,1,0,0,0,0,
  	5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,
  	0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,
  	0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,
  	1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,
  	0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,
  	0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,1,65,1,0,0,0,3,67,1,0,0,0,5,76,
  	1,0,0,0,7,78,1,0,0,0,9,87,1,0,0,0,11,89,1,0,0,0,13,93,1,0,0,0,15,98,1,
  	0,0,0,17,100,1,0,0,0,19,102,1,0,0,0,21,105,1,0,0,0,23,110,1,0,0,0,25,
  	114,1,0,0,0,27,123,1,0,0,0,29,127,1,0,0,0,31,129,1,0,0,0,33,132,1,0,0,
  	0,35,134,1,0,0,0,37,137,1,0,0,0,39,139,1,0,0,0,41,143,1,0,0,0,43,150,
  	1,0,0,0,45,155,1,0,0,0,47,159,1,0,0,0,49,175,1,0,0,0,51,190,1,0,0,0,53,
  	212,1,0,0,0,55,214,1,0,0,0,57,217,1,0,0,0,59,221,1,0,0,0,61,232,1,0,0,
  	0,63,239,1,0,0,0,65,66,5,91,0,0,66,2,1,0,0,0,67,68,5,111,0,0,68,69,5,
  	117,0,0,69,70,5,116,0,0,70,71,5,58,0,0,71,72,5,106,0,0,72,73,5,115,0,
  	0,73,74,5,111,0,0,74,75,5,110,0,0,75,4,1,0,0,0,76,77,5,93,0,0,77,6,1,
  	0,0,0,78,79,5,116,0,0,79,80,5,105,0,0,80,81,5,109,0,0,81,82,5,101,0,0,
  	82,83,5,111,0,0,83,84,5,117,0,0,84,85,5,116,0,0,85,86,5,58,0,0,86,8,1,
  	0,0,0,87,88,5,44,0,0,88,10,1,0,0,0,89,90,5,105,0,0,90,91,5,100,0,0,91,
  	92,5,58,0,0,92,12,1,0,0,0,93,94,5,97,0,0,94,95,5,114,0,0,95,96,5,101,
  	0,0,96,97,5,97,0,0,97,14,1,0,0,0,98,99,5,40,0,0,99,16,1,0,0,0,100,101,
  	5,41,0,0,101,18,1,0,0,0,102,103,5,45,0,0,103,104,5,62,0,0,104,20,1,0,
  	0,0,105,106,5,110,0,0,106,107,5,111,0,0,107,108,5,100,0,0,108,109,5,101,
  	0,0,109,22,1,0,0,0,110,111,5,119,0,0,111,112,5,97,0,0,112,113,5,121,0,
  	0,113,24,1,0,0,0,114,115,5,114,0,0,115,116,5,101,0,0,116,117,5,108,0,
  	0,117,118,5,97,0,0,118,119,5,116,0,0,119,120,5,105,0,0,120,121,5,111,
  	0,0,121,122,5,110,0,0,122,26,1,0,0,0,123,124,5,110,0,0,124,125,5,119,
  	0,0,125,126,5,114,0,0,126,28,1,0,0,0,127,128,5,60,0,0,128,30,1,0,0,0,
  	129,130,5,60,0,0,130,131,5,60,0,0,131,32,1,0,0,0,132,133,5,62,0,0,133,
  	34,1,0,0,0,134,135,5,62,0,0,135,136,5,62,0,0,136,36,1,0,0,0,137,138,5,
  	59,0,0,138,38,1,0,0,0,139,140,5,111,0,0,140,141,5,117,0,0,141,142,5,116,
  	0,0,142,40,1,0,0,0,143,144,5,99,0,0,144,145,5,101,0,0,145,146,5,110,0,
  	0,146,147,5,116,0,0,147,148,5,101,0,0,148,149,5,114,0,0,149,42,1,0,0,
  	0,150,151,5,109,0,0,151,152,5,101,0,0,152,153,5,116,0,0,153,154,5,97,
  	0,0,154,44,1,0,0,0,155,156,7,0,0,0,156,157,1,0,0,0,157,158,6,22,0,0,158,
  	46,1,0,0,0,159,160,5,47,0,0,160,161,5,47,0,0,161,165,1,0,0,0,162,164,
  	9,0,0,0,163,162,1,0,0,0,164,167,1,0,0,0,165,166,1,0,0,0,165,163,1,0,0,
  	0,166,169,1,0,0,0,167,165,1,0,0,0,168,170,5,13,0,0,169,168,1,0,0,0,169,
  	170,1,0,0,0,170,171,1,0,0,0,171,172,5,10,0,0,172,173,1,0,0,0,173,174,
  	6,23,0,0,174,48,1,0,0,0,175,176,5,47,0,0,176,177,5,42,0,0,177,181,1,0,
  	0,0,178,180,9,0,0,0,179,178,1,0,0,0,180,183,1,0,0,0,181,182,1,0,0,0,181,
  	179,1,0,0,0,182,184,1,0,0,0,183,181,1,0,0,0,184,185,5,42,0,0,185,186,
  	5,47,0,0,186,187,1,0,0,0,187,188,6,24,0,0,188,50,1,0,0,0,189,191,7,1,
  	0,0,190,189,1,0,0,0,191,192,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,0,193,
  	200,1,0,0,0,194,196,5,46,0,0,195,197,7,1,0,0,196,195,1,0,0,0,197,198,
  	1,0,0,0,198,196,1,0,0,0,198,199,1,0,0,0,199,201,1,0,0,0,200,194,1,0,0,
  	0,200,201,1,0,0,0,201,52,1,0,0,0,202,213,5,61,0,0,203,204,5,126,0,0,204,
  	213,5,61,0,0,205,206,5,61,0,0,206,213,5,126,0,0,207,208,5,33,0,0,208,
  	213,5,61,0,0,209,210,5,33,0,0,210,213,5,126,0,0,211,213,5,126,0,0,212,
  	202,1,0,0,0,212,203,1,0,0,0,212,205,1,0,0,0,212,207,1,0,0,0,212,209,1,
  	0,0,0,212,211,1,0,0,0,213,54,1,0,0,0,214,215,5,33,0,0,215,56,1,0,0,0,
  	216,218,7,2,0,0,217,216,1,0,0,0,218,219,1,0,0,0,219,217,1,0,0,0,219,220,
  	1,0,0,0,220,58,1,0,0,0,221,227,5,34,0,0,222,226,8,3,0,0,223,224,5,92,
  	0,0,224,226,7,4,0,0,225,222,1,0,0,0,225,223,1,0,0,0,226,229,1,0,0,0,227,
  	225,1,0,0,0,227,228,1,0,0,0,228,230,1,0,0,0,229,227,1,0,0,0,230,231,5,
  	34,0,0,231,60,1,0,0,0,232,236,7,5,0,0,233,235,7,2,0,0,234,233,1,0,0,0,
  	235,238,1,0,0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,62,1,0,0,0,238,236,
  	1,0,0,0,239,240,5,46,0,0,240,241,3,61,30,0,241,64,1,0,0,0,12,0,165,169,
  	181,192,198,200,212,219,225,227,236,1,0,1,0
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

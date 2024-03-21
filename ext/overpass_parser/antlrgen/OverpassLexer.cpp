
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
      "FLOAT_NUMBER", "INTEGER_NUMBER", "OPERATOR", "NOT", "UNQUOTED_STRING", 
      "SIMPLE_QUOTED_STRING", "DOUBLE_QUOTED_STRING", "ID", "DOT_ID"
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
  	4,0,34,262,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,
  	9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,
  	1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,
  	1,23,1,23,1,23,5,23,168,8,23,10,23,12,23,171,9,23,1,23,3,23,174,8,23,
  	1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,5,24,184,8,24,10,24,12,24,187,
  	9,24,1,24,1,24,1,24,1,24,1,24,1,25,4,25,195,8,25,11,25,12,25,196,1,25,
  	1,25,4,25,201,8,25,11,25,12,25,202,3,25,205,8,25,1,26,4,26,208,8,26,11,
  	26,12,26,209,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,222,
  	8,27,1,28,1,28,1,29,4,29,227,8,29,11,29,12,29,228,1,30,1,30,1,30,1,30,
  	5,30,235,8,30,10,30,12,30,238,9,30,1,30,1,30,1,31,1,31,1,31,1,31,5,31,
  	246,8,31,10,31,12,31,249,9,31,1,31,1,31,1,32,1,32,5,32,255,8,32,10,32,
  	12,32,258,9,32,1,33,1,33,1,33,2,169,185,0,34,1,1,3,2,5,3,7,4,9,5,11,6,
  	13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,
  	30,61,31,63,32,65,33,67,34,1,0,6,3,0,9,10,12,13,32,32,1,0,48,57,5,0,45,
  	45,48,57,65,90,95,95,97,122,1,0,39,39,1,0,34,34,3,0,65,90,95,95,97,122,
  	279,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,
  	1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,
  	0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,
  	0,65,1,0,0,0,0,67,1,0,0,0,1,69,1,0,0,0,3,71,1,0,0,0,5,80,1,0,0,0,7,82,
  	1,0,0,0,9,91,1,0,0,0,11,93,1,0,0,0,13,97,1,0,0,0,15,102,1,0,0,0,17,104,
  	1,0,0,0,19,106,1,0,0,0,21,109,1,0,0,0,23,114,1,0,0,0,25,118,1,0,0,0,27,
  	127,1,0,0,0,29,131,1,0,0,0,31,133,1,0,0,0,33,136,1,0,0,0,35,138,1,0,0,
  	0,37,141,1,0,0,0,39,143,1,0,0,0,41,147,1,0,0,0,43,154,1,0,0,0,45,159,
  	1,0,0,0,47,163,1,0,0,0,49,179,1,0,0,0,51,194,1,0,0,0,53,207,1,0,0,0,55,
  	221,1,0,0,0,57,223,1,0,0,0,59,226,1,0,0,0,61,230,1,0,0,0,63,241,1,0,0,
  	0,65,252,1,0,0,0,67,259,1,0,0,0,69,70,5,91,0,0,70,2,1,0,0,0,71,72,5,111,
  	0,0,72,73,5,117,0,0,73,74,5,116,0,0,74,75,5,58,0,0,75,76,5,106,0,0,76,
  	77,5,115,0,0,77,78,5,111,0,0,78,79,5,110,0,0,79,4,1,0,0,0,80,81,5,93,
  	0,0,81,6,1,0,0,0,82,83,5,116,0,0,83,84,5,105,0,0,84,85,5,109,0,0,85,86,
  	5,101,0,0,86,87,5,111,0,0,87,88,5,117,0,0,88,89,5,116,0,0,89,90,5,58,
  	0,0,90,8,1,0,0,0,91,92,5,44,0,0,92,10,1,0,0,0,93,94,5,105,0,0,94,95,5,
  	100,0,0,95,96,5,58,0,0,96,12,1,0,0,0,97,98,5,97,0,0,98,99,5,114,0,0,99,
  	100,5,101,0,0,100,101,5,97,0,0,101,14,1,0,0,0,102,103,5,40,0,0,103,16,
  	1,0,0,0,104,105,5,41,0,0,105,18,1,0,0,0,106,107,5,45,0,0,107,108,5,62,
  	0,0,108,20,1,0,0,0,109,110,5,110,0,0,110,111,5,111,0,0,111,112,5,100,
  	0,0,112,113,5,101,0,0,113,22,1,0,0,0,114,115,5,119,0,0,115,116,5,97,0,
  	0,116,117,5,121,0,0,117,24,1,0,0,0,118,119,5,114,0,0,119,120,5,101,0,
  	0,120,121,5,108,0,0,121,122,5,97,0,0,122,123,5,116,0,0,123,124,5,105,
  	0,0,124,125,5,111,0,0,125,126,5,110,0,0,126,26,1,0,0,0,127,128,5,110,
  	0,0,128,129,5,119,0,0,129,130,5,114,0,0,130,28,1,0,0,0,131,132,5,60,0,
  	0,132,30,1,0,0,0,133,134,5,60,0,0,134,135,5,60,0,0,135,32,1,0,0,0,136,
  	137,5,62,0,0,137,34,1,0,0,0,138,139,5,62,0,0,139,140,5,62,0,0,140,36,
  	1,0,0,0,141,142,5,59,0,0,142,38,1,0,0,0,143,144,5,111,0,0,144,145,5,117,
  	0,0,145,146,5,116,0,0,146,40,1,0,0,0,147,148,5,99,0,0,148,149,5,101,0,
  	0,149,150,5,110,0,0,150,151,5,116,0,0,151,152,5,101,0,0,152,153,5,114,
  	0,0,153,42,1,0,0,0,154,155,5,109,0,0,155,156,5,101,0,0,156,157,5,116,
  	0,0,157,158,5,97,0,0,158,44,1,0,0,0,159,160,7,0,0,0,160,161,1,0,0,0,161,
  	162,6,22,0,0,162,46,1,0,0,0,163,164,5,47,0,0,164,165,5,47,0,0,165,169,
  	1,0,0,0,166,168,9,0,0,0,167,166,1,0,0,0,168,171,1,0,0,0,169,170,1,0,0,
  	0,169,167,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,172,174,5,13,0,0,173,
  	172,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,0,175,176,5,10,0,0,176,177,
  	1,0,0,0,177,178,6,23,0,0,178,48,1,0,0,0,179,180,5,47,0,0,180,181,5,42,
  	0,0,181,185,1,0,0,0,182,184,9,0,0,0,183,182,1,0,0,0,184,187,1,0,0,0,185,
  	186,1,0,0,0,185,183,1,0,0,0,186,188,1,0,0,0,187,185,1,0,0,0,188,189,5,
  	42,0,0,189,190,5,47,0,0,190,191,1,0,0,0,191,192,6,24,0,0,192,50,1,0,0,
  	0,193,195,7,1,0,0,194,193,1,0,0,0,195,196,1,0,0,0,196,194,1,0,0,0,196,
  	197,1,0,0,0,197,204,1,0,0,0,198,200,5,46,0,0,199,201,7,1,0,0,200,199,
  	1,0,0,0,201,202,1,0,0,0,202,200,1,0,0,0,202,203,1,0,0,0,203,205,1,0,0,
  	0,204,198,1,0,0,0,204,205,1,0,0,0,205,52,1,0,0,0,206,208,7,1,0,0,207,
  	206,1,0,0,0,208,209,1,0,0,0,209,207,1,0,0,0,209,210,1,0,0,0,210,54,1,
  	0,0,0,211,222,5,61,0,0,212,213,5,126,0,0,213,222,5,61,0,0,214,215,5,61,
  	0,0,215,222,5,126,0,0,216,217,5,33,0,0,217,222,5,61,0,0,218,219,5,33,
  	0,0,219,222,5,126,0,0,220,222,5,126,0,0,221,211,1,0,0,0,221,212,1,0,0,
  	0,221,214,1,0,0,0,221,216,1,0,0,0,221,218,1,0,0,0,221,220,1,0,0,0,222,
  	56,1,0,0,0,223,224,5,33,0,0,224,58,1,0,0,0,225,227,7,2,0,0,226,225,1,
  	0,0,0,227,228,1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,60,1,0,0,0,
  	230,236,7,3,0,0,231,235,8,3,0,0,232,233,5,92,0,0,233,235,7,4,0,0,234,
  	231,1,0,0,0,234,232,1,0,0,0,235,238,1,0,0,0,236,234,1,0,0,0,236,237,1,
  	0,0,0,237,239,1,0,0,0,238,236,1,0,0,0,239,240,7,3,0,0,240,62,1,0,0,0,
  	241,247,5,34,0,0,242,246,8,4,0,0,243,244,5,92,0,0,244,246,7,4,0,0,245,
  	242,1,0,0,0,245,243,1,0,0,0,246,249,1,0,0,0,247,245,1,0,0,0,247,248,1,
  	0,0,0,248,250,1,0,0,0,249,247,1,0,0,0,250,251,5,34,0,0,251,64,1,0,0,0,
  	252,256,7,5,0,0,253,255,7,2,0,0,254,253,1,0,0,0,255,258,1,0,0,0,256,254,
  	1,0,0,0,256,257,1,0,0,0,257,66,1,0,0,0,258,256,1,0,0,0,259,260,5,46,0,
  	0,260,261,3,65,32,0,261,68,1,0,0,0,15,0,169,173,185,196,202,204,209,221,
  	228,234,236,245,247,256,1,0,1,0
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

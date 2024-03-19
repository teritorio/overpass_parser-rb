
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
      "T__17", "WS", "SL_COMMENT", "ML_COMMENT", "NUMBER", "OPERATOR", "NOT", 
      "UNQUOTED_STRING", "QUOTED_STRING", "ID", "DOT_ID"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'['", "'out:json'", "']'", "'timeout:'", "','", "'id:'", "'area'", 
      "'('", "')'", "'->'", "'node'", "'way'", "'relation'", "'nwr'", "';'", 
      "'out'", "'center'", "'meta'", "", "", "", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "WS", "SL_COMMENT", "ML_COMMENT", "NUMBER", "OPERATOR", "NOT", 
      "UNQUOTED_STRING", "QUOTED_STRING", "ID", "DOT_ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,28,224,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,
  	1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,15,
  	1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,
  	1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,5,19,146,8,19,10,19,12,19,
  	149,9,19,1,19,3,19,152,8,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,5,
  	20,162,8,20,10,20,12,20,165,9,20,1,20,1,20,1,20,1,20,1,20,1,21,4,21,173,
  	8,21,11,21,12,21,174,1,21,1,21,4,21,179,8,21,11,21,12,21,180,3,21,183,
  	8,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,195,8,22,
  	1,23,1,23,1,24,4,24,200,8,24,11,24,12,24,201,1,25,1,25,1,25,1,25,5,25,
  	208,8,25,10,25,12,25,211,9,25,1,25,1,25,1,26,1,26,5,26,217,8,26,10,26,
  	12,26,220,9,26,1,27,1,27,1,27,2,147,163,0,28,1,1,3,2,5,3,7,4,9,5,11,6,
  	13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,1,0,6,3,0,
  	9,10,12,13,32,32,1,0,48,57,5,0,45,45,48,57,65,90,95,95,97,122,4,0,10,
  	10,13,13,34,34,92,92,2,0,34,34,92,92,3,0,65,90,95,95,97,122,238,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,
  	0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,
  	45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,
  	0,0,0,1,57,1,0,0,0,3,59,1,0,0,0,5,68,1,0,0,0,7,70,1,0,0,0,9,79,1,0,0,
  	0,11,81,1,0,0,0,13,85,1,0,0,0,15,90,1,0,0,0,17,92,1,0,0,0,19,94,1,0,0,
  	0,21,97,1,0,0,0,23,102,1,0,0,0,25,106,1,0,0,0,27,115,1,0,0,0,29,119,1,
  	0,0,0,31,121,1,0,0,0,33,125,1,0,0,0,35,132,1,0,0,0,37,137,1,0,0,0,39,
  	141,1,0,0,0,41,157,1,0,0,0,43,172,1,0,0,0,45,194,1,0,0,0,47,196,1,0,0,
  	0,49,199,1,0,0,0,51,203,1,0,0,0,53,214,1,0,0,0,55,221,1,0,0,0,57,58,5,
  	91,0,0,58,2,1,0,0,0,59,60,5,111,0,0,60,61,5,117,0,0,61,62,5,116,0,0,62,
  	63,5,58,0,0,63,64,5,106,0,0,64,65,5,115,0,0,65,66,5,111,0,0,66,67,5,110,
  	0,0,67,4,1,0,0,0,68,69,5,93,0,0,69,6,1,0,0,0,70,71,5,116,0,0,71,72,5,
  	105,0,0,72,73,5,109,0,0,73,74,5,101,0,0,74,75,5,111,0,0,75,76,5,117,0,
  	0,76,77,5,116,0,0,77,78,5,58,0,0,78,8,1,0,0,0,79,80,5,44,0,0,80,10,1,
  	0,0,0,81,82,5,105,0,0,82,83,5,100,0,0,83,84,5,58,0,0,84,12,1,0,0,0,85,
  	86,5,97,0,0,86,87,5,114,0,0,87,88,5,101,0,0,88,89,5,97,0,0,89,14,1,0,
  	0,0,90,91,5,40,0,0,91,16,1,0,0,0,92,93,5,41,0,0,93,18,1,0,0,0,94,95,5,
  	45,0,0,95,96,5,62,0,0,96,20,1,0,0,0,97,98,5,110,0,0,98,99,5,111,0,0,99,
  	100,5,100,0,0,100,101,5,101,0,0,101,22,1,0,0,0,102,103,5,119,0,0,103,
  	104,5,97,0,0,104,105,5,121,0,0,105,24,1,0,0,0,106,107,5,114,0,0,107,108,
  	5,101,0,0,108,109,5,108,0,0,109,110,5,97,0,0,110,111,5,116,0,0,111,112,
  	5,105,0,0,112,113,5,111,0,0,113,114,5,110,0,0,114,26,1,0,0,0,115,116,
  	5,110,0,0,116,117,5,119,0,0,117,118,5,114,0,0,118,28,1,0,0,0,119,120,
  	5,59,0,0,120,30,1,0,0,0,121,122,5,111,0,0,122,123,5,117,0,0,123,124,5,
  	116,0,0,124,32,1,0,0,0,125,126,5,99,0,0,126,127,5,101,0,0,127,128,5,110,
  	0,0,128,129,5,116,0,0,129,130,5,101,0,0,130,131,5,114,0,0,131,34,1,0,
  	0,0,132,133,5,109,0,0,133,134,5,101,0,0,134,135,5,116,0,0,135,136,5,97,
  	0,0,136,36,1,0,0,0,137,138,7,0,0,0,138,139,1,0,0,0,139,140,6,18,0,0,140,
  	38,1,0,0,0,141,142,5,47,0,0,142,143,5,47,0,0,143,147,1,0,0,0,144,146,
  	9,0,0,0,145,144,1,0,0,0,146,149,1,0,0,0,147,148,1,0,0,0,147,145,1,0,0,
  	0,148,151,1,0,0,0,149,147,1,0,0,0,150,152,5,13,0,0,151,150,1,0,0,0,151,
  	152,1,0,0,0,152,153,1,0,0,0,153,154,5,10,0,0,154,155,1,0,0,0,155,156,
  	6,19,0,0,156,40,1,0,0,0,157,158,5,47,0,0,158,159,5,42,0,0,159,163,1,0,
  	0,0,160,162,9,0,0,0,161,160,1,0,0,0,162,165,1,0,0,0,163,164,1,0,0,0,163,
  	161,1,0,0,0,164,166,1,0,0,0,165,163,1,0,0,0,166,167,5,42,0,0,167,168,
  	5,47,0,0,168,169,1,0,0,0,169,170,6,20,0,0,170,42,1,0,0,0,171,173,7,1,
  	0,0,172,171,1,0,0,0,173,174,1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,175,
  	182,1,0,0,0,176,178,5,46,0,0,177,179,7,1,0,0,178,177,1,0,0,0,179,180,
  	1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,183,1,0,0,0,182,176,1,0,0,
  	0,182,183,1,0,0,0,183,44,1,0,0,0,184,195,5,61,0,0,185,186,5,126,0,0,186,
  	195,5,61,0,0,187,188,5,61,0,0,188,195,5,126,0,0,189,190,5,33,0,0,190,
  	195,5,61,0,0,191,192,5,33,0,0,192,195,5,126,0,0,193,195,5,126,0,0,194,
  	184,1,0,0,0,194,185,1,0,0,0,194,187,1,0,0,0,194,189,1,0,0,0,194,191,1,
  	0,0,0,194,193,1,0,0,0,195,46,1,0,0,0,196,197,5,33,0,0,197,48,1,0,0,0,
  	198,200,7,2,0,0,199,198,1,0,0,0,200,201,1,0,0,0,201,199,1,0,0,0,201,202,
  	1,0,0,0,202,50,1,0,0,0,203,209,5,34,0,0,204,208,8,3,0,0,205,206,5,92,
  	0,0,206,208,7,4,0,0,207,204,1,0,0,0,207,205,1,0,0,0,208,211,1,0,0,0,209,
  	207,1,0,0,0,209,210,1,0,0,0,210,212,1,0,0,0,211,209,1,0,0,0,212,213,5,
  	34,0,0,213,52,1,0,0,0,214,218,7,5,0,0,215,217,7,2,0,0,216,215,1,0,0,0,
  	217,220,1,0,0,0,218,216,1,0,0,0,218,219,1,0,0,0,219,54,1,0,0,0,220,218,
  	1,0,0,0,221,222,5,46,0,0,222,223,3,53,26,0,223,56,1,0,0,0,12,0,147,151,
  	163,174,180,182,194,201,207,209,218,1,0,1,0
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

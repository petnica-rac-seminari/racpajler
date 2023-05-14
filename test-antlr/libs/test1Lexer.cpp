
// Generated from test1.g4 by ANTLR 4.10.1


#include "test1Lexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Test1LexerStaticData final {
  Test1LexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Test1LexerStaticData(const Test1LexerStaticData&) = delete;
  Test1LexerStaticData(Test1LexerStaticData&&) = delete;
  Test1LexerStaticData& operator=(const Test1LexerStaticData&) = delete;
  Test1LexerStaticData& operator=(Test1LexerStaticData&&) = delete;

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

std::once_flag test1lexerLexerOnceFlag;
Test1LexerStaticData *test1lexerLexerStaticData = nullptr;

void test1lexerLexerInitialize() {
  assert(test1lexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<Test1LexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "CLAN_VEKTORA", "VEKTOR", 
      "INT", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "';'", "'('", "')'", "'!'", "'*'", "'/'", "'+'", "'-'", "'&'", 
      "'|'", "'^'", "'=='", "'>'", "'<'", "'>='", "'<='", "'='", "','", 
      "'funk'", "'{'", "'}'", "'ret'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "CLAN_VEKTORA", "VEKTOR", "INT", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,27,147,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,
  	1,10,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,
  	1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,
  	1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,5,23,113,8,23,10,23,12,23,116,
  	9,23,1,23,1,23,1,23,1,24,1,24,3,24,123,8,24,1,24,1,24,5,24,127,8,24,10,
  	24,12,24,130,9,24,3,24,132,8,24,1,25,1,25,5,25,136,8,25,10,25,12,25,139,
  	9,25,1,26,4,26,142,8,26,11,26,12,26,143,1,26,1,26,0,0,27,1,1,3,2,5,3,
  	7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,
  	33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,1,0,
  	5,1,0,49,57,1,0,48,57,1,0,97,122,4,0,48,57,65,90,95,95,97,122,2,0,9,10,
  	32,32,152,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,
  	0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,
  	1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,
  	0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,
  	0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,
  	1,0,0,0,1,55,1,0,0,0,3,57,1,0,0,0,5,59,1,0,0,0,7,61,1,0,0,0,9,63,1,0,
  	0,0,11,65,1,0,0,0,13,67,1,0,0,0,15,69,1,0,0,0,17,71,1,0,0,0,19,73,1,0,
  	0,0,21,75,1,0,0,0,23,77,1,0,0,0,25,80,1,0,0,0,27,82,1,0,0,0,29,84,1,0,
  	0,0,31,87,1,0,0,0,33,90,1,0,0,0,35,92,1,0,0,0,37,94,1,0,0,0,39,99,1,0,
  	0,0,41,101,1,0,0,0,43,103,1,0,0,0,45,107,1,0,0,0,47,110,1,0,0,0,49,131,
  	1,0,0,0,51,133,1,0,0,0,53,141,1,0,0,0,55,56,5,59,0,0,56,2,1,0,0,0,57,
  	58,5,40,0,0,58,4,1,0,0,0,59,60,5,41,0,0,60,6,1,0,0,0,61,62,5,33,0,0,62,
  	8,1,0,0,0,63,64,5,42,0,0,64,10,1,0,0,0,65,66,5,47,0,0,66,12,1,0,0,0,67,
  	68,5,43,0,0,68,14,1,0,0,0,69,70,5,45,0,0,70,16,1,0,0,0,71,72,5,38,0,0,
  	72,18,1,0,0,0,73,74,5,124,0,0,74,20,1,0,0,0,75,76,5,94,0,0,76,22,1,0,
  	0,0,77,78,5,61,0,0,78,79,5,61,0,0,79,24,1,0,0,0,80,81,5,62,0,0,81,26,
  	1,0,0,0,82,83,5,60,0,0,83,28,1,0,0,0,84,85,5,62,0,0,85,86,5,61,0,0,86,
  	30,1,0,0,0,87,88,5,60,0,0,88,89,5,61,0,0,89,32,1,0,0,0,90,91,5,61,0,0,
  	91,34,1,0,0,0,92,93,5,44,0,0,93,36,1,0,0,0,94,95,5,102,0,0,95,96,5,117,
  	0,0,96,97,5,110,0,0,97,98,5,107,0,0,98,38,1,0,0,0,99,100,5,123,0,0,100,
  	40,1,0,0,0,101,102,5,125,0,0,102,42,1,0,0,0,103,104,5,114,0,0,104,105,
  	5,101,0,0,105,106,5,116,0,0,106,44,1,0,0,0,107,108,3,49,24,0,108,109,
  	5,44,0,0,109,46,1,0,0,0,110,114,5,91,0,0,111,113,3,45,22,0,112,111,1,
  	0,0,0,113,116,1,0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,117,1,0,0,0,
  	116,114,1,0,0,0,117,118,3,49,24,0,118,119,5,93,0,0,119,48,1,0,0,0,120,
  	132,5,48,0,0,121,123,5,45,0,0,122,121,1,0,0,0,122,123,1,0,0,0,123,124,
  	1,0,0,0,124,128,7,0,0,0,125,127,7,1,0,0,126,125,1,0,0,0,127,130,1,0,0,
  	0,128,126,1,0,0,0,128,129,1,0,0,0,129,132,1,0,0,0,130,128,1,0,0,0,131,
  	120,1,0,0,0,131,122,1,0,0,0,132,50,1,0,0,0,133,137,7,2,0,0,134,136,7,
  	3,0,0,135,134,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,
  	138,52,1,0,0,0,139,137,1,0,0,0,140,142,7,4,0,0,141,140,1,0,0,0,142,143,
  	1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,145,1,0,0,0,145,146,6,26,
  	0,0,146,54,1,0,0,0,7,0,114,122,128,131,137,143,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  test1lexerLexerStaticData = staticData.release();
}

}

test1Lexer::test1Lexer(CharStream *input) : Lexer(input) {
  test1Lexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *test1lexerLexerStaticData->atn, test1lexerLexerStaticData->decisionToDFA, test1lexerLexerStaticData->sharedContextCache);
}

test1Lexer::~test1Lexer() {
  delete _interpreter;
}

std::string test1Lexer::getGrammarFileName() const {
  return "test1.g4";
}

const std::vector<std::string>& test1Lexer::getRuleNames() const {
  return test1lexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& test1Lexer::getChannelNames() const {
  return test1lexerLexerStaticData->channelNames;
}

const std::vector<std::string>& test1Lexer::getModeNames() const {
  return test1lexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& test1Lexer::getVocabulary() const {
  return test1lexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView test1Lexer::getSerializedATN() const {
  return test1lexerLexerStaticData->serializedATN;
}

const atn::ATN& test1Lexer::getATN() const {
  return *test1lexerLexerStaticData->atn;
}




void test1Lexer::initialize() {
  std::call_once(test1lexerLexerOnceFlag, test1lexerLexerInitialize);
}
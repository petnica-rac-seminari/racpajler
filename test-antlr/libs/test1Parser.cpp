
// Generated from test1.g4 by ANTLR 4.10.1


#include "test1Visitor.h"

#include "test1Parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Test1ParserStaticData final {
  Test1ParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Test1ParserStaticData(const Test1ParserStaticData&) = delete;
  Test1ParserStaticData(Test1ParserStaticData&&) = delete;
  Test1ParserStaticData& operator=(const Test1ParserStaticData&) = delete;
  Test1ParserStaticData& operator=(Test1ParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag test1ParserOnceFlag;
Test1ParserStaticData *test1ParserStaticData = nullptr;

void test1ParserInitialize() {
  assert(test1ParserStaticData == nullptr);
  auto staticData = std::make_unique<Test1ParserStaticData>(
    std::vector<std::string>{
      "program", "program_line", "expression", "declare", "func_call", "func", 
      "func_line", "ret"
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
  	4,1,27,118,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,4,0,18,8,0,11,0,12,0,19,1,0,4,0,23,8,0,11,0,12,0,24,1,0,1,0,
  	3,0,29,8,0,1,1,1,1,3,1,33,8,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,3,2,47,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,
  	2,61,8,2,10,2,12,2,64,9,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,5,4,75,
  	8,4,10,4,12,4,78,9,4,3,4,80,8,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,90,
  	8,5,10,5,12,5,93,9,5,3,5,95,8,5,1,5,1,5,1,5,5,5,100,8,5,10,5,12,5,103,
  	9,5,1,5,1,5,1,5,1,6,1,6,3,6,110,8,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,0,1,4,
  	8,0,2,4,6,8,10,12,14,0,5,1,0,5,6,1,0,7,8,1,0,9,11,1,0,12,16,1,0,25,26,
  	127,0,28,1,0,0,0,2,32,1,0,0,0,4,46,1,0,0,0,6,65,1,0,0,0,8,69,1,0,0,0,
  	10,83,1,0,0,0,12,109,1,0,0,0,14,113,1,0,0,0,16,18,3,10,5,0,17,16,1,0,
  	0,0,18,19,1,0,0,0,19,17,1,0,0,0,19,20,1,0,0,0,20,29,1,0,0,0,21,23,3,2,
  	1,0,22,21,1,0,0,0,23,24,1,0,0,0,24,22,1,0,0,0,24,25,1,0,0,0,25,26,1,0,
  	0,0,26,27,5,0,0,1,27,29,1,0,0,0,28,17,1,0,0,0,28,22,1,0,0,0,29,1,1,0,
  	0,0,30,33,3,6,3,0,31,33,3,4,2,0,32,30,1,0,0,0,32,31,1,0,0,0,33,34,1,0,
  	0,0,34,35,5,1,0,0,35,3,1,0,0,0,36,37,6,2,-1,0,37,38,5,2,0,0,38,39,3,4,
  	2,0,39,40,5,3,0,0,40,47,1,0,0,0,41,42,5,4,0,0,42,47,3,4,2,8,43,47,3,8,
  	4,0,44,47,5,26,0,0,45,47,5,25,0,0,46,36,1,0,0,0,46,41,1,0,0,0,46,43,1,
  	0,0,0,46,44,1,0,0,0,46,45,1,0,0,0,47,62,1,0,0,0,48,49,10,7,0,0,49,50,
  	7,0,0,0,50,61,3,4,2,8,51,52,10,6,0,0,52,53,7,1,0,0,53,61,3,4,2,7,54,55,
  	10,5,0,0,55,56,7,2,0,0,56,61,3,4,2,6,57,58,10,4,0,0,58,59,7,3,0,0,59,
  	61,3,4,2,5,60,48,1,0,0,0,60,51,1,0,0,0,60,54,1,0,0,0,60,57,1,0,0,0,61,
  	64,1,0,0,0,62,60,1,0,0,0,62,63,1,0,0,0,63,5,1,0,0,0,64,62,1,0,0,0,65,
  	66,5,26,0,0,66,67,5,17,0,0,67,68,3,4,2,0,68,7,1,0,0,0,69,70,5,26,0,0,
  	70,79,5,2,0,0,71,76,7,4,0,0,72,73,5,18,0,0,73,75,7,4,0,0,74,72,1,0,0,
  	0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,80,1,0,0,0,78,76,1,0,0,
  	0,79,71,1,0,0,0,79,80,1,0,0,0,80,81,1,0,0,0,81,82,5,3,0,0,82,9,1,0,0,
  	0,83,84,5,19,0,0,84,85,5,26,0,0,85,94,5,2,0,0,86,91,5,26,0,0,87,88,5,
  	18,0,0,88,90,5,26,0,0,89,87,1,0,0,0,90,93,1,0,0,0,91,89,1,0,0,0,91,92,
  	1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,94,86,1,0,0,0,94,95,1,0,0,0,95,96,
  	1,0,0,0,96,97,5,3,0,0,97,101,5,20,0,0,98,100,3,12,6,0,99,98,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,101,1,
  	0,0,0,104,105,3,14,7,0,105,106,5,21,0,0,106,11,1,0,0,0,107,110,3,6,3,
  	0,108,110,3,4,2,0,109,107,1,0,0,0,109,108,1,0,0,0,110,111,1,0,0,0,111,
  	112,5,1,0,0,112,13,1,0,0,0,113,114,5,22,0,0,114,115,3,4,2,0,115,116,5,
  	1,0,0,116,15,1,0,0,0,13,19,24,28,32,46,60,62,76,79,91,94,101,109
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  test1ParserStaticData = staticData.release();
}

}

test1Parser::test1Parser(TokenStream *input) : test1Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

test1Parser::test1Parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  test1Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *test1ParserStaticData->atn, test1ParserStaticData->decisionToDFA, test1ParserStaticData->sharedContextCache, options);
}

test1Parser::~test1Parser() {
  delete _interpreter;
}

const atn::ATN& test1Parser::getATN() const {
  return *test1ParserStaticData->atn;
}

std::string test1Parser::getGrammarFileName() const {
  return "test1.g4";
}

const std::vector<std::string>& test1Parser::getRuleNames() const {
  return test1ParserStaticData->ruleNames;
}

const dfa::Vocabulary& test1Parser::getVocabulary() const {
  return test1ParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView test1Parser::getSerializedATN() const {
  return test1ParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

test1Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<test1Parser::FuncContext *> test1Parser::ProgramContext::func() {
  return getRuleContexts<test1Parser::FuncContext>();
}

test1Parser::FuncContext* test1Parser::ProgramContext::func(size_t i) {
  return getRuleContext<test1Parser::FuncContext>(i);
}

tree::TerminalNode* test1Parser::ProgramContext::EOF() {
  return getToken(test1Parser::EOF, 0);
}

std::vector<test1Parser::Program_lineContext *> test1Parser::ProgramContext::program_line() {
  return getRuleContexts<test1Parser::Program_lineContext>();
}

test1Parser::Program_lineContext* test1Parser::ProgramContext::program_line(size_t i) {
  return getRuleContext<test1Parser::Program_lineContext>(i);
}


size_t test1Parser::ProgramContext::getRuleIndex() const {
  return test1Parser::RuleProgram;
}


std::any test1Parser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

test1Parser::ProgramContext* test1Parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, test1Parser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(28);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case test1Parser::T__18: {
        enterOuterAlt(_localctx, 1);
        setState(17); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(16);
          func();
          setState(19); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == test1Parser::T__18);
        break;
      }

      case test1Parser::T__1:
      case test1Parser::T__3:
      case test1Parser::INT:
      case test1Parser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(22); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(21);
          program_line();
          setState(24); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << test1Parser::T__1)
          | (1ULL << test1Parser::T__3)
          | (1ULL << test1Parser::INT)
          | (1ULL << test1Parser::ID))) != 0));
        setState(26);
        match(test1Parser::EOF);
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

//----------------- Program_lineContext ------------------------------------------------------------------

test1Parser::Program_lineContext::Program_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

test1Parser::DeclareContext* test1Parser::Program_lineContext::declare() {
  return getRuleContext<test1Parser::DeclareContext>(0);
}

test1Parser::ExpressionContext* test1Parser::Program_lineContext::expression() {
  return getRuleContext<test1Parser::ExpressionContext>(0);
}


size_t test1Parser::Program_lineContext::getRuleIndex() const {
  return test1Parser::RuleProgram_line;
}


std::any test1Parser::Program_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitProgram_line(this);
  else
    return visitor->visitChildren(this);
}

test1Parser::Program_lineContext* test1Parser::program_line() {
  Program_lineContext *_localctx = _tracker.createInstance<Program_lineContext>(_ctx, getState());
  enterRule(_localctx, 2, test1Parser::RuleProgram_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(30);
      declare();
      break;
    }

    case 2: {
      setState(31);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(34);
    match(test1Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

test1Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t test1Parser::ExpressionContext::getRuleIndex() const {
  return test1Parser::RuleExpression;
}

void test1Parser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunkPozivContext ------------------------------------------------------------------

test1Parser::Func_callContext* test1Parser::FunkPozivContext::func_call() {
  return getRuleContext<test1Parser::Func_callContext>(0);
}

test1Parser::FunkPozivContext::FunkPozivContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any test1Parser::FunkPozivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitFunkPoziv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PromIzrazContext ------------------------------------------------------------------

tree::TerminalNode* test1Parser::PromIzrazContext::ID() {
  return getToken(test1Parser::ID, 0);
}

test1Parser::PromIzrazContext::PromIzrazContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any test1Parser::PromIzrazContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitPromIzraz(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntIzrazContext ------------------------------------------------------------------

tree::TerminalNode* test1Parser::IntIzrazContext::INT() {
  return getToken(test1Parser::INT, 0);
}

test1Parser::IntIzrazContext::IntIzrazContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any test1Parser::IntIzrazContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitIntIzraz(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ZagradeIzrazContext ------------------------------------------------------------------

test1Parser::ExpressionContext* test1Parser::ZagradeIzrazContext::expression() {
  return getRuleContext<test1Parser::ExpressionContext>(0);
}

test1Parser::ZagradeIzrazContext::ZagradeIzrazContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any test1Parser::ZagradeIzrazContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitZagradeIzraz(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpIzrazContext ------------------------------------------------------------------

std::vector<test1Parser::ExpressionContext *> test1Parser::OpIzrazContext::expression() {
  return getRuleContexts<test1Parser::ExpressionContext>();
}

test1Parser::ExpressionContext* test1Parser::OpIzrazContext::expression(size_t i) {
  return getRuleContext<test1Parser::ExpressionContext>(i);
}

test1Parser::OpIzrazContext::OpIzrazContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any test1Parser::OpIzrazContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitOpIzraz(this);
  else
    return visitor->visitChildren(this);
}

test1Parser::ExpressionContext* test1Parser::expression() {
   return expression(0);
}

test1Parser::ExpressionContext* test1Parser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  test1Parser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  test1Parser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, test1Parser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ZagradeIzrazContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(37);
      match(test1Parser::T__1);
      setState(38);
      expression(0);
      setState(39);
      match(test1Parser::T__2);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<OpIzrazContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(41);
      antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = match(test1Parser::T__3);
      setState(42);
      expression(8);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FunkPozivContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(43);
      func_call();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PromIzrazContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(44);
      match(test1Parser::ID);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IntIzrazContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(45);
      match(test1Parser::INT);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(62);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(60);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OpIzrazContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(48);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(49);
          antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == test1Parser::T__4

          || _la == test1Parser::T__5)) {
            antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(50);
          antlrcpp::downCast<OpIzrazContext *>(_localctx)->right = expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OpIzrazContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(51);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(52);
          antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == test1Parser::T__6

          || _la == test1Parser::T__7)) {
            antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(53);
          antlrcpp::downCast<OpIzrazContext *>(_localctx)->right = expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OpIzrazContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(54);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(55);
          antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << test1Parser::T__8)
            | (1ULL << test1Parser::T__9)
            | (1ULL << test1Parser::T__10))) != 0))) {
            antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(56);
          antlrcpp::downCast<OpIzrazContext *>(_localctx)->right = expression(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OpIzrazContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(57);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(58);
          antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << test1Parser::T__11)
            | (1ULL << test1Parser::T__12)
            | (1ULL << test1Parser::T__13)
            | (1ULL << test1Parser::T__14)
            | (1ULL << test1Parser::T__15))) != 0))) {
            antlrcpp::downCast<OpIzrazContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(59);
          antlrcpp::downCast<OpIzrazContext *>(_localctx)->right = expression(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(64);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclareContext ------------------------------------------------------------------

test1Parser::DeclareContext::DeclareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* test1Parser::DeclareContext::ID() {
  return getToken(test1Parser::ID, 0);
}

test1Parser::ExpressionContext* test1Parser::DeclareContext::expression() {
  return getRuleContext<test1Parser::ExpressionContext>(0);
}


size_t test1Parser::DeclareContext::getRuleIndex() const {
  return test1Parser::RuleDeclare;
}


std::any test1Parser::DeclareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitDeclare(this);
  else
    return visitor->visitChildren(this);
}

test1Parser::DeclareContext* test1Parser::declare() {
  DeclareContext *_localctx = _tracker.createInstance<DeclareContext>(_ctx, getState());
  enterRule(_localctx, 6, test1Parser::RuleDeclare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    antlrcpp::downCast<DeclareContext *>(_localctx)->left = match(test1Parser::ID);
    setState(66);
    antlrcpp::downCast<DeclareContext *>(_localctx)->op = match(test1Parser::T__16);
    setState(67);
    antlrcpp::downCast<DeclareContext *>(_localctx)->right = expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

test1Parser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> test1Parser::Func_callContext::ID() {
  return getTokens(test1Parser::ID);
}

tree::TerminalNode* test1Parser::Func_callContext::ID(size_t i) {
  return getToken(test1Parser::ID, i);
}

std::vector<tree::TerminalNode *> test1Parser::Func_callContext::INT() {
  return getTokens(test1Parser::INT);
}

tree::TerminalNode* test1Parser::Func_callContext::INT(size_t i) {
  return getToken(test1Parser::INT, i);
}


size_t test1Parser::Func_callContext::getRuleIndex() const {
  return test1Parser::RuleFunc_call;
}


std::any test1Parser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}

test1Parser::Func_callContext* test1Parser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 8, test1Parser::RuleFunc_call);
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
    setState(69);
    match(test1Parser::ID);
    setState(70);
    match(test1Parser::T__1);
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == test1Parser::INT

    || _la == test1Parser::ID) {
      setState(71);
      _la = _input->LA(1);
      if (!(_la == test1Parser::INT

      || _la == test1Parser::ID)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == test1Parser::T__17) {
        setState(72);
        match(test1Parser::T__17);
        setState(73);
        _la = _input->LA(1);
        if (!(_la == test1Parser::INT

        || _la == test1Parser::ID)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(78);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(81);
    match(test1Parser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

test1Parser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> test1Parser::FuncContext::ID() {
  return getTokens(test1Parser::ID);
}

tree::TerminalNode* test1Parser::FuncContext::ID(size_t i) {
  return getToken(test1Parser::ID, i);
}

test1Parser::RetContext* test1Parser::FuncContext::ret() {
  return getRuleContext<test1Parser::RetContext>(0);
}

std::vector<test1Parser::Func_lineContext *> test1Parser::FuncContext::func_line() {
  return getRuleContexts<test1Parser::Func_lineContext>();
}

test1Parser::Func_lineContext* test1Parser::FuncContext::func_line(size_t i) {
  return getRuleContext<test1Parser::Func_lineContext>(i);
}


size_t test1Parser::FuncContext::getRuleIndex() const {
  return test1Parser::RuleFunc;
}


std::any test1Parser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

test1Parser::FuncContext* test1Parser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 10, test1Parser::RuleFunc);
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
    setState(83);
    match(test1Parser::T__18);
    setState(84);
    match(test1Parser::ID);
    setState(85);
    match(test1Parser::T__1);
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == test1Parser::ID) {
      setState(86);
      match(test1Parser::ID);
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == test1Parser::T__17) {
        setState(87);
        match(test1Parser::T__17);
        setState(88);
        match(test1Parser::ID);
        setState(93);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(96);
    match(test1Parser::T__2);
    setState(97);
    match(test1Parser::T__19);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << test1Parser::T__1)
      | (1ULL << test1Parser::T__3)
      | (1ULL << test1Parser::INT)
      | (1ULL << test1Parser::ID))) != 0)) {
      setState(98);
      func_line();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
    ret();
    setState(105);
    match(test1Parser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_lineContext ------------------------------------------------------------------

test1Parser::Func_lineContext::Func_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

test1Parser::DeclareContext* test1Parser::Func_lineContext::declare() {
  return getRuleContext<test1Parser::DeclareContext>(0);
}

test1Parser::ExpressionContext* test1Parser::Func_lineContext::expression() {
  return getRuleContext<test1Parser::ExpressionContext>(0);
}


size_t test1Parser::Func_lineContext::getRuleIndex() const {
  return test1Parser::RuleFunc_line;
}


std::any test1Parser::Func_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitFunc_line(this);
  else
    return visitor->visitChildren(this);
}

test1Parser::Func_lineContext* test1Parser::func_line() {
  Func_lineContext *_localctx = _tracker.createInstance<Func_lineContext>(_ctx, getState());
  enterRule(_localctx, 12, test1Parser::RuleFunc_line);

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
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(107);
      declare();
      break;
    }

    case 2: {
      setState(108);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(111);
    match(test1Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

test1Parser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

test1Parser::ExpressionContext* test1Parser::RetContext::expression() {
  return getRuleContext<test1Parser::ExpressionContext>(0);
}


size_t test1Parser::RetContext::getRuleIndex() const {
  return test1Parser::RuleRet;
}


std::any test1Parser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<test1Visitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

test1Parser::RetContext* test1Parser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 14, test1Parser::RuleRet);

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
    match(test1Parser::T__21);
    setState(114);
    expression(0);
    setState(115);
    match(test1Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool test1Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool test1Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void test1Parser::initialize() {
  std::call_once(test1ParserOnceFlag, test1ParserInitialize);
}

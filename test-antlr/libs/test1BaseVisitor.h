
// Generated from test1.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "test1Visitor.h"


/**
 * This class provides an empty implementation of test1Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  test1BaseVisitor : public test1Visitor {
public:

  virtual std::any visitProgram(test1Parser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram_line(test1Parser::Program_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunkPoziv(test1Parser::FunkPozivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPromIzraz(test1Parser::PromIzrazContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntIzraz(test1Parser::IntIzrazContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZagradeIzraz(test1Parser::ZagradeIzrazContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpIzraz(test1Parser::OpIzrazContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare(test1Parser::DeclareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_call(test1Parser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(test1Parser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_line(test1Parser::Func_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRet(test1Parser::RetContext *ctx) override {
    return visitChildren(ctx);
  }


};


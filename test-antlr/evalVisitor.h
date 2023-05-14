
// Generated from test1.g4 by ANTLR 4.10.1

#pragma once

#include "antlr4-runtime.h"
#include "./libs/test1BaseVisitor.h"

/**
 * This class provides an empty implementation of test1Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class evalVisitor : public test1BaseVisitor
{
public:
  std::vector<int> evalStack;
  std::vector<std::string> promStack;
  std::unordered_map<std::string, int> promeljiveMap;

  virtual std::any visitProgram(test1Parser::ProgramContext *ctx) override
  {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram_line(test1Parser::Program_lineContext *ctx) override
  {
    return visitChildren(ctx);
  }

  virtual std::any visitFunkPoziv(test1Parser::FunkPozivContext *ctx) override
  {
    return visitChildren(ctx);
  }

  virtual std::any visitPromIzraz(test1Parser::PromIzrazContext *ctx) override
  {
    std::string promenljiva = ctx->getText();
    promStack.push_back(promenljiva);
    return visitChildren(ctx);
  }

  virtual std::any visitIntIzraz(test1Parser::IntIzrazContext *ctx) override
  {
    std::string broj = ctx->getText();
    evalStack.push_back(std::stoi(broj));
    return visitChildren(ctx);
  }

  virtual std::any visitZagradeIzraz(test1Parser::ZagradeIzrazContext *ctx) override
  {
    return visitChildren(ctx);
  }

  virtual std::any visitOpIzraz(test1Parser::OpIzrazContext *ctx) override
  {
    this->visit(ctx->left);
    this->visit(ctx->right);
    int rhs = evalStack.back();
    evalStack.pop_back();
    int lhs = evalStack.back();
    evalStack.pop_back();
    switch (ctx->op->getText()[0])
    {
    case '+':
      evalStack.push_back(lhs + rhs);
      break;
    case '*':
      evalStack.push_back(lhs * rhs);
      break;
    case '/':
      evalStack.push_back(lhs / rhs);
      break;
    case '-':
      evalStack.push_back(lhs - rhs);
      break;

    default:
      break;
    }

    return lhs + rhs; // ovo nista ne radi, samo da ne visituje decu opet
    // return visitChildren(ctx);
  }

  virtual std::any visitDeclare(test1Parser::DeclareContext *ctx) override
  {
    this->visit(ctx->right);
    int rhs = evalStack.back();
    evalStack.pop_back();
    std::string lhs = ctx->left->getText();

    promeljiveMap.insert({lhs, rhs});
    std::cout << lhs + " vrednost je: " + std::to_string(rhs) << std::endl;
    return rhs;
  }

  virtual std::any visitFunc_call(test1Parser::Func_callContext *ctx) override
  {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(test1Parser::FuncContext *ctx) override
  {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_line(test1Parser::Func_lineContext *ctx) override
  {
    return visitChildren(ctx);
  }

  virtual std::any visitRet(test1Parser::RetContext *ctx) override
  {
    return visitChildren(ctx);
  }
};

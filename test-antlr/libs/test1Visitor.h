
// Generated from test1.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "test1Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by test1Parser.
 */
class  test1Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by test1Parser.
   */
    virtual std::any visitProgram(test1Parser::ProgramContext *context) = 0;

    virtual std::any visitProgram_line(test1Parser::Program_lineContext *context) = 0;

    virtual std::any visitFunkPoziv(test1Parser::FunkPozivContext *context) = 0;

    virtual std::any visitPromIzraz(test1Parser::PromIzrazContext *context) = 0;

    virtual std::any visitIntIzraz(test1Parser::IntIzrazContext *context) = 0;

    virtual std::any visitZagradeIzraz(test1Parser::ZagradeIzrazContext *context) = 0;

    virtual std::any visitOpIzraz(test1Parser::OpIzrazContext *context) = 0;

    virtual std::any visitDeclare(test1Parser::DeclareContext *context) = 0;

    virtual std::any visitFunc_call(test1Parser::Func_callContext *context) = 0;

    virtual std::any visitFunc(test1Parser::FuncContext *context) = 0;

    virtual std::any visitFunc_line(test1Parser::Func_lineContext *context) = 0;

    virtual std::any visitRet(test1Parser::RetContext *context) = 0;


};


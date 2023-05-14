#include <iostream>

#include "libs/test1Lexer.h"
#include "libs/test1Parser.h"
#include "evalVisitor.h"

#pragma execution_character_set("utf-8")

using namespace antlr4;

int main(int argc, const char *argv[])
{

  ANTLRInputStream input("a=5*4;a/2;");
  test1Lexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  test1Parser parser(&tokens);
  tree::ParseTree *tree = parser.program();

  auto s = tree->toStringTree(&parser);
  std::cout << "Parse Tree: " << s << std::endl;

  evalVisitor visitor;
  visitor.visit(tree);
  std::cout << visitor.evalStack.front() << std::endl;
  std::cout << visitor.evalStack.end() - visitor.evalStack.begin() << std::endl;

  return 0;
}

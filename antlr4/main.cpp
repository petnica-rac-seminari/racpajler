#include <iostream>

#include "libs/test1Lexer.h"
#include "libs/test1Parser.h"
#include "evalVisitor.h"

#pragma execution_character_set("utf-8")

using namespace antlr4;

int main(int argc, const char *argv[])
{

  ANTLRInputStream input("((1+2)*(3+4))*((5+6)*(7+8));");
  test1Lexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  test1Parser parser(&tokens);
  tree::ParseTree *tree = parser.program();

  auto s = tree->toStringTree(&parser);
  std::cout << "Parse Tree: " << s << std::endl;

  evalVisitor visitor;
  visitor.visit(tree);
  for (size_t i = 0; i < visitor.linijaStack.end() - visitor.linijaStack.begin(); i++)
  {
    std::cout << visitor.linijaStack.at(i) << std::endl;
  }

  return 0;
}

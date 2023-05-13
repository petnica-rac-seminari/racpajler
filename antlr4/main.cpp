#include <iostream>

#include "mmiddLexer.h"
#include "mmiddParser.h"

#include <Windows.h>

#pragma execution_character_set("utf-8")

using namespace antlrcpptest;
using namespace antlr4;

int main(int argc, const char * argv[]) {

  ANTLRInputStream input("a = b + \"c\";(((x * d))) * e + f; a + (x * (y ? 0 : 1) + z);");
  TLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  TParser parser(&tokens);
  tree::ParseTree *tree = parser.main();

  auto s = tree->toStringTree(&parser);
  std::cout << "Parse Tree: " << s << std::endl;

  return 0;
}

#include "io.h"

int main()
{
  // read number from user input
  int a{readNumber()};
  int b{readNumber()};
  
  // write anseer to console
  writeAnswer(a+b);

  return 0;
}
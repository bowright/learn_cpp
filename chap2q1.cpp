#include <iostream>

int readNumber()
{
  std::cout << "Input an integer:\n";
  int x{};
  std::cin >> x;
  return x;
}

void writeAnswer(int x)
{
  std::cout << "The sum is:" << x << '\n';
}

int main()
{
  // read number from user input
  int a{};
  a = readNumber();
  int b{};
  b = readNumber();
  
  // write anseer to console
  int c{};
  c = a + b;
  writeAnswer(c);

  return 0;
}

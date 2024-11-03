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



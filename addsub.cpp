#include <iostream>

int main() 
{
  std::cout << "Enter first integer:";
  int a {};
  std::cin >> a;
  std::cout << "Enter second integer:";
  int b {};
  std::cin >> b;
  std::cout << a << " + " << b << " = " << a+b << '\n';
  std::cout << a << " - " << b << " = " << a - b << '\n';
  return 0;
}

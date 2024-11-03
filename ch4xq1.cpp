#include <iostream>

double calc(double a, double b, char op)
{
  double result{};

  if (op == '+')
    result = a + b;
  else if (op == '-')
    result = a - b;
  else if (op == '*')
    result = a * b;
  else if (op == '/')
    result = a / b;
  
  return result;

}
int main()
{
  std::cout << "Enter a double value: ";
  double a{};
  std::cin >> a;

  std::cout << "Enter a double value: ";
  double b{};
  std::cin >> b;

  std::cout << "Enter +, -, * or /: ";
  char op{};
  std::cin >> op;

  std::cout << a << " " << op << " " << b << " = " << calc(a, b, op) << '\n';

  return 0;
}

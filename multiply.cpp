#include <iostream>

int main()
{
  // Get input
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  std::cout << "Double " << x << " is: " << x * 2 << '\n';
  std::cout << "Triple " << x << " is: " << x * 3 << '\n';
  return 0;
}

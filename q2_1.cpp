#include <iostream>

int get_int(int x)
{
  return x;
}

int main()
{
  std::cout << "Enter a single character:";
  char a{};
  std::cin >> a;
  std::cout << "You entered \'" << static_cast<char>(a) << "\', which has ASCII code " << get_int(a) << '\n';
  
  return 0;
}

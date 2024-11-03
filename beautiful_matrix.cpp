#include <iostream>

int main()
{
  int x{};
  int x1{};
  int y1{};

  for (int i{0}; i < 5; ++i)
  {
    for (int j{0}; j < 5; ++j)
    {
      std::cin >> x;
      if (x == 1)
      {
        x1 = i+1;
        y1 = j+1;
        std::cout << std::abs(x1-3) + std::abs(y1-3) << '\n';
        return 0;
      }

    }
  }
  return 0;
}

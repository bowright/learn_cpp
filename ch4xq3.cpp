#include <iostream>

int main()
{
  std::cout << "Enter the height of the tower in meters: ";
  double ht{};
  std::cin >> ht;

  double hb{ht};
  for (int i{0}; i <= 5; ++i)
  {
    // calculate height of ball
    hb = ht - 9.8 * i * i / 2;
    if (hb > 0)
    {
      std::cout << "At " << i << " seconds, the ball is at height: " << hb << " meters\n";
    }
    else {
      std::cout << "At " << i << " seconds, the ball if on the ground.\n";
    }
    
  };
  return 0;
}

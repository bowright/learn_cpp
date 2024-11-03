#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  std::string s{};
  std::cin >> s;
  std::string s2{};
  for (int i{0}; i<s.size(); ++i)
  {
    if (s[i] != '+')
      s2.push_back(s[i]);
  }

  //std::cout << s2;
  std::sort(s2.begin(), s2.end());
  //std::cout << s2;

  for (int i{0}; i<s2.size(); ++i)
  {
    std::cout << s2[i];
    if (i== s2.size()-1)
      break;
    std::cout << '+';
  }
  //std::getline(std::cin, s, '+');
  //std::cout << s;

  // sort v

  return 0;
}

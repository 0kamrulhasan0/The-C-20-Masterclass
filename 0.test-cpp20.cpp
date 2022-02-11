#include<iostream>


consteval int get_value()
{
  return 3;
}

int main()
{
  /* This program is used for varifying if C++20 Standard is available or not */
  auto result = (10 <=> 20) > 0;
  std::cout << result << std::endl;

  constexpr int value = get_value();
  std::cout << "value: " << value << std::endl;
  return 0;
}

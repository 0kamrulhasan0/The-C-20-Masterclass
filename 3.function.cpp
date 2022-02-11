
#include<iostream>

int add(int first_number, int second_number)
{
  return first_number + second_number;
}

int main()
{
  int first_number {4};
  int second_number {5};
  int result_1 = add(first_number, second_number);
  int result_2 = add(9, 3);

  std::cout << "Hello, World" << std::endl;
  std::cout << "First Result:" << result_1 << std::endl;
  std::cout << "Second Result:" << result_2 << std::endl;
  std::cout << "Third Result:" << add(2, 9) << std::endl;

  return 0;
}

#include<iostream>

int main()
{
  int elephant_count;
  // Assignment Initialization
  int lion_count = 0;
  int dog_count = 10;
  int cat_count = 24;

  int domesticated_animals = dog_count+cat_count;
  
  // Printing uninitialized variable casues warning and results into garbage. 
  std::cout << elephant_count << std::endl;
  std::cout << lion_count << std::endl;
  std::cout << dog_count << std::endl;
  std::cout << domesticated_animals << std::endl;
  
  // Converts 2.3 to 2 implicitly and shows warning. 
  int int_variable = 2.3;
  std::cout << int_variable << std::endl;

  return 0;
}

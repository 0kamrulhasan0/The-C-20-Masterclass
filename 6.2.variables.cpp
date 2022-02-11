#include<iostream>

int main()
{
  //Variable Braced Initialization
  int lion_count {};
  int dog_count {10};
  int cat_count {24};

  int domesticated_animals { dog_count+cat_count };
  
  // Printing uninitialized variable casues warning and results into garbage. 
  std::cout << lion_count << std::endl;
  std::cout << dog_count << std::endl;
  std::cout << domesticated_animals << std::endl;
 
  // Causes Compilation Error
  /*
  int int_variable {2.3};
  std::cout << int_variable << std::endl;
  */
  return 0;
}

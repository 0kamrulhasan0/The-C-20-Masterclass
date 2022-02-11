
#include<iostream>

int main()
{
  //Functional Variable Initialization with "() Braces":
  /* int lion_count (); initialization with 0 won't work with () Braces */
  int dog_count (10);
  int cat_count (24);

  int domesticated_animals ( dog_count+cat_count );
  
  std::cout << dog_count << std::endl;
  std::cout << domesticated_animals << std::endl;
 
  // Converts 2.3 to 2 implicitly and shows warning. 
  int int_variable (2.3);
  std::cout << int_variable << std::endl;

  return 0;
}

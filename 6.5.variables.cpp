
#include<iostream>

int main()
{
  // Different Integer Modifier
  std::cout << "short int: " << sizeof(short int)<< " Byte" << std::endl;
  std::cout << "short: " << sizeof(short)<< " Byte" << std::endl;

  std::cout << "int: " << sizeof(int)<< " Byte" << std::endl;

  std::cout << "long int: " << sizeof(long int)<< " Byte" << std::endl;
  std::cout << "long: " << sizeof(long)<< " Byte" << std::endl;


  std::cout << "double: " << sizeof(double)<< " Byte" << std::endl;
  std::cout << "long double: " << sizeof(long double)<< " Byte" << std::endl;

  return 0;
}

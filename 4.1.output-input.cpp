#include<iostream>
#include<string>

int main()
{
  std::string name;
  int age;

  std::cout << "Enter Your Name (without space):" << std::endl;
  std::cin >> name ;
  std::cout << "Enter Your Age:" << std::endl;
  std::cin >> age;
  
  std::cout << "Your Name is " << name << " and Your Age is " << age << std::endl;
  return 0;
}

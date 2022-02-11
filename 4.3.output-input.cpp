#include<iostream>
#include<string>

int main()
{
  std::string name;
  int age;

  std::cout << "Enter Your Name (with space):" << std::endl;
  std::getline(std::cin, name);
  std::cout << "Enter Your Age:" << std::endl;
  std::cin >> age;
  
  std::cout << "Your Name is " << name << std::endl 
            << "Your Age is " << age << std::endl;
  return 0;
}

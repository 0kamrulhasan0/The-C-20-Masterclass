#include<iostream>
#include<string>

int main()
{
  std::string name;
  int age;

  std::cout << "Enter Your Name (without space) and Age:" << std::endl;
  // Pressing <Enter> or <Space> causes it to take Age input
  std::cin >> name >> age ;
  
  std::cout << "Your Name is " << name << " and Your Age is " << age << std::endl;
  return 0;
}

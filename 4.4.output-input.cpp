#include<iostream>
#include<string>

int main()
{
  std::string name;
  int age;

  std::cout << "Enter Your Name (with space) and Age:" << std::endl;
  // Pressing <Space> causes continuing to take Name input
  // Pressing <Enter> causes age to take Age input
  std::getline(std::cin, name);
  std::cin >> age;
  
  std::cout << "Your Name is " << name << std::endl 
            << "Your Age is " << age << std::endl;
  return 0;
}

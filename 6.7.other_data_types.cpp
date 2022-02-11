#include<iostream>

int main()
{
  //Booleans
  bool red_light {false};
  bool blue_light {true};

  if (red_light) {
    std::cout << "Red Light: " << red_light << std::endl;
  } else if (blue_light != false) {
    std::cout << "Blue Light: " << blue_light << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Red Light: " << red_light << std::endl;
  std::cout << "Blue Light: " << blue_light << std::endl;

  std::cout << std::boolalpha;
  std::cout << std::endl;
  std::cout << "Red Light: " << red_light << std::endl;
  std::cout << "Blue Light: " << blue_light << std::endl;


  //Charaters
  std::cout << std::endl;
  char ASCII_A_1 {'A'}; 
  std::cout << ASCII_A_1 << std::endl;

  char ASCII_A_2 {65}; //Ascii reprentation of A is 65
  std::cout << "value as char: "<< ASCII_A_2 << std::endl;
  std::cout << "value as int: "<< static_cast<int>(ASCII_A_2) << std::endl;
  

  //Auto data type
  auto var1 {12};
  auto var2 {13.0};
  auto var3 {14.0f};
  auto var4 {15.0l};
  auto var5 {'e'};
  auto var6 { 123u}; // unsigned
  auto var7 { 123ul}; //unsigned long
  auto var8 { 123ll}; // long long

  std::cout << std::endl;
  std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
  std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
  std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
  std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
  std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
  std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
  std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
  std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;
  
  return 0;
}

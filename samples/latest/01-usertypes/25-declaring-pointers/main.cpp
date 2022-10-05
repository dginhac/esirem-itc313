/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-05 09:10:17
  * @Last Modified time: 2022-10-05 11:47:20
  * 
  * @Description: Introduction pointers
  */


#include <iostream>

int main(int argc, char const *argv[]) {
  // Declare and Init some variables
  int value1 = 42;
  float value2 = 2.71828;
  int* ptr1 = nullptr; // int *ptr = nullptr;
  float* ptr2 = nullptr; 
  
  // prints the memory address of the variables 
  std::cout << "@value1: " << &value1 << std::endl;
  std::cout << "@value2: " << &value2 << std::endl;
  std::cout << "@ptr1:   " << &ptr1 << std::endl;
  std::cout << "@ptr2:   " << &ptr2 << std::endl;
  return 0;
}

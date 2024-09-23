/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 10:14:42
  * @Last Modified time: 2022-10-03 15:16:54
  * 
  * @Description: Final class
  */


#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date a_day(7,31);
  std::cout << "a day: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;
  a_day.next();
  std::cout << "a day + 1: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;

  return 0;
}

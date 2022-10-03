/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 10:14:42
  * @Last Modified time: 2022-10-03 15:25:52
  * 
  * @Description: Less methods
  */


#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date a_day(7,31);
  std::cout << "a day: " << toString(a_day) << std::endl;
  next(a_day);
  std::cout << "a day + 1: " << toString(a_day) << std::endl;
  back(a_day);
  std::cout << "a day - 1: " << toString(a_day) << std::endl;

  return 0;
}

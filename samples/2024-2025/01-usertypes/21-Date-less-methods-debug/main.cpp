/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 10:14:42
  * @Last Modified time: 2022-10-04 11:49:11
  * 
  * @Description: Debug session to understand why next and back functions do not modify dates
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

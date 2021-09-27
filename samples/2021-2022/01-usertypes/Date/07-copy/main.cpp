/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C-C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Minimal version with initializer list
  */

#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date starwars(5,4);
  std::cout << "1: " << starwars.day() << "/" << starwars.month() << std::endl;
  Date s2 = starwars;
  std::cout << "2: " << s2.day() << "/" << s2.month() << std::endl;
  Date s3(starwars);
  std::cout << "3: " << s3.day() << "/" << s3.month() << std::endl;
  return 0;
}

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
  std::cout << "1: " << starwars.month() << "/" << starwars.day() << std::endl;
  Date s2 = starwars;
  std::cout << "2: " << s2.month() << "/" << s2.day() << std::endl;
  Date s3(starwars);
  std::cout << "3: " << s3.month() << "/" << s3.day() << std::endl;
  return 0;
}

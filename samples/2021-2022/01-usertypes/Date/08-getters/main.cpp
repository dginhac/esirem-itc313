/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C-C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Minimal version with getters
  */

#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date starwars(5,4);
  std::cout << "Starwars: " << starwars.day() << "/" << starwars.month() << std::endl;
  Date pi_day(3,14);
  std::cout << "Pi day: " << pi_day.day() << "/" << pi_day.month() << std::endl;
  return 0;
}

/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C-C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Minimal version with parametrized constructor
  */

#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date d;
  std::cout << "Default: " << d.month() << "/" << d.day() << std::endl;
  Date pi_day(3,14);
  std::cout << "Pi day: " << pi_day.month() << "/" << pi_day.day() << std::endl;
  return 0;
}


/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C-C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Setters with value checking
  */

#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date a_day(6,21);
  std::cout << "Summer: " << a_day.day() << "/" << a_day.month() << std::endl;
  a_day.updateMonth(9);
  std::cout << "Automn: " << a_day.day() << "/" << a_day.month() << std::endl;
  a_day.updateMonth(2);
  a_day.updateDay(29);
  std::cout << "02/29: " << a_day.day() << "/" << a_day.month() << std::endl;
  return 0;
}

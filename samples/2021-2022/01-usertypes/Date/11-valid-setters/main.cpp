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
  Date love(2,14);
  std::cout << "Valentine day: " << love.day() << "/" << love.month() << std::endl;
  love.updateDay(30);
  std::cout << "NOK 30/02: " << love.day() << "/" << love.month() << std::endl;
  return 0;
}

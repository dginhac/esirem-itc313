/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C-C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Check valid date
  */

#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date pi_day_ok(3,14);
  std::cout << "ok: " << pi_day_ok.month() << "/" << pi_day_ok.day() << std::endl;
  Date pi_day_error(14,3);
  std::cout << "nok: " << pi_day_error.month() << "/" << pi_day_error.day() << std::endl;
  return 0;
}

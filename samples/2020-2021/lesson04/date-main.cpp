/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-21T17:37:16+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-21T17:40:24+02:00
 */

#include <iostream>
#include "date.h"

int main(int argc, char const *argv[]) {
   date::Date birthday(1972,5,26);
   std::cout << birthday.toString() << '\n';
   date::Date error(2019,2,29);
   std::cout << error.toString() << '\n';
   return 0;
}

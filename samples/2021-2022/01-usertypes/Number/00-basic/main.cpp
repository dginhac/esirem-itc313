/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T11:45:51+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T10:33:52+02:00
 */

#include <iostream>
#include "number.h"

int main(int argc, char const *argv[]) {
   Number nb;
   nb.real = 1.23;
   std::cout << "Real (ok): " << nb.real << std::endl;
   std::cout << "Int (nok): " << nb.integer << std::endl;
   nb.integer=5;
   std::cout << "Real (nok): " << nb.real << std::endl;
   std::cout << "Int (ok): " << nb.integer << std::endl;
   return 0;
}

/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-10T14:20:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T15:01:08+02:00
 */

#include <iostream>

union Data {      // The purpose of union is to save memory
      float real; // by using the same memory region for storing
      int integer; // different objects at different times.
};
int main(int argc, char const *argv[]) {
   Data d;
   d.real = 1.23;
   std::cout << "Real (ok): " << d.real << '\n';
   std::cout << "Int (nok): " << d.integer << '\n';
   d.integer=5;
   std::cout << "Real (nok): " << d.real << '\n';
   std::cout << "Int: (ok)" << d.integer << '\n';
   return 0;
}

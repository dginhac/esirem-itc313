/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-08T17:34:47+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-09T00:23:30+02:00
 */

#include <iostream>
#include "date.h"

void scopeFunc(Date d) {
   std::cout << "func input: " << d.toString() << '\n';
   d.setMonth(8);
   std::cout << "func output: " << d.toString() << '\n';
}
int main() {
   Date d(3,14);
   std::cout << "main 1: " << d.toString() << '\n';
   scopeFunc(d);
   std::cout << "main 2: " << d.toString() << '\n';
   {
      Date d(5,4);
      std::cout << "block: " << d.toString() << '\n';
   }
   std::cout << "main 3: " << d.toString() << '\n';
}

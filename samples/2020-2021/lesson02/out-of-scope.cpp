/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-08T17:34:47+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-08T23:24:28+02:00
 */

#include <iostream>

void scopeFunc(int x) {
   x = x + 666;
   std::cout << "Inside function: " << x << '\n';
}
int main() {
   int x = 42;
   std::cout << "Inside main: " << x << '\n';
   scopeFunc(x);
   std::cout << "Inside main: " << x << '\n';
   {
      int x = 2001;
      std::cout << "Inside block: " << x << '\n';
   }
   std::cout << "Inside main: " << x << '\n';
}

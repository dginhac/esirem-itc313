/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-10T15:30:13+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T13:08:05+02:00
 */
#include <iostream>

namespace operations  {
   int val = 500;
   int mult(int a, int b) {return a * b;}
}
using operations::mult; // Only import mult function
using std::cout; // only import cout

int main() {
   cout << operations::val << '\n';
   std::cout << mult(3,4) << '\n';
   return 0;
}

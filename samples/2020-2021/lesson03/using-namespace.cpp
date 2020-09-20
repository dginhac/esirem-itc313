/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-10T15:30:13+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-11T09:36:41+02:00
 */
#include <iostream>

namespace operations  {
   int val = 500;
   int mult(int a, int b) {return a * b;}
}
using operations::mult; // Only mult
using operations::val;  // Only val
// Or
using namespace operations; // All the namespace

int main() {
   std::cout << operations::mult(4,5) << '\n';
   std::cout << mult(4,5) << '\n';
   std::cout << operations::val << '\n';
   std::cout << val << '\n';
   return 0;
}

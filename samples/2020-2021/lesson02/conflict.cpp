/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-10T15:30:13+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T11:17:57+02:00
 */
#include <iostream>

namespace n1  {  int val = 500; }
namespace n2 { int val = 200; }
using namespace n1;
using namespace n2;

int main() {
   std::cout << n1::val << '\n';
   std::cout << n2::val << '\n';
   std::cout << val << '\n';
   return 0;
}

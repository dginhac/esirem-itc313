/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-10T15:30:13+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T15:58:27+02:00
 */
#include <iostream>

namespace first {
  int var = 5;
}
namespace second {
  double var = 3.1416;
}

int main () {
  std::cout << first::var << '\n';
  std::cout << second::var << '\n';
  return 0;
}

/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-10T09:22:17+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T14:06:19+02:00
 */

#include <iostream>
#include "colors.h"


int main(int argc, char const *argv[]) {
   // Use fully qualified name
   RGB color1 = RGB::Red;
   std::cout << "RGB: " << static_cast<int>(color1) << std::endl;
   ROYGBIV color2 = ROYGBIV::Green ;
   std::cout << "ROYGBIV: " << static_cast<int>(color2) << std::endl;
   ROYGBIV color3 = ROYGBIV::Red ;
   std::cout << "ROYGBIV: " << static_cast<int>(color3) << std::endl;
   return 0;
}

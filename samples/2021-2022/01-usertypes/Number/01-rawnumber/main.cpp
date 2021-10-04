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
   Rawnumber nb1;
   nb1.display();
   int int_nb = 42;
   Rawnumber nb2(int_nb);
   nb2.display();
   float real_nb = 3.14159;
   Rawnumber nb3(real_nb);
   nb3.display();

   Type real_type = nb3.type();
   std::cout << static_cast<int>(real_type) << std::endl;
   float real_value = nb3.number().real;
   std::cout << real_value << std::endl;
   return 0;
}

/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-08T14:06:00+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-08T16:15:19+02:00
 */



#include <iostream>
#include "date.h"

int main(int argc, char const *argv[]) {
   // May the fourth be with you!
   Date starwars(5,4);
   std::cout << "Starwars day is " << starwars.toString() << std::endl;
   Date christmas = Date(12,25);
   std::cout << "Christmas day is " << christmas.toString() << std::endl;
   return 0;
}

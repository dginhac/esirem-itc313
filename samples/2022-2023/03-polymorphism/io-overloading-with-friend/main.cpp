/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:21:34+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-19T23:37:03+02:00
 */

#include <iostream>
#include "todo.h"


int main(int argc, char const *argv[]) {
   
   date::Date end_of_world(12,12);
   date::Date christmas(12,25);

   std::cout << toString(end_of_world) << std::endl;
   std::cout << christmas;

   
   return 0;
}

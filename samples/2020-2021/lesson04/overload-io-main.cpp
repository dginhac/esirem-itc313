/*
* @Project: C++ programming - ESIREM 3A IT
* @File:    overload-io-main.cpp
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-25 14:54:09
* @Last Modified by:   d0m
* @Last Modified time: 2020-09-28 17:09:40
*/

#include <iostream>
#include "overload-io.h"

int main(int argc, char const *argv[]) {
   date::Date end_of_world(2012,12,12);
   date::Date other_date(2020,12,25);

   std::cout << end_of_world.toString() << std::endl;
   std::cout << end_of_world;

   return 0;
}

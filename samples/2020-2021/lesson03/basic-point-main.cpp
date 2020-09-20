/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T11:45:51+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T10:47:15+02:00
 */


#include <iostream>
#include "point.h"

int main(int argc, char const *argv[]) {
   struct Point basic_p; //declaration using struct Point as in C language
   std::cout << "basic_p(" << basic_p.x << "," << basic_p.y << ")"<< '\n';
   basic_p.x = 4.5;      // x is public
   basic_p.y = 3.2;      // x is public
   std::cout << "basic_p(" << basic_p.x << "," << basic_p.y << ")"<< '\n';
   return 0;
}

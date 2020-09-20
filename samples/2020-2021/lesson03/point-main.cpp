/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T11:45:51+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T10:33:52+02:00
 */


#include <iostream>
#include "point.h"

int main(int argc, char const *argv[]) {
   struct Point default_p; //declaration using struct Point as in C language
   std::cout << "default_p(" << default_p.x << "," << default_p.y << ")"<< '\n';
   default_p.x = 4.5;      // x is public
   std::cout << "default_p(" << default_p.x << "," << default_p.y << ")"<< '\n';

   Point p(1.0, -3.0);     // declaration using Point, only valid in C++
   std::cout << "P(" << p.x << "," << p.y << ")"<< '\n';
   p.move(0.1, 0.2);       // call of the move function
   std::cout << "P(" << p.x << "," << p.y << ")"<< '\n';

   return 0;
}

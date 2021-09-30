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
   // C++ declaration - In C, we must declare: struct Point p1; 
   Point p1; // zero-initialization
   std::cout << "Create P(" << p1.x << "," << p1.y << ")" << std::endl;
   p1.x = 4.5; // x is public
   p1.y = 3.2; // x is public
   std::cout << "Update P(" << p1.x << "," << p1.y << ")" << std::endl;
   return 0;
}

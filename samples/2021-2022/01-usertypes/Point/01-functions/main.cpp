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
   Point p1; // Initialized to default values from constructor
   std::cout << "Create P1 : (" << p1.x << "," << p1.y << ")"<< std::endl;
   p1.x = 4.5; 
   std::cout << "Update x: (" << p1.x << "," << p1.y << ")"<< std::endl;
   Point p2(1.0, -3.0); // declaration only valid in C++
   std::cout << "Create P2: (" << p2.x << "," << p2.y << ")"<< std::endl;
   p2.move(0.1, 0.2); // call of the move function
   std::cout << "Move P2 (" << p2.x << "," << p2.y << ")"<< std::endl;
   return 0;
}

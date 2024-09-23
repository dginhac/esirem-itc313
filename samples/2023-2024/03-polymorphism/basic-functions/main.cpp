/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-21T17:11:59+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-22T12:05:21+02:00
 */

#include<iostream>
#include "functions.h"


int main(int argc, char const *argv[]) {
   int a = -5;
   float b = 5.5;
   std::cout << "Abs(" << a << ") = " << myfct::absolute(a) << std::endl;
   std::cout << "Abs(" << b << ") = " << myfct::absolute(b) << std::endl;
   return 0;
}

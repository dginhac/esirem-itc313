/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T11:45:51+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T10:33:52+02:00
 */

#include <iostream>
#include "status.h"

int main(int argc, char const *argv[]) {
   Status status; // or enum Status status;
   status = Delayed;
   // implicit cast of status into integer
   std::cout << "Delayed: " << status << std::endl;
   status = Urgent;
   std::cout << "Urgent: " << status << std::endl;
   return 0;
}

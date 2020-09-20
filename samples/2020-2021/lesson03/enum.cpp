/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T13:04:30+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T14:05:53+02:00
 */

#include <iostream>

enum Status { // Braces surround the entries
   Pending=2,   // a comma-separated
   Urgent=3,    // set of constants
   Delayed=5,   // (integers) with unique names
   Cancelled=7,
   Done=11       // No comma after the last one
}; // Do not forget the semi-colon

int main(int argc, char const *argv[]) {
   Status status; // or enum Status status;
   status = Cancelled;
   std::cout << "Status: " << status << '\n';
   return 0;
}

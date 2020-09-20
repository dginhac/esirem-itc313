/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-10T15:03:21+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T15:34:31+02:00
 */

#include <iostream>
#define REAL 1
#define INTEGER 2
#define CHAR 3

union Data {
    float real;
    int integer;
    char letter;
};

struct FullData {
   short type;
   Data data;
   void display();
};

void FullData::display() {
   switch (type) {
      case REAL:
         std::cout << "Real: " << data.real << '\n';
      break;
      case INTEGER:
         std::cout << "Integer: " << data.integer << '\n';
      break;
      case CHAR:
         std::cout << "Char: " << data.letter << '\n';
      break;
   }
}
int main(int argc, char const *argv[]) {
   FullData my_var;
   my_var.type = INTEGER;
   my_var.data.integer = 5;
   my_var.display();
   return 0;
}

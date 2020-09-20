/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-10T09:22:17+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T14:06:19+02:00
 */

#include <iostream>

enum class Colorset1 { // Definition is similar to standard enum
   Red, Green, Blue    // Use enum class instead
};
enum class Colorset2 {
   Orange, Red, Yellow  // Names don't have to be unique
};
int main(int argc, char const *argv[]) {
   Colorset1 c1 = Colorset1::Red; // Use fully qualified name
   Colorset2 c2 = Colorset2::Red;
   // No implicit conversion to integer
   std::cout << "c1: " << static_cast<int>(c1) << '\n';
   std::cout << "c2: " << static_cast<int>(c2) << '\n';
   return 0;
}

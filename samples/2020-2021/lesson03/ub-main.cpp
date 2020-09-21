/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-21T14:27:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-21T16:07:03+02:00
 */

#include "ub.h"

int main(int argc, char const *argv[]) {
   ub::Professor me("Dom", "Ginhac", date::Date(1972, 05, 26), "ESIREM", "IMVIA", 10000);
   me.display();
   return 0;
}

/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-21T14:27:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-21T16:07:03+02:00
 */

#include "univ.h"

int main(int argc, char const *argv[]) {
   univ::Professor me("Dom", "Ginhac", date::Date(05, 26), "ESIREM", "IMVIA", 10000);
   display(me);
   return 0;
}

/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-08T14:06:00+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-09T09:47:20+02:00
 */



#include <iostream>
#include "date.h"

int main(int argc, char const *argv[]) {
   Date default_date;
   std::cout << "Default date is " << default_date.getMonth()
             << "/" << default_date.getDay() << '\n';
   Date other_default_date = Date();
   std::cout << "Other default date is " << other_default_date.getMonth()
             << "/" << other_default_date.getDay() << '\n';

   return 0;
}

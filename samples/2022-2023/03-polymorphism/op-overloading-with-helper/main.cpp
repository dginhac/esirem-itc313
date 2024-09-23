/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:21:34+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-19T23:37:03+02:00
 */

#include <iostream>
#include "todo.h"


int main(int argc, char const *argv[]) {
   
   date::Date end_of_world(12,12);
   date::Date other_date(12,25);

   if (argc < 2) {
      std::cout << "Please choose an option: Equal, Comp, Arithmetic, Inc" << std::endl;
      return 0;
   }

   if (std::string(argv[1]) == "Equal") {
      // Equality
      bool test = other_date == end_of_world;
      std::cout << "25/12 == End of World ? " << std::to_string(test) << std::endl;
      test = other_date !=  end_of_world;
      std::cout << "25/12 != End of World ? " << std::to_string(test) << std::endl;
   }

   // Comparison
   if (std::string(argv[1]) == "Comp") {
      bool test = other_date > end_of_world;
      std::cout << "25/12 > End of World : " << std::to_string(test) << std::endl;
      test = other_date < end_of_world;
      std::cout << "25/12 < End of World : " << std::to_string(test) << std::endl;
      test = other_date >= end_of_world;
      std::cout << "25/12 >= End of World : " << std::to_string(test) << std::endl;
      test = other_date <= end_of_world;
      std::cout << "25/12 <= End of World : " << std::to_string(test) << std::endl;
   }

   // Arithmetic
   if (std::string(argv[1]) == "Arithmetic") {
      date::Date new_date = end_of_world + 70;
      std::cout << "12/12 + 70 days : " << toString(new_date) << std::endl;
      new_date = end_of_world - 152;
      std::cout << "12/12 - 152 days : " << toString(new_date) << std::endl;
      new_date = new_date + 50;
      std::cout << "12/12 - 152 + 50 days : " << toString(new_date) << std::endl;
   }


   // Incrementation
   if (std::string(argv[1]) == "Inc") {
      date::Date new_date = date::Date(02, 28) ;
      std::cout << "new_date=" << toString(new_date) << std::endl;
      new_date++;
      std::cout << "new_date++=" << toString(new_date) << std::endl;
      new_date--;
      std::cout << "new_date--=" << toString(new_date) << std::endl;
      ++new_date;
      std::cout << "++new_date=" << toString(new_date) << std::endl;
      --new_date;
      std::cout << "--new_date=" << toString(new_date) << std::endl << std::endl;

      date::Date tmp;
      new_date = date::Date(12, 31) ;
      std::cout << "new_date = " << toString(new_date) << '\n';
      tmp = ++new_date;
      std::cout << "tmp = ++new_date -> tmp=" << toString(tmp) << " new_date=" << toString(new_date) << std::endl;
      tmp = --new_date;
      std::cout << "tmp = --new_date -> tmp=" << toString(tmp) << " new_date=" << toString(new_date) << std::endl;
      tmp = new_date++;
      std::cout << "tmp = new_date++ -> tmp=" << toString(tmp) << " new_date=" << toString(new_date) << std::endl;
      tmp = new_date--;
      std::cout << "tmp = new_date-- -> tmp=" << toString(tmp) << " new_date=" << toString(new_date) << std::endl;
   }
   
   return 0;
}

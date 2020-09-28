/*
* @Project: C++ programming - ESIREM 3A IT
* @File:    overload-op-friend-main.cpp
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-24 11:32:41
* @Last Modified by:   d0m
* @Last Modified time: 2020-09-25 15:50:02
*/


#include <iostream>
#include "overload-op-friend.h"

int main(int argc, char const *argv[]) {
   date::Date end_of_world(2012,12,12);
   date::Date other_date(2020,12,25);

   // Egality
   bool test = other_date == end_of_world;
   std::cout << "25/12/2020 == End of World ? " << std::to_string(test) << '\n';
   test = other_date !=  end_of_world;
   std::cout << "25/12/2020 != End of World ? " << std::to_string(test) << '\n';

   // Comparison
   test = other_date > end_of_world;
   std::cout << "25/12/2020 > End of World : " << std::to_string(test) << '\n';
   test = other_date < end_of_world;
   std::cout << "25/12/2020 < End of World : " << std::to_string(test) << '\n';
   test = other_date >= end_of_world;
   std::cout << "25/12/2020 >= End of World : " << std::to_string(test) << '\n';
   test = other_date <= end_of_world;
   std::cout << "25/12/2020 <= End of World : " << std::to_string(test) << '\n';


   // Arithmetic
   date::Date new_date = end_of_world + 70;
   std::cout << "12/12/2012 + 70 days : " << new_date.toString() << '\n';
   new_date = end_of_world - 152;
   std::cout << "12/12/2012 - 152 days : " << new_date.toString() << '\n';
   new_date = 45 + end_of_world;
   std::cout << "45 days + 12/12/2012 : " << new_date.toString() << '\n';


   // Incrementation
   new_date = date::Date(2020, 12, 31) ;
   date::Date tmp;
   std::cout << new_date.toString() << '\n';
   tmp = ++new_date;
   std::cout << "tmp = ++new_date -> tmp=" << tmp.toString() << " new=" << new_date.toString() << '\n';
   tmp = --new_date;
   std::cout << "tmp = --new_date -> tmp=" <<tmp.toString() << " new=" << new_date.toString() << '\n';
   tmp = new_date++;
   std::cout << "tmp = new_date++ -> tmp=" <<tmp.toString() << " new=" << new_date.toString() << '\n';
   tmp = new_date--;
   std::cout << "tmp = new_date-- -> tmp=" <<tmp.toString() << " new=" << new_date.toString() << '\n';
   new_date++;
   std::cout << "new=" << new_date.toString() << '\n';
   ++new_date;
   std::cout << "new=" << new_date.toString() << '\n';
   new_date--;
   std::cout << "new=" << new_date.toString() << '\n';
   new_date++;
   std::cout << "new=" << new_date.toString() << '\n';


   return 0;
}

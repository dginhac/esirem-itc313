/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-07T15:15:52+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-23T11:39:17+02:00
 */

#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>

class Date {
public:
   Date (int month, int day);
   Date() = default;
   ~Date();
   int getMonth() const;
   int getDay() const;
   int month();
   bool checkDate(int month, int day) const;
   Date nextDay();
   void setMonth(int month);
   void setDay(int day);
   std::string toString();
private:
   int _month;
   int _day;
};
#endif // DATE_H

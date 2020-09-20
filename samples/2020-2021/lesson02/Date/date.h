/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-07T15:15:52+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-09T09:16:06+02:00
 */

#ifndef DATE_H
#define DATE_H
#include <string>

class Date {
private:
   int _month;
   int _day;
public:
   Date (int month, int day);
   Date() = default;
   ~Date();
   int getMonth() const;
   int getDay() const;
   int month();
   bool checkDate(int month, int day);
   Date nextDay();
   void setMonth(int month);
   void setDay(int day);
   std::string toString();
};
#endif // DATE_H

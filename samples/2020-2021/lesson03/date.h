/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-07T15:15:52+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-21T14:33:57+02:00
 */

#ifndef DATE_H
#define DATE_H
#include <string>

namespace date {
   class Date {
   private:
      int _year;
      int _month;
      int _day;
   public:
      Date (int year, int month, int day);
      Date() = default;
      ~Date();
      int year() const;
      int month() const;
      int day() const;
      bool checkDate(int year, int month, int day);
      void setYear(int year);
      void setMonth(int month);
      void setDay(int day);
      void nextDay();
      std::string toString() const;
   };

   bool operator == (const Date&, const Date&); // comparison operators bool operator != (const date&, const date&);
   bool operator < (const Date&, const Date&);
   bool operator > (const Date&, const Date&);
   bool operator <= (const Date&, const Date&);
   bool operator >= (const Date&, const Date&);

}
#endif // DATE_H

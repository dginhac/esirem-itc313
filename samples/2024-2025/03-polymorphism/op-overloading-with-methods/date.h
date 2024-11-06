/**
  * @File:     date.h
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Methods - Helpers functions
  */

#include <iostream>

#ifndef DATE_H
#define DATE_H

namespace date {
   class Date {
   public:
      Date(int month=1, int day=1);
      int month() const;
      int day() const;
      void updateMonth(int month);
      void updateDay(int day);
      void next();
      void back();

      bool operator == (const Date& d) const; // d1 == d2
      bool operator != (const Date& d) const; // d1 != d2
      bool operator < (const Date& d) const;  // d1 <  d2
      bool operator > (const Date& d) const;  // d1 >  d2
      bool operator <= (const Date& d) const; // d1 <= d2
      bool operator >= (const Date& d) const; // d1 <= d2
      Date operator + (const int days) const; // d1 + integer
      Date operator - (const int days) const; // d1 - integer
      Date operator ++ (); // prefix increment: ++date
      Date operator -- (); // prefix decrement: --date
      Date operator ++ (int); // use int paramater for postfix increment: date++
      Date operator -- (int); // use int paramater for postfix decrement: date--

   private:
      int _month;
      int _day;

   };

   bool isDate(int month, int day);
   int getDaysInMonth(int month);
   int dayOfYear(Date d);
   std::string toString(Date d);

} // date

#endif // DATE_H

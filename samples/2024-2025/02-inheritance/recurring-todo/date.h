/**
  * @File: date.h
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
   private:
      int _month;
      int _day;

   };

   bool isDate(int month, int day);
   int getDaysInMonth(int month);
   int dayOfYear(Date d);
   std::string toString(Date d);

   bool operator == (const Date&, const Date&); // comparison operators
   bool operator != (const Date&, const Date&);
   bool operator < (const Date&, const Date&);
   bool operator > (const Date&, const Date&);
   bool operator <= (const Date&, const Date&);
   bool operator >= (const Date&, const Date&);

   Date operator + (const Date& date, const int days); // date + integer
   Date operator + (const int days, const Date& date); // integer + date
   Date operator - (const Date& date, const int days); // date - integer
} // date

#endif // DATE_H

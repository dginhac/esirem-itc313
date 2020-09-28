/*
* @Project: C++ programming - ESIREM 3A IT
* @File:    overload-op-friend.h
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-24 11:30:15
* @Last Modified by:   d0m
* @Last Modified time: 2020-09-25 15:48:43
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
      int daysInMonth() const;
      std::string toString() const;

      friend bool operator == (const Date& d1, const Date& d2); // d1 == d2
   };


   bool operator != (const Date& d1, const Date& d2); // d1 != d2
   bool operator < (const Date& d1, const Date& d2) ;  // d1 <  d2
   bool operator > (const Date& d1, const Date& d2) ;  // d1 >  d2
   bool operator <= (const Date& d1, const Date& d2) ; // d1 <= d2
   bool operator >= (const Date& d1, const Date& d2) ; // d1 <= d2

   Date operator + (const Date& date, const int days); // date + integer
   Date operator + (const int days, const Date& date); // integer + date
   Date operator - (const Date& date, const int days); // date - integer

   Date operator ++ (Date& date); // prefix increment: ++date
   Date operator -- (Date& date); // prefix decrement: --date
   Date operator ++ (Date& date, int); // use int paramater for postfix increment: date++
   Date operator -- (Date& date, int); // use int paramater for postfix decrement: date--

}
#endif // DATE_H

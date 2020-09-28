/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-07T15:15:52+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-24T11:17:46+02:00
 */

#ifndef DATE_H
#define DATE_H

#include <string>

/**
 * Includes the Date class
 */
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
      friend std::ostream& operator<<(std::ostream& os, const Date& date);

   }; // Date



   bool operator == (const Date& d1, const Date& d2); // d1 == d2
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

} // date
#endif // DATE_H

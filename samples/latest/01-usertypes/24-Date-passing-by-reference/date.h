/**
  * @File: date.h
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 09:12:05
  * @Last Modified time: 2022-10-04 14:39:45
  * 
  * @Description: Date Class Declaration
  */



#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int month=1, int day=1);
   int month() const;
   int day() const;
   void updateMonth(int month);
   void updateDay(int day);
private:
   int _month;
   int _day;
   
};

bool isDate(int month, int day);
int getDaysInMonth(int month);
int dayOfYear(Date d);
std::string toString(Date d);

void next(Date& d);
void back(Date& d);


#endif // DATE_H

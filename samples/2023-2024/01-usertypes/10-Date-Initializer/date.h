/**
  * @File:     date.h
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Minimal version with initializer list
  */

#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int month=1, int day=1);
   int month();
   int day();
private:
   int _month;
   int _day;
};
#endif // DATE_H

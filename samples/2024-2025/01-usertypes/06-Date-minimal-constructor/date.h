/**
  * @File:     date.h
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Minimal version with no constructor
  */

#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date();
   int month();
   int day();
private:
   int _month;
   int _day;
};
#endif // DATE_H

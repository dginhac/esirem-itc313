/**
  * @File: date.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 09:14:04
  * @Last Modified time: 2022-10-06 15:27:23
  * 
  * @Description: Date class Implementation
  */


#include "date.h"
#include <assert.h> 



Date::Date(int month, int day) : _month(month), _day(day) {
    bool status = isDate(month, day);
    assert(status && "Date is not valid");
}

int Date::month() const {
	return _month;
}

int Date::day() const {
	return _day;
}

void Date::updateMonth(int month) {
    bool status = isDate(month, _day);
    assert(status==true && "New month is not valid");
    _month = month;
}

void Date::updateDay(int day) {
    bool status = isDate(_month, day);
    assert(status==true && "New day is not valid");
    _day = day;
}



/**
 * 
 * Helper functions 
 * 
*/

bool isDate(int month, int day) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) || 
        (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}

int getDaysInMonth(int month)  { 
    assert(((month >=1) && (month<=12)) && "Month is not valid");
    if (month == 2) return 28;
    if ((month == 1 || month == 3 || month == 5 || month == 7
    || month == 8 || month == 10 || month == 12)) return 31;
    return 30;
}

int dayOfYear(Date d) {
    auto day=0;
    for (auto i=1;i<d.month();i++) {
        day+=getDaysInMonth(i);
    }
    day+= d.day();
    return day;
}

std::string toString(Date d) {
    return std::to_string(d.month()) + "/" + std::to_string(d.day()) ;
}


void next(Date* d) {
    if ((d->month()==12) && (d->day()==31)) {
        d->updateDay(1);
        d->updateMonth(1);
    }
    else if (d->day()==getDaysInMonth(d->month())) {
        d->updateDay(1);
        d->updateMonth(d->month()+1);
    }
    else {
        d->updateDay(d->day()+1);
    }
}

void back(Date* d) {
    if ((d->month()==1) && (d->day()==1)) {
        d->updateDay(31);
        d->updateMonth(12);
    }
    else if (d->day()==1) {
        d->updateMonth(d->month()-1);
        d->updateDay(getDaysInMonth(d->month()));
    }
    else {
        d->updateDay((d->day()-1));
    }
}

/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Setters with value checking
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
    assert(status==true && "Month is not valid");
    _month = month;
}

void Date::updateDay(int day) {
    bool status = isDate(_month, day);
    assert(status==true && "Day is not valid");
    _day = day;
}

bool Date::isDate(int month, int day) const {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) || 
        (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}


/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Setters
*/
#include "date.h"
#include <assert.h> 


Date::Date(int month, int day) : _month(month), _day(day) {
}

int Date::month() const {
	return _month;
}

int Date::day() const {
	return _day;
}

void Date::updateMonth(int month) {
    _month = month;
}

void Date::updateDay(int day) {
    _day = day;
}



/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Minimal version with getters
*/
#include "date.h"


Date::Date(int month, int day) : _month(month), _day(day) {
    // Nothing to do
}

int Date::month()  const {
	return _month;
}

int Date::day() const {
	return _day;
}



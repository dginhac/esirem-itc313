/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Minimal version with only parametrized constructor
*/
#include "date.h"


Date::Date(int month, int day) {
    _month = month;
    _day = day;
}

int Date::month()  {
	return _month;
}

int Date::day()  {
	return _day;
}



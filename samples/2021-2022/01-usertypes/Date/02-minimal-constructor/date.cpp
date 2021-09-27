/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Minimal version with explicit constructor
*/
#include "date.h"

Date::Date() {
    _month = 1;
    _day = 1;
}

int Date::month()  {
	return _month;
}

int Date::day()  {
	return _day;
}



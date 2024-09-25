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

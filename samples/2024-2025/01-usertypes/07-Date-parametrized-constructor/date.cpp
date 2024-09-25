#include "date.h"

Date::Date() {
    _month = 1;
    _day = 1;
}

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

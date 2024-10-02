#include "date.h"
#include <assert.h>

Date::Date(int month, int day) : _month(month), _day(day) {
    assert(isDate(month, day));
}

bool Date::isDate(int month, int day) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) ||
        (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}

int Date::month() {
	return _month;
}

int Date::day() {
	return _day;
}

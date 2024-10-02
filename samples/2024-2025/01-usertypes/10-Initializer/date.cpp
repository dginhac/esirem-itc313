#include "date.h"

Date::Date(int month, int day) : _month(month), _day(day) {
    // Nothing to do
}

int Date::month()  {
	return _month;
}

int Date::day()  {
	return _day;
}

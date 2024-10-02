#include "date.h"
#include <assert.h>


Date::Date(int month, int day) : _month(month), _day(day) {
    assert(isDate(month, day));
}

int Date::month() const {
	return _month;
}

int Date::day() const {
	return _day;
}

void Date::updateMonth(int new_month) {
    assert(isDate(new_month, _day));
    _month = new_month;
}

void Date::updateDay(int new_day) {
    assert(isDate(_month, new_day));
    _day = new_day;
}

int Date::getDaysInMonth(int month) const {
    assert(((month >=1) && (month<=12)));
    if (month == 2) return 28;
    if ((month == 1 || month == 3 || month == 5 || month == 7
    || month == 8 || month == 10 || month == 12)) return 31;
    return 30;
}

int Date::dayOfYear() const {
    auto day=0;
    for (auto i=1;i<_month;i++) {
        day+=getDaysInMonth(i);
    }
    day+= _day;
    return day;
}

void Date::next() {
    if ((_month==12) && (_day==31)) {
        _day=1;
        _month=1;
    }
    else if (_day==getDaysInMonth(_month)) {
        _day=1;
        _month++;
    }
    else {
        _day++;
    }
}

void Date::back() {
    if ((_month==1) && (_day==1)) {
        _day=31;
        _month=12;
    }
    else if (_day==1) {
        _month--;
        _day=getDaysInMonth(_month);
    }
    else {
        _day--;
    }
}

bool Date::isDate(int month, int day) const {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) ||
        (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}

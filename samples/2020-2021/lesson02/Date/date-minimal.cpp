/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 */
#include "date.h"

Date::Date(int month, int day) {
	_month = month;
	_day = day;
}
int Date::getMonth() const {
	return _month;
}
int Date::getDay() const {
	return _day;
}
void Date::setMonth(int month) {
	assert((month >=1) && (month<=12));
	_month = month;
}
void Date::setDay(int day) {
	bool status = checkDate(_month, day);
	assert(status == true);
	_day = day;
}
Date Date::nextDay() {
	Date next(_month, _day+1);
	return next;
}
std::string Date::toString() {
	std::string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	std::string to_display;
	to_display = month[_month-1] + "/" + std::to_string(_day);
	return to_display;
}

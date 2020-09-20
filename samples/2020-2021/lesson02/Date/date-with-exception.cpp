/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T08:56:56+02:00
 */

#include "date.h"

Date::Date(int month, int day) {
	bool status=true;

	if ((month == 1 || month == 3 || month == 5 || month == 7
	|| month == 8 || month == 10 || month == 12) && ( day>31 || day<1) ) {
		status = false;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11)
	&& (day>30 || day<1) ) {
		status = false;
	}
	else if ((month == 2) && (day>28 || day<1) ) {
		status = false;
	}
	if ((month < 1) || (month > 12)) {
		status = false;
	}

	//assert(status==true);
	if (status==false) {
		std::string msg = "ERROR:" + std::to_string(month) + "/" +
								std::to_string(day) + " is not a valid date!";
		throw std::string(msg);
	}
	else {
		_month = month;
		_day = day;
	}



}
int Date::getMonth() const {
	return _month;
}
int Date::getDay() const {
	return _day;
}
Date Date::nextDay() {
	Date next(_month, _day+1);
	return next;
}
std::string Date::toString() {
	std::string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	std::string to_display;
	if (_month>0) {
		to_display = month[_month-1] + "/" + std::to_string(_day);
	}
	else {
		to_display = "Not a valid date";
	}
	return to_display;
}

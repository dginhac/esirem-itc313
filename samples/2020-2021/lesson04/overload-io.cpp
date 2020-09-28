/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-24T11:18:44+02:00
 */

#include <iostream>

#include "overload-io.h"

namespace date {

	bool Date::checkDate(int year, int month, int day) {
		if (year <0) {
			return false;
		}
		if ((month < 1) || (month > 12)) {
			return false;
		}
		if ((day < 1) || (day > 31)) {
			return false;
		}
		if ((month == 1 || month == 3 || month == 5 || month == 7
		|| month == 8 || month == 10 || month == 12) && (day>31) ) {
			return false;
		}
		if ((month == 4 || month == 6 || month == 9 || month == 11)
		&& (day>30)) {
			return false;
		}
		if ((month == 2) && (day > 29)) {
			return false;
		}
		if ((month == 2) && (day==29)) {
			if ((year%4) || ((year%100==0) && (year%400))) {
				return false;
			}
		}
		return true;
	}



	Date::Date(int year, int month, int day) {
		bool status = checkDate(year, month, day);
		assert(status==true && "Date is not valid");
		_year = year;
		_month = month;
		_day = day;
		//std::cout << "Constructor: " << _year << "/" << _month << "/" << _day << '\n';
	}

	Date::~Date() {
		//std::cout << "  Destructor: " << _year << "/" << _month << "/" << _day << '\n';
	}

	int Date::year() const {
		return _year;
	}
	int Date::month() const {
		return _month;
	}

	int Date::day() const {
		return _day;
	}

	std::string Date::toString() const {
		std::string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
		std::string to_display;
		to_display = std::to_string(_year) + "/" + month[_month-1] + "/" + std::to_string(_day);
		return to_display;
	}

	void Date::setYear(int year) {
		assert(year >= 0 && "Year must be positive");
		_year = year;
	}

	void Date::setMonth(int month) {
		assert((month >=1) && (month<=12) && "Month must be between 1 and 121");
		_month = month;
	}

	void Date::setDay(int day) {
		bool status = checkDate(_year, _month, day);
		assert(status == true && "Day is not valid");
		_day = day;
	}

	int Date::daysInMonth() const {
		if (_month == 1 || _month == 3 || _month == 5 || _month == 7
		|| _month == 8 || _month == 10 || _month == 12) {
			return 31;
		}
		if (_month == 4 || _month == 6 || _month == 9 || _month == 11) {
			return 30;
		}
		if (_month == 2 && ((_year%4==0 && _year%100) || _year%400==0)) {
			return 29;
		}
		return 28;
	}

	// write date to stream
	std::ostream& operator<<(std::ostream& os, const Date& date)  {
		std::string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
		std::string to_display;
		to_display = std::to_string(date.year()) + "/" + month[date.month()-1] + "/" + std::to_string(date.day());
		os << to_display << std::endl;
		return os;
	}


	Date operator + (const Date& date, const int days) {
		if (days <0) { //if days <0, we call Date - (-days)
			return date - (-days);
		}
		Date tmp = date; // the current date
		int days_in_month = tmp.daysInMonth();
		int new_day = tmp.day() + days; // the new day is ok if new_day < end of month
		int new_month = tmp.month();
		int new_year = tmp.year();
		while (new_day > days_in_month) { // end of the month
			new_day -= days_in_month; // the day in the next month
			new_month++;
			if (new_month > 12) { // end of the year
				new_month = 1;
				new_year++;
			}
			tmp.setMonth(new_month);
			days_in_month = tmp.daysInMonth();
		}
		return Date(new_year, new_month, new_day);
	}

	Date operator + (const int days, const Date& date) {
		return date + days;
	}

	Date operator ++(Date& date) { // prefix increment
		date = date + 1;
		return date;
	}

	Date operator --(Date& date) { // prefix decrement
		date = date - 1;
		return date;
	}

	Date operator ++(Date& date, int) { // postfix increment
		Date tmp = date;
		date = tmp +1;
		return tmp;
	}

	Date operator --(Date& date, int) { // postfix decrement
		Date tmp = date;
		date = date - 1;
		return tmp;
	}

	Date operator - (const Date& date, const int days) {
		if (days <0) { //if days <0, we call Date + (-days)
			return date + (-days);
		}
		int new_year=date.year();
		int new_month=date.month();
		int new_day = date.day()-days; // the new day is ok if > 0
		while (new_day <=0) {
			if (new_month==1) { // beginning of the year
				new_year--; // go to the previous year
				new_month=12; // in december
				new_day=31+new_day;
			}
			else { // other months than january
				int days_in_previous_month = Date(new_year,new_month-1,1).daysInMonth();
				new_day = days_in_previous_month+new_day;
				new_month--;
			}
		}
		return Date(new_year, new_month, new_day);
	}


	bool operator == (const Date& d1, const Date& d2)  { // check for equality
		if ((d1.day()==d2.day()) && (d1.month()==d2.month()) && (d1.year()==d2.year())) {
			return true;
		}
	return false;
	}

	bool operator !=(const Date& d1, const Date& d2)  {
		return !(d1==d2);
	}

	bool operator < (const Date& d1, const Date& d2) {
		if (d1.year()<d2.year()) {
			return true;
		}
		else if (d1.year()>d2.year()) {
			return false;
		}
		else { // same year
			if (d1.month()<d2.month()) {
				return true;
			}
			else if (d1.month()>d2.month()) {
				return false;
			} else { // same month
				if ( d1.day()<d2.day()) {
					return true;
				}
				else {
					return false;
				}
			}
		}
		return false;
	}


	bool operator > (const Date& d1, const Date& d2) {
		if (d1==d2) {
			return false;
		}
		if (d1<d2) {
			return false;
		}
		return true;
	}

	bool operator <=(const Date& d1, const Date& d2)  {
		if (d1==d2) {
			return true;
		}
		return (d1<d2);
	}

	bool operator >=(const Date& d1, const Date& d2)  {
		if (d1==d2) {
			return true;
		}
		return (d1>d2);
	}
}

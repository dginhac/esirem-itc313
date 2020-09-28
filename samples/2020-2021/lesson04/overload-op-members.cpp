/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-24T10:53:03+02:00
 */
#include "overload-op-members.h"
#include <iostream>

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

	Date Date::operator + (const int days) const {
		if (days <0) { //if days <0, we call Date - (-days)
			return *this - (-days);
		}
		Date tmp = *this; // the current date
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

	Date Date::operator ++(int) { // postfix increment
		Date tmp = *this;
		*this = tmp +1;
		return tmp;
	}

	Date Date::operator --(int) { // postfix decrement
		Date tmp = *this;
		*this = *this - 1;
		return tmp;
	}

	Date Date::operator ++() { // prefix increment
		*this = *this + 1;
		return *this;
	}

	Date Date::operator --() { // prefix decrement
		*this = *this - 1;
		return *this;
	}



	Date Date::operator - (const int days) const {
		if (days <0) { //if days <0, we call Date + (-days)
			return *this + (-days);
		}
		int new_year=year();
		int new_month=month();
		int new_day = day()-days; // the new day is ok if > 0
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

	bool Date::operator == (const Date& d) const { // check for equality
		if ((day()==d.day()) && (month()==d.month()) && (year()==d.year())) {
			return true;
		}
	return false;
	}

	bool Date::operator !=(const Date& d) const {
		return !(*this==d);
	}

	bool Date::operator < (const Date& d) const {
		if (year()<d.year()) {
			return true;
		}
		else if (year()>d.year()) {
			return false;
		}
		else { // same year
			if (month()<d.month()) {
				return true;
			}
			else if (month()>d.month()) {
				return false;
			} else { // same month
				if ( day()<d.day()) {
					return true;
				}
				else {
					return false;
				}
			}
		}
		return false;
	}


	bool Date::operator > (const Date& d) const {
		if (*this==d) {
			return false;
		}
		if (*this<d) {
			return false;
		}
		return true;
	}

	bool Date::operator <=(const Date& d) const {
		if (*this==d) {
			return true;
		}
		return (*this<d);
	}

	bool Date::operator >=(const Date& d) const {
		if (*this==d) {
			return true;
		}
		return (*this>d);
	}
}

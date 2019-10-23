/** 
  * File:     date.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Implementation of the Date class
  */

#include "date.h"

Date::Date(int month, int day) {
	m_month = month;
	m_day = day;
}
int Date::getMonth() {
	return m_month;
}   

int Date::getDay() {
	return m_day;
}

std::string Date::toString() {
	std::string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	std::string to_display = month[m_month-1] + ", " + std::to_string(m_day);
	return to_display;
}
Date Date::nextDay() {
	Date next(m_month, m_day+1);
	return next; 
}

int Date::operator - (Date end) {
	return 229;
}

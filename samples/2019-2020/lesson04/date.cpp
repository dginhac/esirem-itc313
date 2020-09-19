/** 
  * File:     date.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Implementation of the Date class
  */

#include <iostream>

#include "date.h"
/*

Date::Date(int year, int month, int day) {
	std::cout << "Calling Default constructor: " ;
	m_month=1;
	m_day=1;
	m_year = year;
}
*/

Date::Date(int month, int day) {
	m_month=month;
	m_day=day;
	//std::cout << "Building object: " ;
}


int Date::getMonth() const {
	return m_month;
}   
int Date::getDay() const{
	return m_day;
}

void Date::setMonth (int month) {
	if ((month > 0) && (month <=12)) {
		m_month = month;
	}  
	else {
		std::cout << "Error: month " << month << " is not in the range [1-12]" << std::endl; 
	}
}

void Date::setDay (int day) { // to be completed
	if ((day > 0) && (day <=31)) {
		m_day = day;
	}  
	else {
		std::cout << "Error: day " << day << " is not in the range [1-31]" << std::endl; 
	}
}

std::string Date::toString() {
	std::string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	std::string to_display = month[m_month-1] + ", " + std::to_string(m_day);

	return to_display;
}

void Date::display() {
	std::string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	std::string to_display = month[m_month-1] + ", " + std::to_string(m_day);

	std::cout << to_display << std::endl;
}


Date Date::nextDay() {
	// Just for educational purpose. 
	// The function works only for day in the range [0,27]
	Date next;// = Date(m_month,m_day+1);
	return next; 
}

bool Date::before(Date date) {
	bool b=false;
	if (date.getMonth() < m_month) {
		b=true;
	}
	if ((date.getMonth() == m_month) && (date.getDay() < m_day)) {
		b=true;
	}
	return b;
}


int Date::operator - (Date end) {
	return 229;
}

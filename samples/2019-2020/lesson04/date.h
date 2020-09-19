/** 
  * File:     date.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the Date class
  */

#ifndef _date_h
#define _date_h

#include <string>             // required for using string

class Date {                  
public:                       // Always start with public section
	Date(int month=1, int day=1); // Constructor and
	int getMonth() const;           // Member functions are public
	int getDay() const;             // Getters must be defined to access variables        
	void setMonth(int month);
	void setDay(int day);
	Date nextDay();     
	bool before(Date date);      
	std::string toString();
	void display();
	int operator - (Date end);
private:                      // then private section
	int m_month;              // Always define private variables 
	int m_day;	
};
#endif
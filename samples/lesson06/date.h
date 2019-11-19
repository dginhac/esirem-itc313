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
	Date(int month, int day); // Constructor and
	~Date();				  // Destructor
	int getMonth();           // Member functions are public
	int getDay();             // Getters must be defined to access variables        
	Date nextDay();           
	std::string toString();
	int operator - (Date end);
private:                      // then private section
	int m_month;              // Always define private variables 
	int m_day;				  
};
#endif
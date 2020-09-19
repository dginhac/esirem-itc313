// File:     date_main0.cpp 

#include <iostream>
#include "date.h"

int main() {
	Date default_date;
	std::cout << "Default date is " << default_date.getMonth() 
	          << "//" << default_date.getDay() << std::endl;
	
	default_date.setMonth(10);
	std::cout << "New date is " << default_date.toString() << std::endl;

	default_date.display();
	default_date.setMonth(15);

	return 0;
}
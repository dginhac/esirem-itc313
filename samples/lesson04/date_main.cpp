// File:     date_main.cpp 

#include <iostream>
#include "date.h"

int main() {
	Date default_date;
	std::cout << "Default date is " << default_date.toString() << std::endl;
	Date other_default_date = Date();
	std::cout << "Other default date is " << other_default_date.toString() << std::endl;
	return 0;
}
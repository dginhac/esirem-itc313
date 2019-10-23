// File:     date_main2.cpp 

#include <iostream>
#include "date.h"

int main() {
	// May the fourth be with you!
	Date starwars(5,4); 
	std::cout << "Starwars day is " << starwars.toString() << std::endl;
	Date christmas = Date(12,25);
	std::cout << "Christmas day is " << christmas.toString() << std::endl;
	return 0;
}
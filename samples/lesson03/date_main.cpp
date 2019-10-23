// File:     date_main.cpp 

#include <iostream>
#include "date.h"

int main() {
	Date starwars(5,4); // May the fourth be with you!
	std::cout << "Starwars day is " << starwars.toString() << std::endl;
	std::cout << "Starwars day is ";
	std::cout << starwars.getMonth() << "/" << starwars.getDay() << std::endl;	
	Date christmas = Date(12,25);
	std::cout << "Christmas is " << christmas.toString() << std::endl;
	Date next = christmas.nextDay();
	std::cout << "After Christmas is " << next.toString() << std::endl;
	return 0;
}
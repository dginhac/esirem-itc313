// File:     date_main4.cpp 

#include <iostream>
#include "date.h"

int main() {
	// May the fourth be with you!
	Date starwars(5,4); 	
	Date other_starwars_day(starwars);
	std::cout << "Other Starwars day is " << other_starwars_day.toString() << std::endl;

	Date next_starwars_day = starwars.nextDay();
	std::cout << "Next Starwars day is " << next_starwars_day.toString() << std::endl;

	Date a_day(7,14);
	bool b = starwars.before(a_day);
	if (b==true) {
		std::cout << a_day.toString() << " is before " << starwars.toString() << std::endl;
	}
	else {
		std::cout << a_day.toString() << " is after " << starwars.toString() << std::endl;
	}
	return 0;
}
// File:     date_main.cpp 

#include <iostream>
#include "date.h"

int main() {
	Date* starwars = new Date(5,4); // May the fourth be with you!
	std::cout << "Starwars day is " << starwars->toString() << std::endl;
	std::cout << "Starwars day is ";
	std::cout << starwars->getMonth() << "/" << starwars->getDay() << std::endl;
	delete starwars;	
	return 0;
}
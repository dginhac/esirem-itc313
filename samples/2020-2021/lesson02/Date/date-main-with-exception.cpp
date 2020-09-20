/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:47:29+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-07T23:23:01+02:00
 */

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
	try {
		Date not_valid(4,31);
		std::cout << "31/4 is " << not_valid.toString() << std::endl;
	} catch (std::string msg) {
		std::cerr << msg << std::endl;
	}


	return 0;
}

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
	Date back2school(9,1);
	std::cout << "Back2school date is: " << back2school.toString() << std::endl;
	back2school.setDay(30);
	std::cout << "New back2school date is: " << back2school.toString() << std::endl;

	return 0;
}

/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:47:29+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-08T16:53:42+02:00
 */

#include <iostream>
#include "date.h"

int main() {
	Date not_valid(4,31);
	std::cout << "31/4 is " << not_valid.toString() << std::endl;
	return 0;
}

/** 
  * File:     segment_main.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Test Point class
  */

#include <iostream>
#include "point.h"

int main()
{
	Point a(2.3, -5.7);
	std::cout << a.display("a") << std::endl;
	Point origine;
	std::cout << origine.display() << std::endl;
	Point b;
	std::cout << b.display("b") << std::endl;
	b.setX(2.3);
	std::cout << b.display("b") << std::endl;
	b.setY(4.5);
	std::cout << b.display("b") << std::endl;
	b.change(-1.2, 6.789);
	std::cout << b.display("b") << std::endl;
	b.move(3.4, -10.989);
	std::cout << b.display("b") << std::endl;
	double d = a.distance(b);
	std::cout << "[ab] = " << d << std::endl;
	
	return 0;
}

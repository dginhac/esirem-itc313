/** 
  * File:     segment_main.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Test Segment class
  */

#include <iostream>
#include "segment.h"

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

	Segment ab(1,2,-4.1,5.6);
	Segment ab2(a,b);
	Point point_a = ab.getPointA();
	std::cout << point_a.display("point_a") << std::endl;
	Point point_a2 = ab2.getPointA();
	std::cout << point_a2.display("point_a2") << std::endl;
	std::cout << ab.display("ab") << std::endl;
	std::cout << ab2.display("ab2") << std::endl;
	Segment new_s;
	std::cout << new_s.display("new_s") << std::endl;
	new_s.setPointB(b);
	std::cout << new_s.display("new_s") << std::endl;
	std::cout << "length ab = " << ab.length() << std::endl;
	Point ab_middle = ab.middle();
	std::cout << ab_middle.display("ab_middle") << std::endl;
	
	return 0;
}

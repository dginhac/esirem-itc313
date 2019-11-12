/** 
  * File:     polygone_main.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  test Polygon class
  */

#include <iostream>
#include "polygone.h"

int main()
{
	Point A(1,0);
	Point B(2,5);
	Point C(5,9);
	Point D(4,2);


	std::cout << "Polygon" << std::endl;
	Polygon P(4);
	P.updateSummit(0, A);
	P.updateSummit(1, B);
	P.updateSummit(2, C);
	P.updateSummit(3, D);
	P.display();
	std::cout << "Perimeter: " << P.perimeter() << std::endl;

	std::cout << "PolygonArray" << std::endl;
	PolygonArray Pa(4);
	Pa.updateSummit(0, A);
	Pa.updateSummit(1, B);
	Pa.updateSummit(2, C);
	Pa.updateSummit(3, D);
	Pa.display();

	std::cout << "PolygonVector" << std::endl;
	PolygonVect Pv;
	Pv.updateSummit(0, A);
	Pv.updateSummit(1, B);
	Pv.updateSummit(2, C);
	Pv.updateSummit(3, D);
	Pv.display();

	std::cout << "PolygonPtr" << std::endl;
	PolygonPtr Pp(4);
	Pp.updateSummit(0, A);
	Pp.updateSummit(1, B);
	Pp.updateSummit(2, C);
	Pp.updateSummit(3, D);
	Pp.display();

	return 0;
}
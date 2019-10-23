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
	Polygon P(4);

	Point A(1,0);
	Point B(2,5);
	Point C(5,9);
	Point D(4,2);

	P.updateSummit(0, A);
	P.updateSummit(1, B);
	P.updateSummit(2, C);
	P.updateSummit(3, D);

	P.display();

	return 0;
}
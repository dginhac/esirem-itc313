/** 
  * File:     segment.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of Class Segment
  */

#ifndef _segment_h
#define _segment_h

#include "point.h"

class Segment
{
public:
	Segment(double x_a=0.0, double y_a=0.0, double x_b=0.0, double y_b=0.0);
	Segment(Point a, Point b);

	Point getPointA();
	Point getPointB();

	void setPointA(Point p);
	void setPointB(Point p);

	double length();

	Point middle();

	std::string display(std::string name);
	
private:
	Point a;
	Point b;
};

#endif // _segment_h
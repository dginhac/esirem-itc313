/** 
  * File:     point.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Point
  */

#ifndef _point_h
#define _point_h

#include <iostream>

class Point {
public:
	Point(double x=0.0, double y=0.0);
	double getX() const;
	double getY() const;
	void setX(double x);
	void setY(double y);
	std::string display(std::string name = "point");
	void change(double x, double y);
	void move (double dx, double dy);
	double distance (Point p) const;

private:
	double m_x;
	double m_y;
};


#endif // _point_h

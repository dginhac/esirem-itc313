/**
  * File:     segment.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Summary:  Implementation of class Segment
  */

#include "segment.h"
#include <math.h>

namespace geometry {

Segment::Segment(double x_a, double y_a, double x_b, double y_b)
  : _a(x_a, y_a), _b(x_b,y_b) {}

Segment::Segment(Point p_a, Point p_b)
  : _a(p_a), _b(p_b) {}

Point Segment::A() const{
  return _a;
}

Point Segment::B() const {
	return _b;
}

void Segment::A(Point p) {
	_a=p;
}

void Segment::B(Point p) {
	_b=p;
}

void Segment::AB(Point a, Point b) {
  A(a);
  B(b);
}

double Segment::length() const {
	double dx = A().x() - B().x();
	double dy = A().y() - B().y();
	return sqrt (dx*dx + dy*dy);
}

Point Segment::middle() const {
  double x = (A().x()+B().x())/2;
  double y = (A().y()+B().y())/2;
	return Point(x,y);
}

std::string Segment::toString(std::string description) const {
  std::string str;
  if (description != "") {
      str = description + " " + A().toString() + "," + B().toString();
  }
  else {
      str = A().toString() + "," + B().toString();
  }
	return str;
}

} // geometry

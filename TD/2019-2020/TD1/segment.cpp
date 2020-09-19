/** 
  * File:     segment.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Summary:  Implementation of class Segment
  */

#include "segment.h"
#include <math.h>

Segment::Segment(double x_a, double y_a, double x_b, double y_b) : a(x_a, y_a), b(x_b,y_b) {
/* 	a.setX(x_a);  	a.setY(y_a); 	b.setX(x_b); 	b.setX(y_b); */
}

Segment::Segment(Point pa, Point pb) : a(pa), b(pb) {
	/* 	a = pa; b = pb; */
}

Point Segment::getPointA() {
	return a;
}

Point Segment::getPointB() {
	return b;
}

void Segment::setPointA(Point p) {
	a=p;
}

void Segment::setPointB(Point p) {
	b=p;
}

double Segment::length() {
	double dx = a.getX() - b.getX();
	double dy = a.getY() -a.getY();
	return sqrt (dx*dx + dy*dy);
}

Point Segment::middle() {
	Point m;
	m.setX( (a.getX() + b.getX())/2);
	m.setY( (a.getY() + b.getY())/2);
	return m;
}

std::string Segment::display(std::string name) {
	std::string to_display;
	to_display = name + ": (" + std::to_string(a.getX()) + "," + std::to_string(a.getY()) + ")" + "("  + std::to_string(b.getX()) + "," + std::to_string(b.getY()) + ")";
	return to_display;
}

/** 
  * File:     point.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Point
  */

#include <string>
#include <iostream>
#include <cmath>
#include "point.h"

Point::Point(double x, double y) : m_x(x), m_y(y) {
}

double Point::getX() const {
	return m_x;
}

double Point::getY() const {
	return m_y;
}

void Point::setX(double x) {
	m_x = x;
}

void Point::setY(double y) {
	m_y = y;
}

void Point::change(double x, double y) {
	m_x = x;
	m_y = y;
	/* 	this->setX(x); this->setY(y); */
}

void Point::move(double dx, double dy) {
	m_x += dx;
	m_y += dy;
}

double Point::distance(Point p) const {
	double dx = m_x - p.getX(); // We can use p.m_x also
    double dy = m_y - p.getY();
    return sqrt (dx*dx + dy*dy);
}

std::string Point::display(std::string name) {
	std::string to_display = "x_" + name + " = " + std::to_string(m_x)
	                       + " - y_" + name + " = " + std::to_string(m_y);  
	return to_display;
}

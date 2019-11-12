/** 
  * File:     polygone.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of class Polygon
  */

#include <iostream>
#include "polygone.h"

Polygon::Polygon(int size) {
	if ((size >0) && (size << MAX_SIZE)) {
		m_size = size;
		for (int i=0;i<m_size; i++) {
			m_summits[i] = Point(0,0); // not mandatory
		}
	}
	else {
		std::cout << "Error Polygon" << std::endl;
	}
}

void Polygon::updateSummit(int index, const Point &A) {
	if (index < m_size) {
		m_summits[index] = A;
	}
	else {
		std::cout << "Error updateSummit" << std::endl;
	}
}

void Polygon::display() const {
	for (int i=0; i<m_size; i++) {
		std::cout << "(" << m_summits[i].getX() << "," << m_summits[i].getY() << ") ";
	}
	std::cout << std::endl;
}

double Polygon::perimeter() const {
	double l=0.0;
	double dx, dy;
	for (int i=0; i<m_size-1; i++) {
		dx=m_summits[i+1].getX() - m_summits[i].getX();
		dy=m_summits[i+1].getY() - m_summits[i].getY();
		l+=sqrt(dx*dx+dy*dy);
	}
	return l;
}

PolygonArray::PolygonArray(int size) {
	if ((size >0) && (size << MAX_SIZE)) {
		m_size = size;
		/*
		for (int i=0;i<m_size; i++) {
			m_summits.at(i) = Point(0,0);
		}
		*/
	}
	else {
		std::cout << "Error Polygon" << std::endl;
	}
}


void PolygonArray::updateSummit(int index, const Point &A) {
	if (index < m_size) {
		m_summits.at(index) = A;
	}
	else {
		std::cout << "Error updateSummit" << std::endl;
	}
}

void PolygonArray::display() const {
	//for (int i=0; i<m_size; i++) {
	for (Point p : m_summits) {
		std::cout << "(" << p.getX() << "," << p.getY() << ") ";
	}
	std::cout << std::endl;
}



PolygonVect::PolygonVect() {
}



void PolygonVect::updateSummit(int index, const Point &A) {
	if (index < (int)m_summits.size()) {
		m_summits.at(index) = A;
	}
	else {
		m_summits.push_back(A);
	}
}

void PolygonVect::display() const {
	for (Point p : m_summits) {
		std::cout << "(" << p.getX() << "," << p.getY() << ") ";
	}
	std::cout << std::endl;
}





PolygonPtr::PolygonPtr(int size) {
	if (size >0) {
		m_size = size;
		m_summits = new Point[m_size];
		/*
		for (int i=0;i<m_size; i++) {
			*(m_summits+i) = Point(0,0);
		}
		*/
	}
	else {
		std::cout << "Error Polygon" << std::endl;
	}
}

PolygonPtr::~PolygonPtr() {
	std::cout << "Delete Object" << std::endl;
	delete [] m_summits;
}

void PolygonPtr::updateSummit(int index, const Point &A) {
	if (index < m_size) {
		*(m_summits+index) = A;
	}
	else {
		std::cout << "Error updateSummit" << std::endl;
	}
}

void PolygonPtr::display() const {
	for (int i=0; i<m_size; i++) {
		std::cout << "(" << (m_summits+i)->getX() << "," << (m_summits+i)->getY() << ") ";
	}
	std::cout << std::endl;
}
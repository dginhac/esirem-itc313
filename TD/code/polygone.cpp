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
			m_summits[i] = Point(0,0);
		}
	}
	else {
		std::cout << "Error Polygon" << std::endl;
	}
}

void Polygon::updateSummit(int index, Point A) {
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
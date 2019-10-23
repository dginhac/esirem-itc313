/** 
  * File:     polygone.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of class Polygon
  */

#include "point.h"
#define MAX_SIZE 10

class Polygon
{
public:
	Polygon(int size);
	void updateSummit(int index, Point A);
	void display() const; 
	
private:
	int m_size;
	Point m_summits[MAX_SIZE];
};
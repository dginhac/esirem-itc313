/** 
  * File:     polygone.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of class Polygon
  */


#include "point.h"
#include <array>
#include <vector>
#include <cmath>

#define MAX_SIZE 10

class Polygon
{
public:
	Polygon(int size);
	void updateSummit(int index, const Point &A);
	void display() const; 
	double perimeter() const;
	
private:
	int m_size;
	Point m_summits[MAX_SIZE];
};

class PolygonArray
{
public:
	PolygonArray(int size);
	void updateSummit(int index, const Point &A);
	void display() const; 
	
private:
	int m_size;
	std::array<Point, MAX_SIZE> m_summits;
};

class PolygonVect
{
public:
	PolygonVect();
	void updateSummit(int index, const Point &A);
	void display() const; 
	
private:
	std::vector<Point> m_summits;
};

class PolygonPtr
{
public:
	PolygonPtr(int size);
	~PolygonPtr();
	void updateSummit(int index, const Point &A);
	void display() const; 
	
private:
	int m_size;
	Point* m_summits;
};
/*
* @File:    segment.h
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-01 23:05:58
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-01 23:37:01
*/


#ifndef SEGMENT_H
#define SEGMENT_H

#include "point.h"

namespace geometry {
    class Segment
    {
    public:
    	Segment(double x_a=0.0, double y_a=0.0, double x_b=0.0, double y_b=0.0);
    	Segment(Point p_a, Point p_b);
    	Point A() const;
    	Point B() const;
    	void A(Point p);
    	void B(Point p);
        void AB(Point a, Point b);

    	double length() const;
    	Point middle() const;
    	std::string toString(std::string description="") const;
    private:
    	Point _a;
    	Point _b;
    };
} // geometry

#endif // SEGMENT_H

/*
* @File:    point.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-30 13:06:54
* @Summary: Definition of class Point
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-01 23:35:30
*/

#include <string>
#include <cmath>
#include "point.h"

namespace geometry {

    Point::Point() : _x(0.0), _y(0.0) {}
    Point::Point(double x, double y) : _x(x), _y(y) {}

    double Point::x() const {
        return _x;
    }
    double Point::y() const {
        return _y;
    }
    void Point::x(double x) {
        _x = x;
    }
    void Point::y(double y) {
        _y = y;
    }
    void Point::xy(double xn, double yn) {
        x(xn);
        y(yn);
    }
    void Point::move(double dx, double dy) {
        xy(x()+dx,y()+dy);
    }

    double Point::distance(Point p) const {
        double dx = x() - p.x();
        double dy = y() - p.y();
        return sqrt(dx*dx + dy*dy);
    }

    std::string Point::toString(std::string description) const {
        std::string str;
        if (description != "") {
            str = description + " (" + std::to_string(x()) + "," + std::to_string(y()) + ")";
        }
        else {
            str = "(" + std::to_string(x()) + "," + std::to_string(y()) + ")";
        }
        return str;
     }

     Point Point::symmetric(Point center) const {
        return Point(2*center.x()-x(), 2*center.y()-y());
     }

     void Point::reset() {
        x(0);
        y(0);
     }
} // geometry
/*
* @File:    point.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-30 13:06:54
* @Summary: Definition of class Point
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-09 08:24:55
*/

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
    void Point::updateX(double x) {
        _x = x;
    }
    void Point::updateY(double y) {
        _y = y;
    }
    void Point::update(double x, double y) {
        updateX(x);
        updateY(y);
    }
    void Point::move(double dx, double dy) {
        update(x()+dx,y()+dy);
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
        double xs = 2*center.x()-x();
        double ys = 2*center.y()-y();
        Point p_sym(xs, ys);
        return p_sym;
     }
     /*
     Point Point::symmetric() const {
        return Point(-x(), -y());
     }
     */

     void Point::reset() {
        update(0,0);
     }
} // geometry
/*
* @File:    point.h
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-30 13:06:54
* @Summary: Declaration of class Point
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-01 23:27:43
*/

#ifndef POINT_H
#define POINT_H

#include <string>

namespace geometry {

    class Point
    {
    public:
        Point();
        Point(double x, double y);

        double x() const;
        double y() const;
        void x(double x);
        void y(double y);
        void xy(double xn, double yn);
        void move(double dx, double dy);
        double distance(Point p) const;
        std::string toString(std::string description="") const;

        void reset();
        Point symmetric(Point center) const;

    private:
        double _x;
        double _y;
    };

} // geometry

#endif // POINT_H


/*
* @File:    app-main.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-30 13:25:42
* @Summary: test Point class
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-01 23:30:02
*/

#include <iostream>
#include "point.h"
#include "segment.h"

using geometry::Point;
using geometry::Segment;


int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "####### Point #######" << std::endl;
    geometry::Point a;
    std::cout << a.toString() << std::endl;
    geometry::Point b(4, 5);
    std::cout << b.toString() << std::endl;
    Point c(-3.2, 4.7);
    std::cout << c.toString() << std::endl;
    c.xy(7, 9);
    std::cout << c.toString("c") << std::endl;
    c.move(0.2, -0.5);
    std::cout << c.toString("c") << std::endl;
    c.xy(6, 10);
    std::cout << c.toString("c") << std::endl;
    std::cout << "distance = " << c.distance(b) << std::endl;
    Point d=b.symmetric(c);
    std::cout << b.toString("b") << std::endl;
    std::cout << c.toString("c") << std::endl;
    std::cout << d.toString("d") << std::endl;
    c.reset();
    d=b.symmetric(c);
    std::cout << d.toString("d") << std::endl;

    std::cout << "####### Segment #######" << std::endl;
    a.x(1);
    a.y(2);
    b.xy(-4.1, 5.6);
    std::cout << a.toString("a") << std::endl;
    std::cout << b.toString("b") << std::endl;
    Segment ab(1,2,-4.1,5.6);
    Segment ab2(a,b);
    Point point_a = ab.A();
    std::cout << point_a.toString("point_a") << std::endl;
    Point point_a2 = ab2.A();
    std::cout << point_a2.toString("point_a2") << std::endl;
    std::cout << ab.toString("ab") << std::endl;
    std::cout << ab2.toString("ab2") << std::endl;
    Segment new_s;
    std::cout << new_s.toString("new_s") << std::endl;
    new_s.B(b);
    std::cout << new_s.toString("new_s") << std::endl;
    std::cout << "length ab = " << ab.length() << std::endl;
    Point ab_middle = ab.middle();
    std::cout << ab_middle.toString("ab_middle") << std::endl;

    return 0;
}
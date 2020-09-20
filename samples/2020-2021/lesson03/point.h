/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T11:45:47+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T10:33:56+02:00
 */

#ifndef POINT_H
#define POINT_H



struct Point {
   float x; // x and y are public
   float y; // No need to write getters/setters
   Point(float x=0.0, float y=0.0) : x(x), y(y) {}
   void move(float dx, float dy) {
      x+= dx;
      y+= dy;
   }
};

#endif // POINT_H

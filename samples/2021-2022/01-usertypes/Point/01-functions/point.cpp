/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T11:45:47+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-18T10:33:56+02:00
 */

#include "point.h"

Point::Point(float x, float y) : x(x), y(y) {}
void Point::move(float dx, float dy) {
   x+= dx;
   y+= dy;
}

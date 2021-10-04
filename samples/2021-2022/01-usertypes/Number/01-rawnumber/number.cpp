/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T13:04:30+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T14:05:53+02:00
 */

#include <iostream>
#include "number.h"

Rawnumber::Rawnumber(int number) : _type(Type::integer), _number({.integer=number}) {
} 
Rawnumber::Rawnumber(float number) : _type(Type::real), _number({.real=number}) {
}  
Number Rawnumber::number() {
   return _number;
}
Type Rawnumber::type() {
   return _type;
}

void Rawnumber::display() {
    switch (_type) {
      case Type::real:
         std::cout << "Real: " << _number.real << '\n';
      break;
      case Type::integer:
         std::cout << "Integer: " << _number.integer << '\n';
      break;
   }
}


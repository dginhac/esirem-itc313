/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T13:04:30+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T14:05:53+02:00
 */

#ifndef NUMBER_H
#define NUMBER_H

union Number {      // The purpose of union is to save memory 
      float real;   // by using the same memory region for storing 
      int integer;  // different objects at different times.
};

#endif // NUMBER_H





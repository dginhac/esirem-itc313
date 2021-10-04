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
      int integer;  // by using the same memory region for storing 
      float real;  // different objects at different times.
};

enum class Type {
      integer, real 
};

class Rawnumber {
public:
      Rawnumber(int number=0);
      Rawnumber(float number);
      void display(); 
      Number number();
      Type type();

private:
      Type _type;
      Number _number;
      
};

#endif // NUMBER_H





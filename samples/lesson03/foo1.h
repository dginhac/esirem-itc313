/** 
  * File:     foo1.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Difference between private or public 
  */

#ifndef _foo_h
#define _foo_h

class Foo1 {   
public:
	int x1; // x is public
};

class Foo2 {   
private:
	int x2; // x is private
}; 
#endif
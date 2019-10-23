/** 
  * File:     foo.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the Foo Class  
  */

#ifndef _foo_h
#define _foo_h

class Foo {   // Use PascalCase for naming class
public:
	Foo(parameters); // Constructor
	returnType method1(parameters); // member functions
	returnType method2(parameters);

private:
	type variable1; // member variables
	type variable2;
}; // do not forget the semicolon at the end of the class
#endif
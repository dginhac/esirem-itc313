/** 
  * File:     book_test.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  test file for book class
  */

#include "book.h"

int main()
{
	Book b1("The Hitchhiker’s Guide to the Galaxy",
			"Douglas Adams",
			1979,
			SciFi);
	b1.display();
	b1.setIdentifier(42);
	b1.display();

	return 0;
}
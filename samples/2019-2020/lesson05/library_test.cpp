/** 
  * File:     book_test.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  test file for library class
  */

#include <iostream>
#include "library.h"

int main()
{
	Book b1("The Hitchhiker’s Guide to the Galaxy",
			"Douglas Adams", 1979, SciFi, 42);
	Book b2("The mystery of the great pyramid",
			"Edgar P. Jacobs", 1954, Comic, 46);
	Book b3("I, Robot",	
		    "Isaac Asimov", 1950, SciFi, 3);

	Library lib("My lib");
	lib.addBook(b1);
	lib.addBook(b2);
	lib.addBook(b3);
	lib.addBook("XXX", "YYY", 1990, Arts, 908);
	
	lib.printAd("In main", 1);
	lib.display();
	std::cout << "Updating book 1" << std::endl;
	Book& b10=lib.getBook(1);
	Book b11=lib.getBook(1);
	std::cout << "In Main getBook by ref: " << &b10 << std::endl;
	std::cout << "In Main getBook by value: " << &b11 << std::endl;

	lib.updateBookAuthor(lib.getBook(1),"Edgar Jacobs");
	lib.display();

	return 0;
}
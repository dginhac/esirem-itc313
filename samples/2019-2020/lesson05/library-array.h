/** 
  * File:     library.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Library class declaration for managing books
  */

#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "book.h"

define MAXSIZE 1000

class Library {
public:
	Library(std::string name="Default library");
private:
	Book m_books[MAXSIZE];
};

class Library {
public:
	Library(std::string name="Default library");
private:
	std::array<Book,MAXSIZE> m_books;
};

class Library {
public:
	Library(std::string name="Default library");
private:
	std::vector<Book> m_books;
};


#endif // LIBRARY_H



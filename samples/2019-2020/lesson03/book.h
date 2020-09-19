/** 
  * File:     book.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the Book Class  
  */
 
#ifndef _book_h
#define _book_h

#include <string>

class Book {
public:
	Book(std::string title, std::string author, int year, std::string classification, int identifier);
	std::string getTitle();
	std::string getAuthor();
	int getYear();
	std::string getClassification();
	int getIdentifier();
private:
	std::string m_title;
	std::string m_author;
	int m_year;
	std::string m_classification;
	int m_identifier;

};

#endif



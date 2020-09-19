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

enum taxonomy {Literature, Science, Arts, SciFi, Comic, History, Politics, Economy, Religion};

class Book {
public:
	Book(std::string title, std::string author, int year, 
		taxonomy classification , int identifier=-1);
	std::string getTitle() const;
	std::string getAuthor() const;
	int getYear() const;
	taxonomy getClassification() const;
	int getIdentifier() const;
	void updateBook(std::string title, std::string author, int year, taxonomy classification);
	void setIdentifier(int id);
	void updateAuthor(std::string author);
	void display() const;
private:
	std::string m_title;
	std::string m_author;
	int m_year;
	taxonomy m_classification;
	int m_identifier;
};

#endif



/** 
  * File:     book.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Code of the Book Class  
  */ 


#include <iostream>
#include "book.h"

Book::Book(std::string title, std::string author, int year, taxonomy classification, int identifier) {
	m_title = title;
	m_author = author;
	m_year = year;
	m_classification = classification;
	m_identifier = identifier;
}
std::string Book::getTitle() const {
	return m_title;
}
std::string Book::getAuthor() const {
	return m_author;
}
int Book::getYear()  const{
	return m_year;
}
taxonomy Book::getClassification() const{
	return m_classification;
}
int Book::getIdentifier() const {
	return m_identifier;
}
void Book::updateBook(std::string title, std::string author, int year, taxonomy classification) {
	m_title = title;
	m_author = author;
	m_year = year;
	m_classification = classification;
}
void Book::setIdentifier(int id) {
	m_identifier = id;
}
void Book::display() const {
	std::cout << "Book #" << m_identifier << ": " << m_title << " - " << m_author << " (" << m_year << ")" << std::endl;
}
void Book::updateAuthor(std::string author){
	m_author = author;
}

void Book::updateTitle(std::string title){
	m_title = title;
}



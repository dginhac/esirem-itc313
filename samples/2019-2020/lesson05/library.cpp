/** 
  * File:     library.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Library class definition for managing books
  */

#include <iostream>

#include <string>
#include "library.h"

Library::Library(std::string name) {
	m_name = name;
}
std::string Library::getName() const {
	return m_name;
}
void Library::addBook(Book b) {
	m_books.push_back(b);
}

void Library::addBook(std::string title, 
	std::string author, 
	int year, taxonomy classification , 
	int identifier) {
	Book b(title, author, year, classification, identifier);
	m_books.push_back(b);
}


int Library::getBooksNumber() const {
	return m_books.size();
}
void Library::display() const {
	for (Book b: m_books) {
		b.display();
	}
}
Book& Library::getBook(int i) {
	std::cout << "In getBook: " << &m_books[i] << std::endl;
	return m_books[i];
}
void Library::updateBookAuthor(Book& b, std::string author) {
	std::cout << "In update: " << &b << std::endl;
	b.display();
	b.updateAuthor(author);
	b.display();
}

void Library::printAd(std::string msg, int i) {
	std::cout << msg << ": " << &m_books[i] << std::endl;
}
/*
void Library::updateBookAuthor(int id, std::string author) {
	
	for (int i=0; i<m_books.size(); i++) {
		if (m_books.at(i).getIdentifier()== id) {
			std::cout << "update" << std::endl;
			m_books.at(i).updateAuthor(author);
		}
	}
	
	for (Book &b: m_books) {
		if (b.getIdentifier() == id) {
			std::cout << "update" << std::endl;
			b.updateAuthor(author);
		}
	}
}
*/
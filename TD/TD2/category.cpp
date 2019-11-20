/** 
  * File:     category.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Implementation of class Category
  */

#include "category.h"

// Question 2
Category::Category(int id, std::string title) {
	m_id = id;
	m_title = title;
}

int Category::get_id() const {
	return m_id;
}

std::string Category::get_title() const {
	return m_title;
}

void Category::display() const {
	std::cout << m_id << "\t\t" << m_title << std::endl;
}
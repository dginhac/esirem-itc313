/** 
  * File:     todo.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Implementation of class Todo
  */

#include "todo.h"


// Question 1

Todo::Todo(int id, std::string title, std::string description, bool status) {
	m_id = id;
	m_title = title;
	m_description = description;
	m_status = status;
}

void Todo::display() {
	std::cout << m_id << "\t\t" << m_title << "\t\t" << m_description << "\t\t" << m_status << std::endl;
}

int Todo::get_id() const {
	return m_id;
}

std::string Todo::get_title() const {
	return m_title;
}

std::string Todo::get_description() const {
	return m_description;
}

bool Todo::get_status() const {
	return m_status;
}

void Todo::update_status(bool status) {
	m_status = status;
}


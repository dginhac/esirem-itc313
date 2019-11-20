/** 
  * File:     todolist.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Implementation of todolist class
  */

#include "todolist.h"

// Question 1

Todolist::Todolist() {

}

void Todolist::display_todos() {
	std::cout << "Display Todo list" << std::endl;
	std::cout << "ID \t\t Todo\t\t Description \t\t Status" << std::endl;
	for (Todo& t: m_todos) {
		t.display();
	}
	std::cout << "_____________________________________________________________" << std::endl << std::endl;
}

bool Todolist::add_todo(const Todo& t) {
	std::cout << "Adding Todo #" << t.get_id() << "... " ;
	m_todos.push_back(t);
	std::cout << "OK" << std::endl;
	return true;
}

bool Todolist::update_status(int id, bool status) {
	std::cout << "Updating status Todo #" << id << "... " ;
	for (auto& t: m_todos) {
		if (t.get_id() == id) {
			t.update_status(status);
			std::cout << "OK" << std::endl;
			return true;
		}
	}
	std::cout << "NOK" << std::endl;
	return false;
}

bool Todolist::remove_todo(int id) {
	std::cout << "Removing Todo #" << id << "... " ;
	for  (auto it = m_todos.begin(); it<m_todos.end(); it++) {
		if (it->get_id() == id) {
			it = m_todos.erase(it);
			std::cout << "OK" << std::endl;
			return true;
		}
	}
 
	/*
	int position=0;
	for (Todo& t: m_todos) {
		if (t.get_id() == id) {
			m_todos.erase(m_todos.begin()+position);
			std::cout << "ok" << std::endl;
			return true;
		}
		position++;
	}
	*/
	std::cout << "NOK" << std::endl;
	return false;
}

// Question 2

bool Todolist::add_category(const Category& c) {
	std::cout << "Adding Category #" << c.get_id() << "... " ;
	m_categories.push_back(c);
	std::cout << "OK" << std::endl;
	return true;
}

void Todolist::display_categories() {
	std::cout << "Display Category list" << std::endl;
	std::cout << "ID \t\t Category" << std::endl;
	for (Category& c: m_categories) {
		c.display();
	}
	std::cout << "_____________________________________________________________" << std::endl << std::endl;
}

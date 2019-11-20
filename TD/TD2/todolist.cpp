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

void Todolist::display() {
	std::cout << "ID \t\t Todo\t\t Description \t\t Status" << std::endl;
	for (Todo& t: m_list) {
		t.display();
	}
	std::cout << "_____________________________________________________________" << std::endl;
}

bool Todolist::add_todo(const Todo& t) {
	std::cout << "Add Todo " << t.get_id() << "... " ;
	m_list.push_back(t);
	std::cout << "ok" << std::endl;
	return true;
}

bool Todolist::update_status(int id, bool status) {
	std::cout << "Update status Todo " << id << "... " ;
	for (auto& t: m_list) {
		if (t.get_id() == id) {
			t.update_status(status);
			std::cout << "ok" << std::endl;
			return true;
		}
	}
	std::cout << "nok" << std::endl;
	return false;
}

bool Todolist::remove_todo(int id) {
	std::cout << "Remove Todo " << id << "... " ;
	for  (auto it = m_list.begin(); it<m_list.end(); it++) {
		if (it->get_id() == id) {
			it = m_list.erase(it);
			std::cout << "ok" << std::endl;
			return true;
		}
	}
 
	/*
	int position=0;
	for (Todo& t: m_list) {
		if (t.get_id() == id) {
			m_list.erase(m_list.begin()+position);
			std::cout << "ok" << std::endl;
			return true;
		}
		position++;
	}
	*/
	std::cout << "nok" << std::endl;
	return false;
}


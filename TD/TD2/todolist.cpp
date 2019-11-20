/** 
  * File:     todolist.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Implementation of todolist class
  */

#include "todolist.h"

// Question 1

/** 
  * Description: The constructor 
  *
  */ 
Todolist::Todolist() {
	// Nothing to do
}

/** 
  * Description: Create a new todo and insert it at the end of the list 
  *
  * @param title the title of the task
  * @param description the detailled description of the task
  * @param status the status of the task
  */
void Todolist::add_todo(std::string title, std::string description, bool status) {
	static int count=1;
	int id = count++;
	std::cout << "Adding Todo #" << id << " ... " ;
	Todo t(id, title, description, status);
	m_todos.push_back(t);
	std::cout << "OK" << std::endl;
}

/** 
  * Description: Display all the todos
  *
  */
void Todolist::display_todos() const {
	std::cout << "_____________________________________________________________" << std::endl;
	std::cout << "Displaying the Todo list" << std::endl;
	std::cout << "ID\tStatus\tTodo (with Description)" << std::endl;
	for (const Todo& t: m_todos) {
		t.display();
	}
	std::cout << "_____________________________________________________________" << std::endl << std::endl;
}

/** 
  * Description: Find a todo using its uid
  *
  * @param uid the unique identifier of the task
  * @return the index of the task if found, -1 otherwise 
  */
int Todolist::find_todo(int uid) const {
	for (unsigned long index=0; index<m_todos.size();index++) {
		if (m_todos[index].get_uid() == uid) {
			return index;
		}
	}
	return -1;
}
/** 
  * Description: Find a todo using its title
  *
  * @param title the title of the task
  * @return the index of the task if found, -1 otherwise 
  */
int Todolist::find_todo(std::string title) const {
	for (unsigned long index=0; index<m_todos.size();index++) {
		if (m_todos[index].get_title() == title) {
			return index;
		}
	}
	return -1;
}

/** 
  * Description: Display a todo using its uid
  *
  * @param uid the unique identifier of the task 
  */
void Todolist::display_todo(int uid) const {
	int index = find_todo(uid);
	if (index != -1) {
		m_todos[index].display();
	}
	else {
		std::cout << "Error: Todo #" << uid << " does not exist" << std::endl;
	}
}

/** 
  * Description: Display a todo using its title
  *
  * @param title the title of the task
  */
void Todolist::display_todo(std::string title) const {
	int index = find_todo(title);
	if (index != -1) {
		m_todos[index].display();
	}
	else {
		std::cout << "Error: Todo \"" << title << "\" does not exist" << std::endl;
	}
}

/** 
  * Description: Update the status of a todo using its uid
  *
  * @param uid the Unique Identifier of a task 
  * @param status the new status of the task
  * @return true if task has been updated, false otherwise
  */
bool Todolist::update_todo_status(int uid, bool status) {
	int index = find_todo(uid);
	std::cout << "Updating status Todo #" << uid << " ... " ;
	if (index !=-1) {
		m_todos[index].update_status(status);
		std::cout << "OK" << std::endl;
		return true;
	}
	std::cout << "NOK" << std::endl;
	return false;
}

/** 
  * Description: Update the status of a todo using its title
  *
  * @param title the title of a task 
  * @param status the new status of the task
  * @return true if task has been updated, false otherwise
  */
bool Todolist::update_todo_status(std::string title, bool status) {
	int index = find_todo(title);
	std::cout << "Updating status Todo \"" << title << "\" ... " ;
	if (index !=-1) {
		m_todos[index].update_status(status);
		std::cout << "OK" << std::endl;
		return true;
	}
	std::cout << "NOK" << std::endl;
	return false;
}

/** 
  * Description: Remove a todo from its id
  *
  * @param uid the Unique identifier of a task
  * @return 
  */

bool Todolist::remove_todo(int uid) {
	int index = find_todo(uid);
	std::cout << "Removing Todo #" << uid << " ... " ;
	if (index !=-1) {
		//m_todos.erase(m_todos.begin()+index);
		return true;
	}
	std::cout << "NOK" << std::endl;
	return false;
}


// Question 2

bool Todolist::add_category(const Category& c) {
	std::cout << "Adding Category #" << c.get_id() << " ... " ;
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

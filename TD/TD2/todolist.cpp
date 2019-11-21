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
void Todolist::add_todo(const std::string& title, const std::string& description, bool status) {
	static int count=1;
	int id = count++;
	std::cout << "Adding Todo #" << id << " ... " ;
	Todo *t = new Todo(id, title, description, status);
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
	for (Todo* t: m_todos) {
		t->display();
	}
	std::cout << "_____________________________________________________________" << std::endl << std::endl;
}

/** 
  * Description: Find a todo using its uid
  *
  * @param uid the unique identifier of the task
  * @return a pointer on task if found, nullptr otherwise 
  */
Todo*  Todolist::find_todo(int uid) const {
	for (Todo *todo: m_todos) {
		if (todo->get_uid() == uid) {
			return todo;
		}
	}
	return nullptr;
}

/** 
  * Description: Find a todo using its title
  *
  * @param title the title of the task
  * @return a pointer on task if found, nullptr otherwise 
  */
Todo* Todolist::find_todo(const std::string& title) const {
	for (Todo *todo: m_todos) {
		if (todo->get_title() == title) {
			return todo;
		}
	}
	return nullptr;
}

/** 
  * Description: Display a todo using its uid
  *
  * @param uid the unique identifier of the task 
  */
void Todolist::display_todo(const int uid) const {
	Todo* todo = find_todo(uid);
	if (todo != nullptr) {
		todo->display();
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
void Todolist::display_todo(const std::string& title) const {
	Todo* todo = find_todo(title);
	if (todo != nullptr) {
		todo->display();
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
	std::cout << "Updating status Todo #" << uid << " ... " ;
	Todo* todo = find_todo(uid);
	if (todo != nullptr) {
		todo->update_status(status);
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
bool Todolist::update_todo_status(const std::string& title, bool status) {
	std::cout << "Updating status Todo \"" << title << "\" ... " ;
	Todo* todo = find_todo(title);
	if (todo != nullptr) {
		todo->update_status(status);
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
  * @return true if task is deleted, false otherwise
  */
bool Todolist::remove_todo(int uid) {
	std::cout << "Removing Todo #" << uid << " " << " ... " ;
	for (unsigned long i=0; i<m_todos.size(); i++) {
		if (m_todos.at(i)->get_uid() == uid) {
			delete(m_todos.at(i));
			m_todos.erase(m_todos.begin()+i);
			std::cout << "OK" << std::endl;
			return true;
		}
	}
	std::cout << "NOK" << std::endl;
	return false;
	/*
	for (auto it=m_todos.begin(); it!=m_todos.end(); it++) {
		if ((*it)->get_uid() == uid) {
			delete (*it);
			it = m_todos.erase(it);
			return true;
		}
	}
	*/
}


// Question 2

/** 
  * Description: Add a new category
  *
  * @param title the title of the category
  * @return true
  */
bool Todolist::add_category(const std::string &title) {
	std::cout << "Adding Category \""  << title << "\" ... " ;
	Category c(title);
	m_categories.push_back(c);
	std::cout << "OK" << std::endl;
	return true;
}

/** 
  * Description: Display the list of categories
  *
  */
void Todolist::display_categories() const {
	std::cout << "_____________________________________________________________" << std::endl;
	std::cout << "Display Category list" << std::endl;
	for (const Category& c: m_categories) {
		c.display();
	}
	std::cout << "_____________________________________________________________" << std::endl << std::endl;
}


/** 
  * Description: Display a category from its title
  *
  * @param title the title of the category
  * @return 
  */
void Todolist::display_category(const std::string& title) const {
	bool err=true;;
	for (const Category& category: m_categories) { 
		if (category.get_title() == title) {
			category.display();
			err=false;
		}
	}
	if (err)
		std::cout << "Error: Category \"" << title << "\" does not exist" << std::endl;
}


/** 
  * File:     todolist.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of todolist class
  */

#ifndef _todolist_
#define _todolist_ 

#include <iostream>
#include <vector>
#include "todo.h"
#include "category.h"

class Todolist
{
public:
	// Question 1
	Todolist();
	void add_todo(std::string title, std::string description, bool status=false);

	void display_todos() const;
	
	void display_todo(int id) const;
	void display_todo(std::string title) const;




	Todo& get_todo(int id);

	bool update_todo_status(int uid, bool status);
	bool update_todo_status(std::string title, bool status);


	
	bool remove_todo(int id);
	// Question 2
	bool add_category(const Category &c);
	void display_categories();

	
private:
	// Question 1
	std::vector<Todo> m_todos;
	// Question 2
	std::vector<Category> m_categories;

	int find_todo(int id) const;
	int find_todo(std::string title) const;
};

#endif
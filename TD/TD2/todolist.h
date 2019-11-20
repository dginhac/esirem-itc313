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
	void display_todos();
	bool add_todo(const Todo &t);
	bool update_status(int id, bool status);
	bool remove_todo(int id);
	// Question 2
	bool add_category(const Category &c);
	void display_categories();
	
private:
	// Question 1
	std::vector<Todo> m_todos;
	// Question 2
	std::vector<Category> m_categories;
};

#endif
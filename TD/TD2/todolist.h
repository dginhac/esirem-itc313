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
	void add_todo(const std::string& title, const std::string& description, const std::string& category="", bool status=false);

	void display_todos() const;
	void display_todo(const int id) const;
	void display_todo(const std::string& title) const;
	bool update_todo_status(int uid, bool status);
	bool update_todo_status(const std::string& title, bool status);
	bool remove_todo(int id);

	// Question 2
	bool add_category(const std::string& title);
	void display_categories() const;
	void display_category(const std::string& title) const;
	bool update_todo_category(const std::string& title, const std::string& category);

	void display_todos(const std::string& category) const;
	bool remove_todo(const std::string& title);


private:
	// Question 1
	std::vector<Todo*> m_todos;
	// Question 2
	std::vector<Category> m_categories;

	Todo* find_todo(int id) const;
	Todo* find_todo(const std::string& title) const;
	Category* find_category(const std::string& title);
};

#endif
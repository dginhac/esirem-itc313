/** 
  * File:     todolist.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of todolist class
  */

#ifndef _todolist_
#define _todolist_ value

#include <iostream>
#include <vector>
#include "todo.h"

class Todolist
{
public:
	Todolist();
	void display();
	bool add_todo(const Todo &t);
	bool update_status(int id, bool status);
	bool remove_todo(int id);

	
private:
	std::vector<Todo> m_list;
};

#endif
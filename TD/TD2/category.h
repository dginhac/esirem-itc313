/** 
  * File:     category.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of class Category
  */

#ifndef _category_
#define _category_


#include "todo.h"
#include <iostream>
#include <string>
#include <vector>


// Required to declare Todo because Category uses Todo
class Todo;





class Category {
public:
	// Question 2
	Category(int id, std::string title);
	int get_id() const;
	std::string get_title() const;
	void display() const;

	
private:
	// Question 2
	int m_id;
	std::string m_title;
	std::vector<Todo*> m_list;
};


#endif



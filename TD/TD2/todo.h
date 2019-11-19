/** 
  * File:     todo.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of class Todo
  */

#ifndef _todo_
#define _todo_ value

#include <iostream>
#include <string>


class Todo
{
public:
	Todo(int id, std::string title, std::string description, bool status=false);
  void display();
  int get_id() const;
  std::string get_title() const;
  std::string get_description() const;
  bool get_status() const;
  
  void update_status(bool status);
	
private:
  int m_id;
	std::string m_title;
	std::string m_description;
	bool m_status;
};

#endif
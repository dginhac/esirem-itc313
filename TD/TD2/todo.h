/**
  * File:     todo.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of class Todo
  */

#ifndef _todo_
#define _todo_

#define DEBUG 0


#include <iostream>
#include <string>
#include "category.h"


// Required to declare Category because Todo uses Category
class Category;


class Todo
{
public:
  // Question 1
	Todo(int id, std::string title, std::string description, bool status=false, Category* category=nullptr);
  void display() const;


  int get_uid() const;
  std::string get_title() const;
  std::string get_description() const;
  bool get_status() const;
  void update_status(bool status);
  // Question 2
  void update_category(Category* category);
  std::string get_category() const;



private:
  // Question 1
  const int m_uid;
	std::string m_title;
	std::string m_description;
	bool m_status;
  // Question 2
  Category *m_category;

};

#endif
/**
* File:     todo.cpp
* Author:   D. Ginhac (dginhac@u-bourgogne.fr)
* Date:     Fall 2019
* Course:   C-C++ Programming / Esirem 3A Informatique Electronique
* Summary:  Implementation of class Todo
*/

#include "todo.h"


// Question 1
/**
* Description: The constructor
*
* @param uid the Unique identifier of task
* @param title the title of the task
* @param description the detailled description of the task
* @param status the status of the task
*/
Todo::Todo(int uid, std::string title, std::string description, bool status, Category* category) : m_uid(uid) {
	m_title = title;
	m_description = description;
	m_category = category;
	m_status = status;
}

/**
* Description: Display a todo
*
*/
void Todo::display() const {
	std::string status="Todo";
	std::string category="NO CATEGORY";
	if (m_status) {
	  status = "Done";
	}
  if (m_category) {
	category = m_category->get_title();
}
if (DEBUG)
	std::cout << this << " #" << m_uid << "\t" << status << "\t" << m_title << " (" << category << ") - " << m_description << std::endl;
else
	std::cout << "#" << m_uid << "\t" << status << "\t" << m_title << " (" << category << ") - " << m_description << std::endl;
}

/**
* Description: Returns the uid of the task
*
* @return uid
*/
int Todo::get_uid() const {
	return m_uid;
}

/**
* Description: Returns the title of the task
*
* @return title
*/
std::string Todo::get_title() const {
	return m_title;
}

/**
* Description: Update status of a task
*
* @param status the new status of the task
*/
void Todo::update_status(bool status) {
	m_status = status;
}

// Question 2

/**
* Description: Update category of a task
*
* @param category the new category of the task
*/
void Todo::update_category(Category* category) {
	m_category = category;
}

/**
* Description: Get category of a task
*
*/
std::string Todo::get_category() const {
	if (m_category != nullptr)
		return m_category->get_title();
	else
		return "NO CATEGORY";
}





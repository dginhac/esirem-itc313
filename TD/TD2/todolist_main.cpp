/** 
  * File:     todolist-test.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Program for testing the todo list
  */

#include "todolist.h"
#include "category.h"



int main()
{
	// Create an empty todo list
	Todolist my_todolist;
	// Add some todos using only a title and a description, default status is todo
	my_todolist.add_todo("Errands", "Buy chocolate");
	my_todolist.add_todo("Running", "Training for next month race");
	my_todolist.add_todo("C++ tutorial", "Write the code of todolist app");
	my_todolist.add_todo("Cinema", "Do not forget to see the Rise of Skywalker");
	my_todolist.add_todo("Christmas trip", "Buy train tickets");
	// Display all the todos
	my_todolist.display_todos();
	// Display the todo #3 (id is automatically generated when task is created)
	my_todolist.display_todo(3);
	// Display the todo entitled "Running"
	my_todolist.display_todo("Running");
	// Update status of todo #3
	my_todolist.update_todo_status(3, true);
	// Update status of todo "TD C++"
	my_todolist.update_todo_status("TD C++", true);

	// Display all the todos
	my_todolist.display_todos();

	

	/*

	

	my_todolist.display_todo(10);

	my_todolist.display_todos();
	
	my_todolist.remove_todo(4);
	my_todolist.display_todos();
	my_todolist.add_todo("Exam C++", "Corriger copies");
	my_todolist.display_todos();


	// Question 2
	int cpt_category =1;
	Category c1(cpt_category++, "Perso");
	Category c2(cpt_category++, "Pro");
	Category c3(cpt_category++, "Loisirs");

	my_todolist.add_category(c1);
	my_todolist.add_category(c2);
	my_todolist.add_category(c3);

	my_todolist.display_categories();

*/


	return 0;
}
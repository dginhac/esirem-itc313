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
	// Display the todo #5 (id is automatically generated when task is created)
	my_todolist.display_todo(5);
	// Display the todo entitled "Running"
	my_todolist.display_todo("Running");
	// Update status of todo #5
	my_todolist.update_todo_status(5, true);
	// Update status of todo "TD C++"
	my_todolist.update_todo_status("C++ tutorial", true);
	// Remove todo #4
	my_todolist.remove_todo(5);
	// Display all the todos
	my_todolist.display_todos();

	// Question 2
	// Add categories
	my_todolist.add_category("Pro");
	my_todolist.add_category("Private");
	my_todolist.add_category("Sports");
	// Display categories
	my_todolist.display_categories();
	// Display a category from its title
	my_todolist.display_category("Private");
	my_todolist.display_category("Hobbies");

	// Update the category of a todo with an existing category
	my_todolist.update_todo_category("Running", "Sports");
	my_todolist.update_todo_category("C++ tutorial", "Pro");
	// Update the category of a todo with a new category
	my_todolist.update_todo_category("Cinema", "Hobbies");
	my_todolist.update_todo_category("Errands", "Private");

	// Add a new todo with full data
	my_todolist.add_todo("Cooking", "Make a chocolate cake", "Private");
	my_todolist.add_todo("Cinema", "Buy tickets", "Hobbies");
	my_todolist.add_todo("Cinema", "See Frozen 2", "Hobbies");

	// Display categories
	my_todolist.display_categories();

	// Display all the todos
	my_todolist.display_todos();

	// Display the todos of the category Hobbies
	my_todolist.display_todos("Hobbies");

	return 0;
}
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
	// Question 1
	Todolist a_faire;
	
	int cpt_todo = 1;
	Todo t1(cpt_todo++, "Courses", "Aller faire les courses à Carrefour");
	Todo t2(cpt_todo++, "Running","Entrainement preparation course");
	Todo *t3 = new Todo(cpt_todo++, "Cinema", "Aller voir le dernier StarWars");
	Todo *t4 = new Todo(cpt_todo++, "TD C++", "Ecrire le code de l'application todo list");
	a_faire.add_todo(t1);
	a_faire.add_todo(t2);
	a_faire.add_todo(*t3);
	a_faire.add_todo(*t4);
	a_faire.display_todos();

	assert (a_faire.update_status(3, true));
	a_faire.display_todos();
	
	a_faire.remove_todo(2);
	a_faire.display_todos();

	Todo t5(cpt_todo++, "Vacances Noel", "Commander billets de train");
	a_faire.add_todo(t5);
	a_faire.display_todos();

	// Question 2
	int cpt_category =1;
	Category c1(cpt_category++, "Perso");
	Category c2(cpt_category++, "Pro");
	Category c3(cpt_category++, "Loisirs");

	a_faire.add_category(c1);
	a_faire.add_category(c2);
	a_faire.add_category(c3);

	a_faire.display_categories();

	


	return 0;
}
/** 
  * File:     todolist-test.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Program for testing the todo list
  */

#include "todolist.h"



int main()
{
	Todolist a_faire;
	a_faire.display();

	int cpt = 1;

	Todo t1(cpt++, "Courses", "Aller faire les courses à Carrefour");
	Todo t2(cpt++, "Running","Entrainement preparation course");
	Todo *t3 = new Todo(cpt++, "Cinema", "Aller voir le dernier StarWars");
	Todo *t4 = new Todo(cpt++, "TD C++", "Ecrire le code de l'application todo list");
	a_faire.add_todo(t1);
	a_faire.add_todo(t2);
	a_faire.add_todo(*t3);
	a_faire.add_todo(*t4);
	a_faire.display();

	assert (a_faire.update_status(3, true));
	a_faire.display();
	
	a_faire.remove_todo(2);
	a_faire.display();

	Todo t5(cpt++, "Vacances Noel", "Commander billets de train");
	a_faire.add_todo(t5);
	a_faire.display();


	return 0;
}
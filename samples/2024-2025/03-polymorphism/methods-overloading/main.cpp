/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:21:34+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-19T23:37:03+02:00
 */

#include <iostream>
#include "todo.h"


int main(int argc, char const *argv[]) {
   std::string title = "Buy Beer";
   date::Date due_date(10,5);
   todo::Category category = todo::Category::Personal;
   int priority = LOW;
   todo::Todo todo1(title, category, priority, due_date);
   display(todo1);
   // Update due date  
   todo1.updateDueDate(date::Date(10,11));
   todo1.updatePriority(NORMAL);
   display(todo1);
   // Update due date and priority
   todo1.updatePriority(HIGH);
   todo1.updateDueDate(5);
   display(todo1);
   return 0;
}

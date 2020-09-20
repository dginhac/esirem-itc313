/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:21:34+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-20T01:21:39+02:00
 */

#include <iostream>
#include "virtual-todo.h"


#define HIGH 10
#define NORMAL 5
#define LOW 1

int main(int argc, char const *argv[]) {
   std::string title = "Buy Beer";
   date::Date due_date(2020,10,25);
   Category category = Category::Personal;
   int priority = HIGH;

   // Error: GenericTodo is an abstract with pure virtual functions
   //todo::GenericTodo g_todo(title, category, priority, due_date);

   todo::Todo todo1(title, category, priority, due_date);
   todo1.display();
   todo1.setCompleted(true);
   todo1.display();

   title = "Play Piano";
   date::Date next_date(2020,10,20);
   date::Date end_date(2020,11,4);
   int period = 2; // 2 days

   todo::RecurringTodo r_todo1(title, category, priority, next_date, period, end_date);

   do {
      r_todo1.setCompleted(true);
      r_todo1.display();
   } while (!r_todo1.completed());

   return 0;
}

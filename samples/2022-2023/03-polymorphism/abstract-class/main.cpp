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
   int priority = NORMAL;
   todo::Todo todo1(title, category, priority, due_date);
   display(todo1);
   todo1.setCompleted(true);
   display(todo1);



   title = "Play Piano";
   date::Date next_date(10,11);
   date::Date end_date(11,4);
   category = todo::Category::Personal;
   priority = NORMAL;
   int period = 3; // every 3 days
   todo::RecurringTodo r_todo1(title, category, priority, next_date, period, end_date);
   do {
      r_todo1.setCompleted(true);
      display(r_todo1);
   } while (!r_todo1.completed());



   return 0;
}

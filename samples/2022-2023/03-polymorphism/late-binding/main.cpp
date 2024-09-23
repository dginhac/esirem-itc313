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
   std::string title = "Play Piano";
   date::Date due_date(10,11);
   date::Date end_date(10,25);
   todo::Category category = todo::Category::Personal;
   int priority = NORMAL;
   int period = 3; // every 3 days
   todo::RecurringTodo r_todo1(title, category, priority, due_date, period, end_date);
   display(r_todo1);
   todo::Todo *todo1 =  &r_todo1;
   todo1->setCompleted(true);
   display(r_todo1);

   return 0;
}

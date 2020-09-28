/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:21:34+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-21T23:38:40+02:00
 */

#include <iostream>
#include "todo.h"


#define HIGH 10
#define NORMAL 5
#define LOW 1

int main(int argc, char const *argv[]) {
   std::string title = "Buy Beer";
   date::Date due_date(2020,10,25);
   Category category = Category::Personal;
   int priority = HIGH;
   todo::Todo todo1(title, category, priority, due_date);
   todo1.display();
   todo1.updateDueDate(date::Date(2020,10,30));
   todo1.display();
   todo1.updateDueDate(10);
   todo1.display();

   title = "Play Piano";
   date::Date next_date(2020,10,20);
   date::Date end_date(2020,11,4);
   int period = 2; // 2 days
   todo::RecurringTodo r_todo1(title, category, priority, next_date, period, end_date);
   r_todo1.display();
   r_todo1.updateEndDate(date::Date(2020,11,22));
   r_todo1.display();
   r_todo1.updateEndDate(10);
   r_todo1.display();

   return 0;
}

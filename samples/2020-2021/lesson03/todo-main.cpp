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


#define HIGH 10
#define NORMAL 5
#define LOW 1

int main(int argc, char const *argv[]) {
   std::string title = "Buy Beer";
   date::Date due_date(2020,10,25);
   Category category = Category::Personal;
   int priority = HIGH;
   //bool completed = false;
   todo::Todo todo1(title, category, priority, due_date);
   //todo1.display();
   // Go To the Brewery and Buy Beer
   todo1.setCompleted(true);
   //todo1.display();

   title = "Play Piano";
   date::Date end_date(2020,11,3);
   int period = 2; // every day
   todo::RecurringTodo r_todo1(title, category, priority, due_date, period, end_date);

   //r_todo1.display();


   todo2::Todo todo2(title, category, priority, due_date, false);
   todo2.display();

   date::Date next_date(2020,10,20);
   todo2::RecurringTodo r_todo2(title, category, priority, next_date, period, end_date);

   for (int i=0;i<20&&!r_todo2.completed();i++) {
      r_todo2.display();
      r_todo2.setCompleted(true);
   }

   return 0;
}

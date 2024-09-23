/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:47:26+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-20T00:24:35+02:00
 */

#include <iostream>
#include "todo.h"

namespace todo {
   Todo::Todo(std::string title, Category category, int priority, date::Date due_date, bool completed) :
   _title(title), _category(category), _priority(priority), _due_date(due_date), _completed(completed) {
      //std::cout << "Constructor todo: " << '\n';
   }


   std::string Todo::title() const {
      return _title;
   }
   Category Todo::category() const {
      return _category;
   }
   int Todo::priority() const {
      return _priority;
   }
   date::Date Todo::dueDate() const {
      return _due_date;
   }
   bool Todo::completed() const {
      return _completed;
   }

   void Todo::updateTitle(std::string title) {
      _title = title;
   }
   void Todo::updateCategory(Category category) {
      _category = category;
   }
   void Todo::updatePriority(int priority) {
      _priority = priority;
   }
   void Todo::updateDueDate(date::Date due_date) {
      _due_date = due_date;
   }
   void Todo::setCompleted(bool completed) {
      _completed = completed;
   }

   void display(Todo& todo)  {
      std::string priority;

      if (todo.priority() == HIGH) {
         priority="High priority";
      }
      if (todo.priority() == NORMAL) {
         priority="Normal priority";
      }
      if (todo.priority() == LOW) {
         priority="Low priority";
      }
      if (todo.completed()) {
         std::cout << "DONE: " << todo.title() << " ("
                   << toString(todo.dueDate()) << ")" << '\n';
      }
      else {
         std::cout << "TODO: " << todo.title() << " ("
                   << priority << " - "
                   << toString(todo.dueDate()) << ")" << '\n';
      }
   }
}


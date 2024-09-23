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

   GenericTodo::GenericTodo(std::string title, Category category, int priority, bool completed) :
                            _title(title) , _category(category), _priority(priority), _completed(completed) {}


   std::string GenericTodo::title() const {
      return _title;
   }
   Category GenericTodo::category() const {
      return _category;
   }
   int GenericTodo::priority() const {
      return _priority;
   }

   bool GenericTodo::completed() const {
      return _completed;
   }

   void GenericTodo::updateTitle(std::string title) {
      _title = title;
   }
   void GenericTodo::updateCategory(Category category) {
      _category = category;
   }
   void GenericTodo::updatePriority(int priority) {
      _priority = priority;
   }



   Todo::Todo(std::string title, Category category, int priority, date::Date due_date, bool completed) :
   GenericTodo(title, category, priority, completed), _due_date(due_date) {
   }

   date::Date Todo::dueDate() const {
      return _due_date;
   }

   void Todo::updateDueDate(date::Date due_date) {
      _due_date = due_date;
   }
   void Todo::setCompleted(bool completed) {
      std::cout << "Todo setCompleted" << std::endl;
      _completed = completed;
   }


   RecurringTodo::RecurringTodo(std::string title, Category category, int priority,
                                date::Date next_date, int period, date::Date end_date, bool completed) :
                                GenericTodo(title, category, priority, completed), _next_date(next_date),
                                _period(period), _end_date(end_date) {
   }

   int RecurringTodo::period() const {
      return _period;
   }

   date::Date RecurringTodo::endDate() const {
      return _end_date;
   }

   date::Date RecurringTodo::nextDate() const {
      return _next_date;
   }

   void RecurringTodo::updatePeriod(int period) {
      _period = period;
   }

   void RecurringTodo::updateEndDate(date::Date end_date) {
      _end_date = end_date;
   }

   void RecurringTodo::updateNextDate(date::Date next_date) {
      _next_date = next_date;
   }

   void RecurringTodo::setCompleted(bool completed) {
      //std::cout << "RecurringTodo setCompleted" << std::endl;
      if (completed) {
         date::Date next_day = nextDate() + _period;
         updateNextDate(next_day);

         if (nextDate()>_end_date) {
            _completed = true;
         }
      }
      else {
         _completed = false;
      }
      //std::cout << toString(nextDate()) << std::endl;
   }

   std::string priority(const Todo& todo) {
      switch (todo.priority()) {
         case LOW:
            return "LOW";
         break;
         case NORMAL:
            return "NORMAL";
         break;
         case HIGH:
            return "HIGH";
         break;
         default:
            return "UNDEFINED";
      }
   }

   std::ostream& operator<<(std::ostream& os, const Todo& todo) {
      if (todo.completed()) {
         os << "DONE: " << todo.title() << " ("
            << priority(todo) << ") - "
            << toString(todo.dueDate()) << '\n';
      }
      else {
         os << "TODO: " << todo.title() << " ("
            << priority(todo) << ") - "
            << toString(todo.dueDate()) << '\n';
      }
      return os;
   }
   std::ostream& operator<<(std::ostream& os, const RecurringTodo& todo) {
      if (todo.completed()) {
         os << "DONE: " << todo.title() << '\n';
      }
      else {
         os << "TODO: " << todo.title() << " (" << toString(todo.nextDate()) << ") every "
         << todo.period() << " days until "
         << toString(todo.endDate()) << '\n';
      }
      return os;
   }
}


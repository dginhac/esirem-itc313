/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:47:26+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-21T23:32:35+02:00
 */

#include <iostream>
#include "todo.h"

/**
 * Classes GenericTodo, Todo and RecurringTodo
 * are defined in the namespace todo
 */
namespace todo {

   GenericTodo::GenericTodo(std::string title, Category category, int priority, bool completed) :
                _title(title), _category(category), _priority(priority), _completed(completed) {
      //std::cout << "Constructor generic todo: " << '\n';
   }

   Todo::Todo(std::string title, Category category, int priority, date::Date due_date, bool completed) :
         GenericTodo(title, category, priority, completed),
         _due_date(due_date) {
   }

   bool GenericTodo::completed() const {
      return _completed;
   }

   std::string GenericTodo::title() const {
      return _title;
   }

   int GenericTodo::priority() const {
      return _priority;
   }


   date::Date Todo::dueDate() const {
      return _due_date;
   }



   void Todo::updateDueDate(date::Date due_date) {
      _due_date = due_date;
   }

   void Todo::updateDueDate(int days) {
      for (int i=0; i<days; i++) {
         _due_date.nextDay();
      }
   }

   void Todo::setCompleted(bool completed) {
      _completed = completed;
   }


   RecurringTodo::RecurringTodo(std::string title, Category category, int priority, date::Date next_date, int period, date::Date end_date, bool completed) :
                                GenericTodo(title, category, priority, completed),
                                 _next_date (next_date), _end_date(end_date), _period(period) {

   }



   int RecurringTodo::period() const {
      return _period;
   }

   date::Date RecurringTodo::nextDate() const {
      return _next_date;
   }



   date::Date RecurringTodo::endDate() const {
      return _end_date;
   }

   void RecurringTodo::updateNextDate(date::Date next_date) {
      _next_date = next_date;
   }

   void RecurringTodo::updateNextDate(int days) {
      for (int i=0; i<days; i++) {
         _next_date.nextDay();
      }
   }

   void RecurringTodo::updateEndDate(date::Date end_date) {
      _end_date = end_date;
   }

   void RecurringTodo::updateEndDate(int days) {
      for (int i=0; i<days; i++) {
         _end_date.nextDay();
      }
   }

   void RecurringTodo::updatePeriod(int period) {
      _period = period;
   }




   void RecurringTodo::setCompleted(bool completed) {
      if (completed) {
         for (int i=0; i<_period; i++) {
            _next_date.nextDay();
         }
         if (_next_date>_end_date) {
            _completed = completed;
         }
      }
      else {
         _completed = false;
      }

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
            << todo.dueDate().toString() << '\n';
      }
      else {
         os << "TODO: " << todo.title() << " ("
            << priority(todo) << ") - "
            << todo.dueDate().toString() << '\n';
      }
      return os;
   }
   std::ostream& operator<<(std::ostream& os, const RecurringTodo& todo) {
      if (todo.completed()) {
         os << "DONE: " << todo.title() << '\n';
      }
      else {
         os << "TODO: " << todo.title() << " (" << todo.nextDate().toString() << ") every "
         << todo.period() << " days until "
         << todo.endDate().toString() << '\n';
      }
      return os;
   }

}

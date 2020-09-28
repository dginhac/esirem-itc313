/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:47:26+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-20T01:19:20+02:00
 */

#include <iostream>
#include "abstract-todo.h"


namespace todo {

   GenericTodo::GenericTodo(std::string title, Category category, int priority, bool completed) :
                _title(title), _category(category), _priority(priority), _completed(completed) {
      //std::cout << "Constructor generic todo: " << '\n';
   }


   Todo::Todo(std::string title, Category category, int priority, date::Date due_date, bool completed) :
         GenericTodo(title, category, priority, completed),
         _due_date(due_date) {
   }

   void Todo::display() const {
      if (_completed) {
         std::cout << "DONE: " << _title << " (" << _due_date.toString() << ")" << '\n';
      }
      else {
         std::cout << "TODO: " << _title << " (" << _due_date.toString() << ")" << '\n';
      }
   }

   date::Date Todo::dueDate() const {
      return _due_date;
   }

   void Todo::updateDueDate(date::Date due_date) {
      _due_date = due_date;
   }

   void Todo::setCompleted(bool completed) {
      _completed = completed;
   }

   bool Todo::completed() const {
      return _completed;
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


   void RecurringTodo::updatePeriod(int period) {
      _period = period;
   }

   void RecurringTodo::display() const {
      if (_completed) {
         std::cout << "DONE: " << _title << '\n';
      }
      else {
         std::cout << "TODO: " << _title << " (" << nextDate().toString() << ") every "
         << period() << " days until "
         << endDate().toString() << '\n';
      }
   }

   bool RecurringTodo::completed() const {
      return _completed;
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


}

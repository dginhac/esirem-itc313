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

   void Todo::display() const {
      if (_completed) {
         std::cout << "DONE: " << _title << " (" << _due_date.toString() << ")" << '\n';
      }
      else {
         std::cout << "TODO: " << _title << " (" << _due_date.toString() << ")" << '\n';
      }
   }


   RecurringTodo::RecurringTodo(std::string title, Category category, int priority,
                                date::Date due_date, int period, date::Date end_date, bool completed) :
                                Todo(title, category, priority, due_date, completed),
                                _period(period), _end_date(end_date) {
   }

   int RecurringTodo::period() const {
      return _period;
   }

   date::Date RecurringTodo::endDate() const {
      return _end_date;
   }

   void RecurringTodo::updatePeriod(int period) {
      _period = period;
   }

   void RecurringTodo::updateEndDate(date::Date end_date) {
      _end_date = end_date;
   }

   void RecurringTodo::setCompleted(bool completed) {
      if (completed) {
         for (int i=0; i<_period; i++) {
            date::Date next = dueDate();
            next.nextDay();
            updateDueDate(next);
         }
         if (dueDate()>_end_date) {
            Todo::setCompleted(completed);
         }
      }
      else {
         Todo::setCompleted(false);
      }
   }

   void RecurringTodo::display() const {
      if (completed()) {
         std::cout << "DONE: " << title() << '\n';
      }
      else {
         std::cout << "TODO: " << title() << " (" << dueDate().toString() << ") - every "
         << period() << " days until "
         << endDate().toString() << '\n';
      }
   }


}


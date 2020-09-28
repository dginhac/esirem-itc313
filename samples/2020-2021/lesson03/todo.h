/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:34:00+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-20T00:24:39+02:00
 */

#ifndef TODO_H
#define TODO_H

#include <string>
#include "date.h"


enum class Category {
   Personal, Work
};

namespace todo {
   class Todo {
   public:
      Todo(std::string title, Category category, int priority, date::Date due_date, bool completed=false);
      std::string title() const;
      Category category() const;
      int priority() const;
      date::Date dueDate() const;
      bool completed() const;

      void updateTitle(std::string title);
      void updateCategory(Category category);
      void updatePriority(int priority);
      void updateDueDate(date::Date due_date);
      void setCompleted(bool completed);
      void display() const;

   private:
      std::string _title;
      Category _category;
      int _priority;
      date::Date _due_date;
      bool _completed;
   };

   class RecurringTodo : public Todo {
   public:
      RecurringTodo(std::string title, Category category, int priority, date::Date due_date, int period, date::Date end_date, bool completed=false);
      int period() const;
      date::Date endDate() const;
      void updatePeriod(int period);
      void updateEndDate(date::Date end_date);
      void setCompleted(bool completed);
      void display() const;
   private:
      int _period;
      date::Date _end_date;
   };
}

#endif // TODO_H

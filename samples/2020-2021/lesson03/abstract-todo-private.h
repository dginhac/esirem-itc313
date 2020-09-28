/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-14T15:34:00+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-20T01:00:51+02:00
 */

#ifndef TODO_H
#define TODO_H

#include <string>
#include "date.h"


enum class Category {
   Personal, Work
};

namespace todo {
   class GenericTodo {
   public:
      GenericTodo(std::string title, Category category, int priority, bool completed);

      std::string title() const;
      Category category() const;
      int priority() const;
      date::Date dueDate() const;
      bool completed() const;

      void updateTitle(std::string title);
      void updateCategory(Category category);
      void updatePriority(int priority);

      virtual void setCompleted(bool completed);
      virtual void display() const = 0;

   private:
      std::string _title;
      Category _category;
      int _priority;
      bool _completed;
   };

   class Todo : public GenericTodo {
   public:
      Todo(std::string title, Category category, int priority, date::Date due_date, bool completed=false);
      date::Date dueDate() const;
      void updateDueDate(date::Date due_date);
      void setCompleted(bool completed);
      void display() const;
   private:
      date::Date _due_date;
   };

   class RecurringTodo: public GenericTodo {
   public:
      RecurringTodo(std::string title, Category category, int priority, date::Date next_date, int period, date::Date end_date, bool completed=false);
      date::Date nextDate() const;
      date::Date endDate() const;
      void updateNextDate(date::Date next_date);
      void updateEndDate(date::Date end_date);
      void setCompleted(bool completed);
      int period() const;
      void updatePeriod(int period);
      void display() const;
   private:
      date::Date _next_date;
      date::Date _end_date;
      int _period;
   };
}

#endif // TODO_H

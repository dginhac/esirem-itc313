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


namespace todo {

   #define HIGH 10
   #define NORMAL 5
   #define LOW 1

   enum class Category {
      Personal, Work
   };

   class GenericTodo {
   public:
      GenericTodo(std::string title, Category category, int priority, bool completed=false);
      virtual ~GenericTodo() = default;
      std::string title() const;
      Category category() const;
      int priority() const;
      bool completed() const;
      void updateTitle(std::string title);
      void updateCategory(Category category);
      void updatePriority(int priority);
      void setTitle(std::string title);
      virtual void setCompleted(bool completed) = 0;
   protected:
      bool _completed;
   private:
      std::string _title;
      Category _category;
      int _priority;

   };

   class Todo : public GenericTodo {
   public:
      Todo(std::string title, Category category, int priority,
           date::Date due_date, bool completed=false);
      date::Date dueDate() const;
      void updateDueDate(date::Date due_date);
      void setCompleted(bool completed) override;
   private:
      date::Date _due_date;
   };

   class RecurringTodo : public GenericTodo {
   public:
      RecurringTodo(std::string title, Category category, int priority,
                    date::Date next_date, int period, date::Date end_date,
                    bool completed=false);
      int period() const;
      date::Date nextDate() const;
      date::Date endDate() const;
      void updatePeriod(int period);
      void updateNextDate(date::Date next_date);
      void updateEndDate(date::Date end_date);
      void setCompleted(bool completed) override;
   private:
      int _period;
      date::Date _end_date;
      date::Date _next_date;
   };

   std::string priority(const Todo& todo);
   std::ostream& operator<<(std::ostream& os, const Todo& todo);
   std::ostream& operator<<(std::ostream& os, const RecurringTodo& todo);

}

#endif // TODO_H

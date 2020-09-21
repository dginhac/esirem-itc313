/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-21T14:04:06+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-21T16:07:05+02:00
 */


#ifndef UB_H
#define UB_H

#include <string>
#include "date.h"
namespace ub {
   class Member {
   public:
      Member(std::string firstname, std::string lastname, date::Date birthday);
      int id() const;
      std::string firstname() const;
      std::string lastname() const;
      date::Date birthday() const;
   private:
      int _id;
      std::string _firstname;
      std::string _lastname;
      date::Date _birthday;
   };

   class Teacher {
   public:
      Teacher(std::string faculty);
      std::string faculty() const;
   private:
      std::string _faculty;
   };

   class Researcher {
   public:
      Researcher(std::string lab);
      std::string lab() const;
   private:
      std::string _lab;
   };

   class Professor : public Member, public Teacher, public Researcher {
   public:
      Professor(std::string firstname, std::string lastname, date::Date birthday, std::string faculty, std::string lab, double salary);
      double salary() const;
      void updateSalary(double salary);
      void display();

   private:
      double _salary;
   };

}

#endif // UB_H

/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-21T14:10:52+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-21T14:54:35+02:00
 */

#include <string>
#include <iostream>
#include <ctime>
#include "univ.h"
#include "date.h"


namespace univ {
   Member::Member(std::string firstname, std::string lastname, date::Date birthday) :
   _firstname(firstname), _lastname(lastname), _birthday(birthday) {
      std::srand(std::time(nullptr)); // use current time as seed for random generator
      _id = std::rand();
   }

   int Member::id() const {
      return _id;
   }

   std::string Member::firstname() const {
      return _firstname;
   }

   std::string Member::lastname() const {
      return _lastname;
   }

   date::Date Member::birthday() const {
      return _birthday;
   }

   Teacher::Teacher(std::string faculty) : _faculty(faculty) {
   }
   std::string Teacher::faculty() const {
      return _faculty;
   }

   Researcher::Researcher(std::string lab) : _lab(lab) {
   }
   std::string Researcher::lab() const {
      return _lab;
   }

   Professor::Professor(std::string firstname, std::string lastname, date::Date birthday, std::string faculty, std::string lab, double salary)
   :
   Member(firstname, lastname, birthday), Teacher(faculty), Researcher(lab), _salary(salary) {}

   double Professor::salary() const {
      return _salary;
   }
   void Professor::updateSalary(double salary) {
      _salary = salary;
   }
   void display(Professor& prof) {
      std::cout << prof.firstname() << " " << prof.lastname() << " (" << prof.id() << ")\n";
   }
 }

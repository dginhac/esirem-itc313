// person.h
#include <iostream>

class Person {
public:
  Person(std::string firstname, std::string lastname, int gender);
  std::string getFullName();
private:
  std::string _firstname;
  std::string _lastname;
  int _gender;
};

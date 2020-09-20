// person.h
#include <iostream>

class Person {
private:
  std::string firstname;
  std::string lastname;
public:
  std::string getFullName();
};

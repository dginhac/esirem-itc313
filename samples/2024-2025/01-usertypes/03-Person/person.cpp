// person.cpp
#include "person.h"

Person::Person(std::string firstname, std::string lastname, int gender) {
  _firstname = firstname;
  _lastname = lastname;
  _gender = gender;
}

std::string Person::getFullName() {
  std::string gender;
  if (_gender==1) {
    gender = "Mr";
  }
  else if (_gender==2) {
      gender = "Ms";
  }
  // Non-binary
  else {
    gender = "";
  }
  return gender + " " + _firstname + " " + _lastname;
}

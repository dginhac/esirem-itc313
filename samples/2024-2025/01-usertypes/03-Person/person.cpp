#include "person.h"

Person::Person(std::string firstname, std::string lastname, int gender) {
  _firstname = firstname;
  _lastname = lastname;
  _gender = gender;
}

std::string Person::getFullName() {
  if (_gender==1) {
    return "Mr " + _firstname + " " + _lastname;
  }
  if (_gender==2) {
      return "Ms " + _firstname + " " + _lastname;
  }
  // Non-binary
  return _firstname + " " + _lastname;
}

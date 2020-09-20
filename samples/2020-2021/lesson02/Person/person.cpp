// person.cpp
#include <iostream>
#include "person.h"

std::string Person::getFullName() {
  return firstname + " " + lastname;
}

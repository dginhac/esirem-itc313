// person.cpp


#include <iostream>
#include "person.h"

namespace people {
    Person::Person(std::string firstname, std::string lastname) : _firstname(firstname), _lastname(lastname) {
    }

    std::string Person::firstname() const {
        return _firstname;
    }

    std::string Person::lastname() const {
        return _lastname;
    }

    std::string getFullName(const Person &p) {
        return p.firstname() + " " + p.lastname();
    }
}

#include <iostream>

#include "date.h"

class Person {
    public:
        Person(std::string firstname, std::string lastname, Date birthday);
    private:
        std::string _firstname;
        std::string _lastname;
        const Date _birthday;
};

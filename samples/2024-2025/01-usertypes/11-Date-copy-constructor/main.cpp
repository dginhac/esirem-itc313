#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    // Starwars day is May 4th (5/4) because "May the 4th be with you"
    Date starwars(5,4);
    std::cout << "Starwars day: " << starwars.month() << "/" << starwars.day() << std::endl;
    // Copy the date with = operator; Implicit call to the copy constructor
    // s2 is a different object than starwars
    auto s2 = starwars;
    std::cout << "Copy #1: " << s2.month() << "/" << s2.day() << std::endl;
    // Explicit call to the copy constructor - s3 is a different object than starwars and s2
    auto s3(starwars);
    std::cout << "Copy #2: " << s3.month() << "/" << s3.day() << std::endl;
    return 0;
}

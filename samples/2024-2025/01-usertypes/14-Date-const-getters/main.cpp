#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    Date starwars(5,4);
    std::cout << "Starwars: " << starwars.month() << "/" << starwars.day() << std::endl;
    Date pi_day(3,14);
    std::cout << "Pi day: " << pi_day.month() << "/" << pi_day.day() << std::endl;
    return 0;
}

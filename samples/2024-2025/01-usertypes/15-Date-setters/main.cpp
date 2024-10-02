#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    Date a_day(6,21);
    std::cout << "Summer: " << a_day.month() << "/" << a_day.day() << std::endl;
    a_day.updateMonth(9);
    std::cout << "Autumn: " << a_day.month() << "/" << a_day.day() << std::endl;
    return 0;
}

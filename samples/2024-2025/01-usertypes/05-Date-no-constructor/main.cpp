#include <iostream>
#include "date.h"

int main(int argc, char const *argv[])
{
    Date d1;
    std::cout << "d1: " << d1.month() << "/" << d1.day() << std::endl;

    Date d2 = Date();
    std::cout << "d2: " << d2.month() << "/" << d2.day() << std::endl;

    Date d3{};
    std::cout << "d3: " << d3.month() << "/" << d3.day() << std::endl;

    return 0;
}

#include "date.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    Date d1;
    std::cout << "d1: " << d1.month() << "/" << d1.day() << std::endl;
    return 0;
}

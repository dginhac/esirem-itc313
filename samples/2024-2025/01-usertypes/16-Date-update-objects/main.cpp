#include <iostream>
#include "date.h"

int main(int argc, char const *argv[]) {
    Date love(2,14);
    std::cout << "Valentine day: " << love.month() << "/" << love.day() << std::endl;
    love.updateDay(30);
    std::cout << "NOK 30/02: " << love.month() << "/" << love.day() << std::endl;
    return 0;
}

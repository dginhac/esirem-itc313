#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    Date pi_day_ok(3,14);
    std::cout << "ok: " << pi_day_ok.month() << "/" << pi_day_ok.day() << std::endl;
    Date pi_day_error(14,3);
    std::cout << "nok: " << pi_day_error.month() << "/" << pi_day_error.day() << std::endl;
    return 0;
}

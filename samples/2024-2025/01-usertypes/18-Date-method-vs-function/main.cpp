#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date a_day(7,31);
  std::cout << "a day: " << a_day.month() << "/" << a_day.day() << std::endl;
  std::cout << "helper function -> day #" << dayOfYear(a_day) << std::endl;
  std::cout << "method -> day #" << a_day.dayOfYear() << std::endl;
  return 0;
}

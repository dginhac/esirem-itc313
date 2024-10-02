#include "date.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Date a_day(7,31);
  std::cout << "a day: " << a_day.month() << "/" << a_day.day() << std::endl;
  std::cout << "day #" << a_day.dayOfYear() << std::endl;
  a_day.next();
  std::cout << "a day++: " << a_day.month() << "/" << a_day.day() << std::endl;
  a_day.back();
  std::cout << "a day: " << a_day.month() << "/" << a_day.day() << std::endl;
  return 0;
}

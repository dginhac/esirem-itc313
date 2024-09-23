// person-main.cpp
#include <iostream>
#include "person.h"

int main(int argc, char const *argv[]) {

  Person p("Dom", "Ginhac", 1);
  std::string fullname = p.getFullName();
  std::cout << "Hello " << fullname << std::endl;
  std::cout << "That's all folks" << std::endl;
  return 0;
}

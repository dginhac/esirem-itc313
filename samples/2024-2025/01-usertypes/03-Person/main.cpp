// person-main.cpp
#include <iostream>
#include "person.h"

int main(int argc, char const *argv[]) {

  Person dg("Dom", "Ginhac", 1);
  std::string fullname = dg.getFullName();
  std::cout << "Hello " << fullname << std::endl;
  Person taylor("Taylor", "Swift", 2);
  std::cout << "Hello " << taylor.getFullName() << std::endl;
  Person miley("Miley", "Cyrus", 3);
  std::cout << "Hello " << miley.getFullName() << std::endl;
  std::cout << "That's all folks" << std::endl;
  return 0;
}

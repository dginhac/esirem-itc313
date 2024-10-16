#include <iostream>

int main(int argc, char const *argv[]) {
  int value1 = 42;
  int* ptr1 = nullptr;
  // Makes ptr point to the integer variable
  // using the address-of operator (&)
  ptr1 = &value1;

  // prints the memory address and the contents of the variables
  std::cout << "@value1: " << &value1 << std::endl;
  std::cout << "@ptr1:   " << &ptr1 << std::endl;
  std::cout << "value1:  " << value1 << std::endl;
  std::cout << "ptr1:    " << ptr1 << std::endl;
  return 0;
}

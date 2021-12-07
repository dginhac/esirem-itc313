/** 
  * File:     main.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  test
  */

#include <iostream>

#include "stack.h"


int main(int argc, char const *argv[])
{
   Stack<int>         intStack;  // stack of ints
   // manipulate int stack
   intStack.push(42);
   std::cout << intStack.top() << std::endl;

   Stack<std::string> stringStack;    // stack of strings
   // manipulate string stack
   stringStack.push("hello");
   stringStack.push("world");
   std::cout << stringStack.top() << std::endl;
   stringStack.pop();
   std::cout << stringStack.top() << std::endl;
   stringStack.pop();
   std::cout << stringStack.top() << std::endl;
   return 0;
}

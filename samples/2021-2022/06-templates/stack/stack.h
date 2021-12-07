/** 
  * File:     stack.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  Class Stack
  */

#include <vector>
#include <string>
#include <stdexcept>

template <class T>
class Stack {
   private:
      std::vector<T> elems;    // elements
   public:
      void push(const T& element);  // push element
      void pop();                   // pop element
      T top() const;                // return top element
      bool empty() const;           // return true if empty.
};


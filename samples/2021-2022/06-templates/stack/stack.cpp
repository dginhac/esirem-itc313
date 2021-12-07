/** 
  * File:     stack.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  Class Stack
  */


#include "stack.h"


template <class T>
void Stack<T>::push (const T& element) {
   // append copy of passed element
   elems.push_back(element);
}

template <class T>
void Stack<T>::pop () {
   if (elems.empty()) {
      throw std::out_of_range("Stack<>::pop(): empty stack");
   }
   // remove last element
   elems.pop_back();
}

template <class T>
T Stack<T>::top () const {
   if (elems.empty()) {
      throw std::out_of_range("Stack<>::top(): empty stack");
   }
   // return copy of last element
   return elems.back();
}

template <class T>
bool Stack<T>::empty() const {      // return true if empty.
   return elems.empty();
}


// To avoid linker error
// We force the creation of the Stack<Int> and <Stack<std::string> classes
// See https://isocpp.org/wiki/faq/templates#separate-template-fn-defn-from-decl for detailed explanation
template class Stack<int>;
template class Stack<std::string>;

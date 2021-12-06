/*
* @File:    pointers.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-04 23:23:30
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-05 15:27:09
*/

#include <iostream>

int main()
{
    // Declares a pointer on an integer and init the pointer to null
    int* ptr = nullptr; // int *ptr = nullptr;

    // Makes ptr point to the integer variable
    // using the address-of operator (&)
    int value = 42;
    ptr = &value; // int* ptr = &value;

    // prints the address of value and ptr
    std::cout << "&v=" << &value << std::endl;
    std::cout << "ptr=" << ptr << std::endl;

    // prints the variable value
    std::cout << "v=" << value << std::endl;
    // updates the value using ptr
    *ptr = 1337;
    // prints the value that ptr is holding
    std::cout << "*ptr=" << *ptr << std::endl;

    return 0;
}

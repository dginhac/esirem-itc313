/*
* @File:    memory-addresses.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-04 23:09:27
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-04 23:21:20
*/

#include <iostream>


int main() {
    int x = 42;
    // print the value of variable x
    std::cout << x << std::endl;
    // print the memory address of variable x
    std::cout << &x << std::endl;

    int y = 666;
    // print the value of variable y
    std::cout << y << std::endl;
    // print the memory address of variable y
    std::cout << &y << std::endl;
    // update the value at the memory address of variable y
    *(&y) = 1337; // equivalent to y = 1337;
    std::cout << *(&y) << std::endl;
    return 0;
}

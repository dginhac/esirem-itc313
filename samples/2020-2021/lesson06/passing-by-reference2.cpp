/*
* @File:    passing-by-reference2.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-03 16:38:52
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-03 23:28:29
*/

#include <iostream>
void foo(int& y) {
    std::cout << "   Inside foo, y = " << y << '\n';
    y++;
    std::cout << "   After update inside foo, y = " << y << '\n';
} // y is destroyed here
int main() {
    int x = 5;
    int& z = x; // create a reference
    std::cout << "Inside main, before foo(z), x = " << x << '\n';
    std::cout << "Inside main, before foo(z), z = " << z << '\n';
    foo(z); // Call foo with the reference z
    std::cout << "Inside main, after foo(z), z = " << z << '\n';
    std::cout << "Inside main, after foo(z), x = " << x << '\n';
    foo(x); // Compiler automatically creates a reference on x
    std::cout << "Inside main, after foo(x), x = " << x << '\n';
    return 0;
}
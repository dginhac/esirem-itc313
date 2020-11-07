/*
* @File:    passing-by-values.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-03 16:28:26
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-03 16:28:44
*/

#include <iostream>

void foo(int x) {
    std::cout << "   Inside foo, x = " << x << '\n';
    std::cout << "   Inside foo, @x = " << &x << '\n';
    x = 6;
    std::cout << "   After update inside foo, x = " << x << '\n';
} // y is destroyed here

int main() {
    int x = 5;
    std::cout << "Inside main, before foo, x = " << x << '\n';
    std::cout << "Inside main, before foo, &x = " << &x << '\n';
    foo(x);
    std::cout << "Inside main, after foo, x = " << x << '\n';
    return 0;
}
/*
* @File:    passing-by-pointer.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-07 08:48:37
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-07 09:12:01
*/

#include <iostream>

void foo (int* data, int new_value) {
    *data = new_value;
}
int main() {
    int x = 42;
    int y = 666;
    int* b_ptr = new int (42);

    std::cout << "Address" << std::endl;
    std::cout << x << std::endl;
    foo (&x, y);
    std::cout << x << std::endl;

    std::cout << "Raw pointer" << std::endl;
    std::cout << *b_ptr << std::endl;
    foo (b_ptr, y);
    std::cout << *b_ptr << std::endl;
    return 0;
}
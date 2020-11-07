/*
* @File:    swap.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-03 23:18:46
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-03 23:28:16
*/
#include <iostream>

void swap (int &x, int &y) {
	int tmp = x;
	x=y;
	y=tmp;
}

int main() {
    int a = 2, b = -3;
    std::cout << "Before, a=" << a << " - b=" << b << '\n';
    swap(a,b);
    std::cout << "After, a=" << a << " - b=" << b << '\n';
    return 0;
}
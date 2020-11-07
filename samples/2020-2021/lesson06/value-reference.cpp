/*
* @File:    value-reference.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-03 23:11:46
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-03 23:15:31
*/

#include <iostream>

void fooRef(int &y) {
	std::cout << "fooRef: ad(y)=" << &y << '\n';
    y++;
}
void fooVal(int y) {
    std::cout << "fooVal: ad(y)=" << &y << '\n';
    y++;
}
int main() {
    int x = 10;
    std::cout << "main: ad(x)=" << &x << '\n';
    fooVal(x);
    std::cout << "main: after fooVal, x=" << x << '\n';
    fooRef(x);
    std::cout << "main: after fooRef, x=" << x << '\n';
    return 0;
}
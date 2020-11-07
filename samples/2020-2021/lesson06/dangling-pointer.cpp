/*
* @File:    dangling-pointer.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-07 08:32:15
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-07 08:33:22
*/


#include <iostream>

int main() {
    int* pa = new int;
    *pa = 2;
    std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    delete pa;
    std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    pa = nullptr;
    if (pa!=nullptr)
        std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    return 0;
}
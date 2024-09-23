/*
* @File:    basic-iterators.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-22 16:06:36
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-22 16:45:07
*/

#include <array>
#include <vector>
#include <iostream>

int main() {
    int data1[5] = {0,2,4,6,8};
    std::array<int,5> data2 = {1,3,5,7,9};
    std::vector<int> data3 = {10,11,12,13,14,15};
    for (int i=0; i<5; i++) {
        std::cout << data1[i] << " " << data2.at(i) << " ";
    }
    std::cout << std::endl;
    for (int d: data3) {
        std::cout << d << " ";
    }
    std::cout << std::endl;
    return 0;
}

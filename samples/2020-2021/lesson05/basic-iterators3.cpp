/*
* @File:    basic-iterators3.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-22 16:06:36
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-29 15:06:09
*/

#include <array>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {1,3,5,7,9};
    int i=data.size();
    while (i>0) {
        i--;
        std::cout << data.at(i) << " ";
    }
    std::cout << std::endl;
    auto it2 = data.end();
    while (it2 != data.begin()) {
        --it2;
        std::cout << *it2 << " ";
    }
    std::cout << std::endl;
    auto it3 = data.rbegin();
    while (it3 != data.rend()) {
        std::cout << *it3 << " ";
        ++it3;
    }
    std::cout << std::endl;
    return 0;
}

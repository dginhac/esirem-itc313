/*
* @File:    iterators2.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-22 16:06:36
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-29 14:22:56
*/

#include <array>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {1,3,5,7,9};
    for (int d: data) {
        std::cout << d << " ";
    }
    std::cout << std::endl;
    std::vector<int>::iterator it = data.begin();
    auto it2 = data.begin();
    while (it2 != data.end()) {
        std::cout << *it2 << " "; // displays 1 3 5 7 9
        it2++;
    }
    std::cout << std::endl;
    return 0;
}

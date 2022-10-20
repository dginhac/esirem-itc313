/*
* @File:    basic-iterators2.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-22 16:06:36
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-10-17 12:22:23
*/

#include <array>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {1,3,5,7,9};
    std::cout << "for loop: ";
    for (int d: data) {
        std::cout << d << " ";
    }
    std::cout << std::endl << "for loop with iterators: ";
    for (auto it=data.begin(); it!= data.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << "while loop: ";
    int i=0;
    while (i<data.size()) {
        std::cout << data.at(i) << " ";
        i++;
    }
    std::cout << std::endl << "while loop with iterators: ";;
    auto it = data.begin();
    while (it != data.end()) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    return 0;
}

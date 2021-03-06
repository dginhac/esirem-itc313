/*
* @File:    find.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-30 14:55:08
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-30 17:23:34
*/


#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<int> data) {
    for (auto it=data.begin(); it!= data.end();++it)
        os << *it << " ";
    os << std::endl;
    return os;
}

int main() {
    std::vector<int> numbers = {0,10,20,42,10,30,42,42,-10,42,0};
    std::cout << numbers;

    auto it = find(numbers.begin(), numbers.end(), 42);
    if (it != numbers.end()) {
        int index = std::distance(numbers.begin(), it);
        std::cout << "First Found at position " << index  << std::endl;
    }
    else
        std::cout << "Not found" << std::endl;

    int nb = std::count(numbers.begin(), numbers.end(), 42);
    if (nb) {
        std::cout << "Found " << nb << " times" << std::endl;
    }
    else
        std::cout << "Not found" << std::endl;
    return 0;
}
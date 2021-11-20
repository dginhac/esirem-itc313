/*
* @File:    remove.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-30 14:55:08
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-10-17 23:28:54
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
    std::vector<int> numbers = {0,10,20,10,10,30,40,10,-10,0};
    std::cout << "Initial" << std::endl;
    std::cout << "Size:" << numbers.size()  << " - Data: " << numbers;
    // remove all the numbers equal to 10
    // and returns an iterator on the last element
    std::cout << "Remove all 10"  << std::endl;
    auto it_end = std::remove(numbers.begin(),numbers.end(), 10);
    // numbers still have 10 elements
    std::cout << "Size:" << numbers.size()  << " - Data: " << numbers;

    // Need to delete the last elements using the member function erase
    std::cout << "Erase last nb" << std::endl;
    numbers.erase(it_end, numbers.end());
    std::cout << "Size:" << numbers.size()  << "  - Data: " << numbers;
    return 0;
}
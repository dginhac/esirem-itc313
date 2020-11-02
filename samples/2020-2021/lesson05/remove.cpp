/*
* @File:    remove.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-30 14:55:08
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-30 16:46:31
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
    std::cout << numbers.size() << std::endl;
    std::cout << numbers;

    // remove all the numbers equal to 10
    // and returns an iterator on the last element
    auto it = std::remove(numbers.begin(),numbers.end(), 10);
    // numbers still have 10 elements
    std::cout << numbers;
    // Need to delete the last 4 elements using the member function erase
    numbers.erase(it, numbers.end());
    std::cout << numbers;
    return 0;
}
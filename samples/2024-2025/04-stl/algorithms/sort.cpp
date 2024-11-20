/*
* @File:    sort.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-30 14:55:08
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-18 16:54:51
*/


#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<int> data) {
    for (auto it=data.begin(); it!= data.end();++it)
        os << *it << " ";
    os << std::endl;
    return os;
}
std::ostream& operator<<(std::ostream& os, std::vector<std::string> data) {
    for (auto it=data.begin(); it!= data.end();++it)
        os << *it << " ";
    os << std::endl;
    return os;
}

int main() {
    std::vector<int> numbers = {0,-4,2,10,1,-5,6,-7,12,3};
    std::cout << "Initial: " << numbers;
    std::sort(numbers.begin(),numbers.end());
    std::cout << "Sort: " << numbers;
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Reverse: " << numbers;

    std::vector<std::string> words = {"Hello", "word", "The", "answer", "is", "42"};
    std::cout << "Initial: " << words;
    std::sort(words.begin(),words.end());
    std::cout << "Sort: " << words;
    std::reverse(words.begin(), words.end());
    std::cout << "Reverse: " << words;

    return 0;
}
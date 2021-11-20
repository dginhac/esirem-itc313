/*
* @File:    sort-with-custom-function.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-30 14:55:08
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-18 16:59:14
*/


#include <iostream>
#include <vector>
#include <string>

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

bool less_int(const int a, const int b) {
    return a < b;
}
bool greater_int(const int a, const int b) {
    return a > b;
}

bool less_str(const std::string& a, const std::string& b) {
    return a < b;
}
bool greater_str(const std::string& a, const std::string& b) {
    return a > b;
}

int main() {
    std::vector<int> numbers = {0,-4,2,10,1,-5,6,-7,12,3};
    std::cout << numbers;
    // sort using a custom function object
    std::sort(numbers.begin(),numbers.end(), less_int);
    std::cout << numbers;
    std::sort(numbers.begin(),numbers.end(), greater_int);
    std::cout << numbers;
    std::vector<std::string> words = {"Hello", "word", "The", "answer", "is", "42"};
    std::cout << words;
    // sort using a custom function object
    std::sort(words.begin(),words.end(), less_str);
    std::cout << words;
    std::sort(words.begin(),words.end(), greater_str);
    std::cout << words;
    return 0;
}
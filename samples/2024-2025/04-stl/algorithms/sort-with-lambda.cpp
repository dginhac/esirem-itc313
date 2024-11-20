/*
* @File:    sort-with-lambda.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-30 14:55:08
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-18 18:41:40
*/


#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<int> data) {
    for (auto it=data.begin(); it!= data.end();++it)
        os << *it << " ";
    os << std::endl;
    return os;
}


class Greater {
public:
    bool operator() (const int a, const int b) { return a > b;}
};

bool less(const int a, const int b) {
    return a < b;
}

int main() {
    std::vector<int> numbers = {0,-4,2,10,1,-5,6,-7,12,3};
    std::cout << "Initial: " << numbers;
    //sort using a specific function
    std::sort(numbers.begin(),numbers.end(), less);
    std::cout << "Sort function <: " << numbers;
    // sort using a functor
    std::sort(numbers.begin(),numbers.end(), Greater());
    std::cout << "Sort functor >: " << numbers;
    std::sort(numbers.begin(),numbers.end(), [](const int a, const int b) {return a<b;});
    std::cout << "Sort lambda <: " << numbers;
    return 0;
}
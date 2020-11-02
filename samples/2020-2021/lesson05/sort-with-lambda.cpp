/*
* @File:    sort-with-lambda.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-30 14:55:08
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-01 00:16:19
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

int main() {
    std::vector<int> numbers = {0,-4,2,10,1,-5,6,-7,12,3};
    std::cout << numbers;
    // sort using a functor
    std::sort(numbers.begin(),numbers.end(), Greater());
    std::cout << numbers;
    std::sort(numbers.begin(),numbers.end(), [](const int a, const int b) {return a<b;});
    std::cout << numbers;
    return 0;
}
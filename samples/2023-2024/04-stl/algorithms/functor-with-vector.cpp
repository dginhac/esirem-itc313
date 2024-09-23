/*
* @File:    functor-with-vector.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-31 11:04:22
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-31 23:58:18
*/

#include <iostream>
#include <algorithm>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<int> data) {
    for (auto it=data.begin(); it!= data.end();++it)
        os << *it << " ";
    os << std::endl;
    return os;
}


class MyAddFunctor {
public:
    MyAddFunctor(int x): _x(x) {}
    int operator() (const int value) {
        return _x + value ; }
private:
    int _x;
};

int main() {
    std::vector<int> numbers = {0,-4,2,10,1,-5,6,-7,12,3};
    std::cout << numbers;
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), MyAddFunctor(5));
    std::cout << numbers;
    return 0;
}

/*
* @File:    functor.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-31 11:04:22
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-31 23:56:53
*/

#include <iostream>

int my_add_function (int x, int y) {
    return x + y;
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
    std::cout << my_add_function(10,5) << std::endl;
    MyAddFunctor add5(5); // create object
    std::cout << add5(10) << std::endl; // call operator()
    MyAddFunctor add42(42);
    std::cout << add42(10) << std::endl; // call operator()
    return 0;
}

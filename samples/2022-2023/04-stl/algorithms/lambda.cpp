/*
* @File:    lambda.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-31 16:25:01
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-18 18:11:07
*/

#include <iostream>

class IsBetweenZeroAndTen {
  public:
  bool operator()(const int value) {
    return 0 < value && value < 10;
  }
};

int main() {
    IsBetweenZeroAndTen my_functor;
    std::cout << my_functor(4) << " " << my_functor(-5) << std::endl;
    //auto lambda = [] (int value) -> bool { return 0 < value && value < 10;};
    auto my_lambda = [] (int value) { return 0 < value && value < 10;};
    std::cout << my_lambda(4) << " " << my_lambda(-5) << std::endl;
    return 0;
}

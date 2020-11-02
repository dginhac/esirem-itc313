/*
* @File:    lambda-capture.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-31 16:25:01
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-01 00:01:09
*/

#include <iostream>

int main() {
    int upper = 42;
    //Compilation error because upper is not in the lambda scope
    //auto no_capture = [] (int value) { return 0 < value && value < upper;};
    auto no_capture = [] (int value, int max) { return 0 < value && value < max;};
    auto capture = [upper] (int value) { return 0 < value && value < upper;};

    std::cout << no_capture(4, 42) << std::endl;
    std::cout << capture(43) << std::endl;
    return 0;
}

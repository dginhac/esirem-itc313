/*
* @File:    passing-by-pointer.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-07 08:48:37
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-07 09:29:18
*/

#include <iostream>

void foo2 (std::unique_ptr<int> data, int new_value) {
    *data = new_value;
}
void foo3 (std::unique_ptr<int>& data, int new_value) {
    *data = new_value;
}
void foo4 (std::shared_ptr<int> data, int new_value) {
    *data = new_value;
}
void foo5 (std::shared_ptr<int>& data, int new_value) {
    *data = new_value;
}

int main() {
    std::cout << "Unique smart pointer" << std::endl;
    std::unique_ptr<int> u_ptr(new int(42));
    std::cout << *u_ptr << std::endl;
    foo2(std::move(u_ptr), 666);
    // up is now a hollow object
    // std::cout << *u_ptr << std::endl;

    std::cout << "Unique smart pointer with reference" << std::endl;
    std::unique_ptr<int> ur_ptr(new int(42));
    std::cout << *ur_ptr << std::endl;
    foo3(ur_ptr, 666);
    std::cout << *ur_ptr << std::endl;

    std::cout << "Shared smart pointer" << std::endl;
    std::shared_ptr<int> s_ptr(new int(42));
    std::cout << *s_ptr << std::endl;
    foo4(s_ptr, 666);
    std::cout << *s_ptr << std::endl;

    std::cout << "Shared smart pointer with reference" << std::endl;
    std::shared_ptr<int> sr_ptr(new int(42));
    std::cout << *sr_ptr << std::endl;
    foo5(sr_ptr, 666);
    std::cout << *sr_ptr << std::endl;
    return 0;
}
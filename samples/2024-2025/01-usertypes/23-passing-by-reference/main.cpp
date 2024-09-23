/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-04 14:09:16
  * @Last Modified time: 2022-10-06 14:46:58
  * 
  * @Description: Passing by reference
  */


#include <iostream>

void foo(int& y) {
    std::cout << "   Inside foo, y = " << y << std::endl;
    y++;
    std::cout << "   After update inside foo, y = " << y << std::endl;
} 

int main(int argc, char const *argv[]) {
    int x = 5;
    int& z = x; // create a reference
    std::cout << "Inside main, before foo, x = " << x << std::endl;
    std::cout << "Inside main, before foo, z = " << z << std::endl;
    foo(z); // Call foo with the reference z
    std::cout << "Inside main, after foo, z = " << z << std::endl;
    std::cout << "Inside main, after foo, x = " << x << std::endl;
    foo(x); // Compiler automatically creates a reference on x
    std::cout << "Inside main, after foo, x = " << x << std::endl;
    std::cout << "Inside main, after foo, z = " << z << std::endl;
    return 0;
}

#include <iostream>
 
int main()
{
    int x = 5;
    // print the value of variable x
    std::cout << x << std::endl;
    // print the memory address of variable x 
    std::cout << &x << std::endl; 
    // print the value at the memory address of variable x 
    std::cout << *(&x) << std::endl; 

    int &y=x;
    // print the value of variable y
    std::cout << y << std::endl;
    // print the memory address of variable y 
    std::cout << &y << std::endl;
    // print the value at the memory address of variable y 
    std::cout << *(&y) << std::endl;
    return 0;
}
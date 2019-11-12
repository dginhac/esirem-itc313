#include <iostream>
 
int main()
{
    int v = 5;
    // initialize ptr with address of variable v
    int *ptr = &v; 
    // print the address of variable v
    std::cout << &v << std::endl; 
    // print the address that ptr is holding
    std::cout << ptr << std::endl; 
    // print the value of variable v
    std::cout << v << std::endl; 
    // print the value that ptr is holding
    std::cout << *ptr << std::endl;
    return 0;
}
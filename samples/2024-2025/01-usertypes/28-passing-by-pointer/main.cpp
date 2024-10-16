#include <iostream>

void foo(int* y) {
    std::cout << "   Inside foo, y = " << *y << std::endl;
    (*y)++;
    std::cout << "   After update inside foo, y = " << *y << std::endl;
}

int main(int argc, char const *argv[]) {
    int x = 5;
    int* z = &x; // create a pointer
    std::cout << "Inside main, before foo, x = " << x << std::endl;
    std::cout << "Inside main, before foo, z = " << *z << std::endl;
    foo(z); // Call foo with the pointer z
    std::cout << "Inside main, after foo, x = " << x << std::endl;
    std::cout << "Inside main, after foo, z = " << *z << std::endl;
    foo(&x); // Call foo with the address of x
    std::cout << "Inside main, after foo, x = " << x << std::endl;
    std::cout << "Inside main, after foo, z = " << *z << std::endl;
    return 0;
}

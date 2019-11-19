#include <iostream>

int main()
{
    int* pc = nullptr; 
    int c = 5;
    std::cout << "Address of c (&c): " << &c << std::endl;
    std::cout << "Value of c (c): " << c << std::endl;
    std::cout << "Initial Address that pointer pc holds (pc): "<< pc << std::endl;
    pc = &c;    // Pointer pc holds the memory address of variable c
    std::cout << "Address that pointer pc holds (pc): "<< pc << std::endl ;
    std::cout << "Content of the address (*pc): " << *pc << std::endl;
    c = 11;    // The content inside memory address &c is changed from 5 to 11.
    std::cout << "Address pointer pc holds (pc): " << pc << std::endl ;
    std::cout << "Content of the address (*pc): " << *pc << std::endl;
    *pc = 2; 
    std::cout << "Address of c (&c): " << &c << std::endl;
    std::cout << "Value of c (c): " << c << std::endl;
    return 0;
}
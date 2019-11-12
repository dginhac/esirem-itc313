#include <iostream>
 
void foo(int& x) 
{
    std::cout << "   Inside foo, x = " << x << '\n';
    std::cout << "   Inside foo, @x = " << &x << '\n';
    x = 6;
    std::cout << "   After update inside foo, x = " << x << '\n';
} // y is destroyed here
 
int main() {
    int x = 5;
    std::cout << "Inside main, before foo, x = " << x << '\n';
    std::cout << "Inside main, before foo, &x = " << &x << '\n';
    foo(x);
    std::cout << "Inside main, after foo, x = " << x << '\n';
    return 0;
}
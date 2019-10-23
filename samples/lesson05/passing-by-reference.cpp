#include <iostream>
 
void foo(int &y) 
{
    std::cout << "   Inside foo, y = " << y << '\n';
    y = 6;
    std::cout << "   After update inside foo, y = " << y << '\n';
} // y is destroyed here
 
int main() {
    int x = 5;
    std::cout << "Inside main, before foo, x = " << x << '\n';
    foo(x);
    std::cout << "Inside main, after foo, x = " << x << '\n';
    return 0;
}
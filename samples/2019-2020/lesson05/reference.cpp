#include <iostream>
 
int main() {
    int value = 5; 
    int &ref = value;
    std::cout << "v=" << value << " - r=" << ref << '\n'; 
    value = 6; // value is now 6
    std::cout << "v=" << value << " - r=" << ref << '\n'; 
    ref = 7; // value is now 7
    std::cout << "v=" << value << " - r=" << ref << '\n'; 
    return 0;
}
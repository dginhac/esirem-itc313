// Program to compute absolute value
// Works both for integer and float

#include <iostream>

int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

int main() {
    int a = -5;
    float b = 5.5;
    std::cout << "Abs(" << a << ") = " << absolute(a) << std::endl;
    std::cout << "Abs(" << b << ") = " << absolute(b) << std::endl;
    return 0;
}


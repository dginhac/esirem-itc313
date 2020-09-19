#include<iostream>

int product(int num1, int num2) {
    return num1*num2;
}
float product(float num1, float num2) {
    return num1*num2;
}
double product(double num1, double num2) {
    return num1*num2;
}

int main() {
    int i1=3, i2=5; float f1=3.4, f2=5.6; double d1=5.67, d2=2.34;
    std::cout << "int product = " << product(i1,i2) << std::endl;
    std::cout << "float product = " << product(f1,f2) << std::endl;
    std::cout << "double product = " << product(d1,d2) << std::endl;
    return 0;
}
#include<iostream>

template <typename T>
T product(const T data1, const T data2) {
    return data1 * data2;
}

int main() {
    int i1=3, i2=5;
    int i3=product(i1,i2);
    float f1=3.4, f2=5.6;
    float f3=product(f1,f2);
    double d1=5.67, d2=2.34;
    double d3=product(d1,d2);
    return 0;
}
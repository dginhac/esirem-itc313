#include <iostream>

int* my_fct1() {
    int x = 5;
    std::cout << "In my_fct1, &x=" << &x << " - x=" << x << std::endl;
    return &x;
}

int* my_fct2() {
    int *x = new int(5);
    std::cout << "In my_fct2, &x=" << x << " - x=" << *x << std::endl;
    return x;
}

int main() {
    int* px1;
    int* px2;
    px1 = my_fct1();
    px2 = my_fct2();

    std::cout << "px1=" << px1 << " - *px1=" << *px1 << std::endl;
    std::cout << "px2=" << px2 << " - *px2=" << *px2 << std::endl;

    return 0;
}
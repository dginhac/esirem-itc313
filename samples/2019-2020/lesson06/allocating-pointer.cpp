#include <iostream>

int main() {
    int* pa;  // int *pa;
    pa = new int;
    *pa = 2;
    std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    float* pb = new float(5.12);
    std::cout << "pb=" << pb << " - *pb=" << *pb << std::endl;

    int* pc;
    pc = pa;
    std::cout << "pc=" << pc << " - *pc=" << *pc << std::endl;
    delete pa;
    delete pb;
    // no delete pc;
    return 0;
}
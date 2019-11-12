#include <iostream>

int main() {
    int *pa, *pc;
    pa = new int;
    *pa = 2;
    std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    float *pb = new float(5.12);
    std::cout << "pb=" << pb << " - *pb=" << *pb << std::endl;

    delete pa;
    pc = new int (6);
    std::cout << "pc=" << pc << " - *pc=" << *pc << std::endl;
    std::cout << "pa=" << pa << " - *pa=" << *pa << std::endl;

    delete pb;
    delete pc;
    return 0;
}
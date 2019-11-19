#include <iostream>

int main() {
    int a=1, b=2, c=4, d=10;
    std::cout << "&a=" << &a << std::endl;
    std::cout << "&b=" << &b << std::endl;
    std::cout << "&c=" << &c << std::endl;
    std::cout << "&d=" << &d << std::endl;

    int *pa, *pb, *pc, *pd;
    pa = new int;
    pb = new int;
    pc = new int;
    pd = new int;
    std::cout << "pa=" << pa << std::endl;
    std::cout << "pb=" << pb << std::endl;
    std::cout << "pc=" << pc << std::endl;
    std::cout << "pd=" << pd << std::endl;

    delete pa;
    delete pb;
    delete pc;
    delete pd;
    return 0;
}
#include <iostream>

void swap_ref (int &x, int &y) {
	int tmp = x;
	x=y;
	y=tmp;
}
void swap_ptr (int *x, int *y) {
	int tmp = *x;
	*x=*y;
	*y=tmp;
}
int main() {
    int a1 = 2, b1 = -3, a2 = 5, b2 = -8;
    std::cout << "Before swap_ref, a1=" << a1 << " - b1=" << b1 << '\n'; 
    swap_ref(a1,b1);
    std::cout << "After swap_ref, a1=" << a1 << " - b1=" << b1 << '\n';
    std::cout << "Before swap_ptr, a2=" << a2 << " - b2=" << b2 << '\n'; 
    swap_ptr(&a2,&b2);
    std::cout << "After swap_ptr, a2=" << a2 << " - b2=" << b2 << '\n';
    return 0;
}
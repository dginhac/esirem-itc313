#include <iostream>

void swap (int &x, int &y) {
	int tmp = x;
	x=y;
	y=tmp;
}
 
int main() {
    int a = 2, b = -3;
    std::cout << "Before, a=" << a << " - b=" << b << '\n'; 
    swap(a,b);
    std::cout << "After, a=" << a << " - b=" << b << '\n';
    return 0;
}
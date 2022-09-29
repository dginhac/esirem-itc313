#include <iostream>
#include <math.h>

int add(int x1, int x2) {
	return x1+x2;
}

int main() {
	int result = add(4,5);
	std::cout << "4+5=" << result << std::endl;
	int a = 4; int b=3;
	result = pow(a,b);	 
	std::cout << a << "^" << b << "=" << result << std::endl;
	return 0;
}

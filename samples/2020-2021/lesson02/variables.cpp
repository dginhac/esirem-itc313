#include <iostream>
using namespace std;

int main() {
	// integer type can be short, long, and unsigned
	int i1 = 1; int i2(5);
	// floating point type (simple or double precision)
	float r1 = 3.14159, r2(0.12345);
	double d1 = 6e-4, d2(0.4);
	// character type
	char c1 = 'A', c2('B');
	// boolean : true or false
	bool b1 = true, b2(false);
	// constant can not be modified and must be initialized when declared
	const int c_int = 10;
	cout << "i1 = " << i1 << " - i2 = " << i2 << endl;
	cout << "r1 = " << r1 << " - r2 = " << r2 << endl;
	cout << "d1 = " << d1 << " - d2 = " << d2 << endl;
	cout << "c1 = " << c1 << " - c2 = " << c2 << endl;
	cout << "b1 = " << b1 << " - b2 = " << b2 << endl;
	cout << "c_int = " << c_int << endl;
	return 0;
}

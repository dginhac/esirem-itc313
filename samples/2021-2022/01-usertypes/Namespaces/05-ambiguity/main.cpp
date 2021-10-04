#include <iostream>

namespace myMath {
	double abs(double nb) {
		if (nb<0) return -nb;
		return nb;
	}
}

using std::cout;
using std::endl;
//using namespace myMath;

int main() {
	double number1 = -3.14;
	cout << abs(number1) << endl;
	return 0;
}

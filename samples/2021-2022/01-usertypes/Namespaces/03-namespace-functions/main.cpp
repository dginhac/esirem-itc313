#include <iostream>


namespace myMath {
	double abs(double nb) {
		std::cout << "inside abs: " << nb << std::endl;
		if (nb<0) return -nb;
		return nb;
	}
}

int main() {
	double number1 = -3.14;
	std::cout << abs(number1) << std::endl;
	std::cout << myMath::abs(number1) << std::endl;
	return 0;
}

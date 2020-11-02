#include <iostream>
#include <array>

double array_mean(double means[6], int size) {
    double m =0.0;
    for (int i = 0; i < size; i++) {
        m+= means[i];
    }
    return m/size;
}

double stdarray_mean(std::array<double, 6> means) {
    double m=0.0;
    for (double value: means) {
        m+=value;
    }
    return m/means.size();
}

int main() {
    double a1[6] = {10, 8.5, 12, 16.5, 13.5, 18 };
    std::array<double, 6> a2 = {10, 8.5, 12, 16.5, 13.5, 18};
    double m1 = array_mean(a1,6);
    double m2 = stdarray_mean(a2);
    std::cout << m1 << std::endl;
    std::cout << m2 << std::endl;
    return 0;
}

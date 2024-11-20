#include <iostream>
#include <array>

double array_mean(double data[], int size) {
    auto mean =0.0;
    for (auto i = 0; i < size; i++) {
        mean+= data[i];
    }
    return mean/size;
}

double stdarray_mean(std::array<double, 6> data) {
    auto mean=0.0;
    for (auto value: data) {
        mean+=value;
    }
    return mean/data.size();
}

int main() {
    double data1[6] = {10, 8.5, 12, 16.5, 13.5, 18 };
    std::array<double, 6> data2 = {10, 8.5, 12, 16.5, 13.5, 18};
    auto mean1 = array_mean(data1,6);
    auto mean2 = stdarray_mean(data2);
    std::cout << mean1 << std::endl;
    std::cout << mean2 << std::endl;
    return 0;
}

#include <iostream>
#include <vector>

int sum1(std::vector<int> data) {
    int s=0;
    auto it=data.begin();
    while (it != data.end()) {
        s+= *it;
        ++it;
    }
    return s;
}
int sum2(std::vector<int>& data) {
    int s=0;
    auto it=data.begin();
    while (it != data.end()) {
        s+= *it;
        ++it;
    }
    return s;
}
int sum3(const std::vector<int>& data) {
    int s=0;
    auto it=data.begin();
    while (it != data.end()) {
        s+= *it;
        ++it;
    }
    return s;
}
int main() {
    std::vector<int> numbers = {1,3,5,7,9,11,13,15,17,19};
    std::cout << sum1(numbers) << std::endl;
    std::cout << sum2(numbers) << std::endl;
    std::cout << sum3(numbers) << std::endl;
    return 0;
}
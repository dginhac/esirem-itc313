#include<iostream>
#include<string>
// overloading of * on string objects
std::string operator*(int n, const std::string &str) {
    std::string tmp ="";
    for (int i=0;i<n;i++)
        tmp += str;
    return tmp;
}
// To avoid error if str*int
std::string operator*(const std::string &str, int n) {
    return n*str;
}
int main() {
    std::string test = "abc";
    std::string result = 3*test;
    std::string result2 = test*3;
    std::cout << "3*abc=" << result << std::endl;
    std::cout << "abc*3=" << result2 << std::endl;
    return 0;
}
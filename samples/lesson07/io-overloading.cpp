#include<iostream>
class Complex {
    private:
        double m_real, m_imag;
    public:
    Complex(double r = 0, double i =0) : m_real(r), m_imag(i) {}
    Complex operator + (Complex const &c) {
        return Complex(m_real + c.m_real, m_imag + c.m_imag);
    }
    friend std::ostream& operator << (std::ostream &output, Complex obj);
    friend std::istream& operator >> (std::istream &input, Complex &Obj);
};
std::ostream& operator << (std::ostream &output, Complex obj) {
    output << obj.m_real << " + i" << obj.m_imag << std::endl;
    return output; // return so we can chain calls to operator<<
}
std::istream& operator >> (std::istream &input, Complex &obj) {
    std::cout << "Real? "; input >> obj.m_real;
    std::cout << "Imag? "; input >> obj.m_imag;
    return input;
}
int main() {
    Complex c1(10, 5), c2;
    std::cin >> c2;
    Complex c3 = c1 + c2;
    std::cout << c3;
    return 0;
}
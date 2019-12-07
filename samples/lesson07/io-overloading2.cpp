#include<iostream>
class Complex {
    private:
        double m_real, m_imag;
    public:
    Complex(double r = 0, double i =0) : m_real(r), m_imag(i) {}
    Complex operator + (Complex const &c) {
        return Complex(m_real + c.m_real, m_imag + c.m_imag);
    }
    double get_real() { return m_real;}
    double get_img() { return m_imag;}
    void set_real(double r) {m_real = r;}
    void set_img(double i) {m_imag = i;}
};
std::ostream& operator << (std::ostream &output, Complex obj) {
    output << obj.get_real() << " + i" << obj.get_img() << std::endl;
    return output; // return so we can chain calls to operator<<
}
std::istream& operator >> (std::istream &input, Complex &obj) {
    double r,i;
    std::cout << "Real? "; input >> r; obj.set_real(r);
    std::cout << "Imag? "; input >> i; obj.set_img(i);;
    return input;
}
int main() {
    Complex c1(10, 5), c2;
    std::cin >> c2;
    Complex c3 = c1 + c2;
    std::cout << c3;
    return 0;
}
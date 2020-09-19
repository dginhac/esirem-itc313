#include<iostream>
class Complex {
    private:
        double m_real, m_imag;
    public:
    Complex(double r = 0, double i =0) : m_real(r), m_imag(i) {}
    Complex operator + (Complex const &c) {
        return Complex(m_real + c.m_real, m_imag + c.m_imag);
    }
    Complex operator - () {
        return Complex(-m_real, -m_imag);
    }
    Complex operator - (Complex const &c) {
        return Complex(m_real - c.m_real, m_imag - c.m_imag);
    }
    void display() {
        std::cout << m_real << " + " << m_imag <<" i"<<std::endl;
    }
};
int main() {
    Complex c1(3, 5), c2(2, 8);
    Complex c3 = c1 + c2;     c3.display();
    Complex c4 = -c3;    c4.display();
    Complex c5 = c1 - c2;     c5.display();
    return 0;
}
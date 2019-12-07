#include<iostream>

class Complex {
    int m_real, m_imag;
public:
    Complex(int r = 0, int i =0) : m_real(r), m_imag(i) {}
    void display() { std::cout << m_real << " + i" << m_imag << std::endl; }
	// The global operator function is made friend of this class so
	// that it can access private members
	friend Complex operator + (const Complex& obj1, const Complex& obj2);
    friend bool operator == (const Complex& obj1, const Complex& obj2);
    friend Complex operator * (const Complex& obj1, double coeff);
};
Complex operator + (const Complex& obj1, const Complex& obj2) {
    return Complex(obj1.m_real + obj2.m_real, obj1.m_imag + obj2.m_imag);
}
bool operator == (const Complex& obj1, const Complex& obj2) {
    return ((obj1.m_real == obj2.m_real) && (obj1.m_imag == obj2.m_imag));
}
Complex operator * (const Complex& obj1, double coeff) {
    return Complex (obj1.m_real*coeff, obj1.m_imag*coeff);
}
int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;  c3.display();
    std::cout << "c1 == c2: " << (c1 == c2) << std::endl;
    Complex c4 = c1 * 2.5; c4.display();
    return 0;
}


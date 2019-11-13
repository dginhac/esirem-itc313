#include<iostream> 
#include <math.h>
#include <string.h>
using namespace std; 

class Complex {
private:
    double m_real;
    double m_imag;

public:
	// Question 1:
    Complex(double real=0.0, double imag=0.0) : m_real(real), m_imag(imag) { }
    // Question 2:
    double real() const { return m_real;}
    double img() const { return m_imag; }
    // Question 3:
    void update(double real, double imag) {
    	m_real = real;
    	m_imag = imag;
    }
    // Question 4:
    void polar() const {
    	cout << sqrt(m_real*m_real + m_imag*m_imag) << endl;
    	cout << atan2(m_imag, m_real) << endl;
    }
    // Overload <<
    friend ostream& operator << (ostream &output, Complex obj);    
};
// Overload << to display a complex
ostream& operator << (ostream &output, Complex obj) {
    output << obj.m_real << " + " << obj.m_imag << "i";
    return output; // return so we can chain calls to operator<<
}

// Question 5
class GenericComplex {
private:
    double m_a;
    double m_b;
public:
	GenericComplex(bool type, double a, double b) {
		if (type) {
			m_a = a; 
			m_b = b;
		}
		else {
			m_a = a * cos(b);
			m_b = a * sin(b);
		}
	}
	friend ostream& operator << (ostream &output, GenericComplex obj);    
 };

 ostream& operator << (ostream &output, GenericComplex obj) {
    output << obj.m_a << " + " << obj.m_b << "i";
    return output; // return so we can chain calls to operator<<
}



 
int main()
{
    Complex c1(0, 1);
    cout << c1 << endl;
    c1.polar();

    GenericComplex c2(true, sqrt(2)/2, sqrt(2)/2);
    cout << c2 << endl;

    GenericComplex c3(false, 1, 3.14159/4);
    cout << c3 << endl;

 
    return 0;
}
#include<iostream>
class Point {
    private:
        double m_x, m_y;
    public:
    Point(double x = 0, double y =0) : m_x(x), m_y(y) {};
    double get_x() const  {return m_x;};
    double get_y() const {return m_y;};
    void display() {
        std::cout << "x=" << m_x << " - y=" << m_y << std::endl;
    }
    Point operator * (double coeff) {
        return Point(m_x*coeff, m_y*coeff);
    }
};

int main() {
    Point p1(3, 5);
    Point p2 = p1*3; // 3*p1 does not work
    p1.display(); p2.display();
    return 0;
}
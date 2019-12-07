#include<iostream>
class Date {
    private:
        int m_month, m_day;
    public:
    Date(int m=1, int d=1) : m_month(m), m_day(d) {}
    bool operator < (Date const &d) {
        if (m_month < d.m_month) return true;
        if ((m_month == d.m_month) && (m_day < d.m_day)) return true;
        return false;
    }
};
int main() {
    Date d1(05,26), d2(12,12), d3(05,04);
    std::cout  << "Test 1: " << (d1 < d2) << std::endl;
    std::cout  << "Test 2: " << (d1 < d3) << std::endl;
    return 0;
}
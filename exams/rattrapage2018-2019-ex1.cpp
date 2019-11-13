#include <iostream>
#include <math.h>
using namespace std;
 
class Point {
   double m_x, m_y;
public:
   // Question 1 + 2 + 3
   Point (double x=0, double y=0) : m_x(x), m_y(y) {}
   // Question 4
   Point (const Point& p) : m_x (p.m_x), m_y (p.m_y) {}
   // Question 5
   double getX() const { return m_x; } ;
   double getY() const { return m_y; }
   void setX  (double x) { m_x = x; } 
   void setY (double y) { m_y = y; } 
   void setPoint (double x, double y) {
      m_x = x;
      m_y = y;
   }
   // Question 6
   void affiche () {
      cout << "x = " << m_x << " - y = " << m_y << endl; 
   }
   // Question 7
   friend ostream& operator << (ostream &output, const Point &p) {
      output << "x = " << p.m_x << " - y = " << p.m_y << endl;
      return output;
   }
   // Question 8
   void change (double x, double y) {
      m_x = x;
      m_y = y;
   }
   // Question 9
   void reset() {
      change(0,0);
   }
   // Question 10
   void deplace (double dx, double dy) {
      m_x += dx;
      m_y += dy;
   }
   double distance (const Point &p) const {
      double dx = m_x - p.m_x;
      double dy = m_y -p.m_y;

      return sqrt (dx*dx + dy*dy);
   }

   Point milieu (const Point &p) const {
      Point m;
      m.m_x = (p.m_x + m_x)/2;
      m.m_y = (p.m_y + m_y)/2;
      return m;
   }

   

};

int main() {
   Point a, b, c;

   cout << a << endl;
   
   a.setPoint (1.2, 4.5);

   cout << a << endl;
   b.setPoint (2.3, 7.8);

   cout << a.distance(b) << endl;

   c = a.milieu(b);

   a.affiche();
   b.affiche();
   c.affiche();

   cout << c;
   c.change(6,7);
   cout << c;
   c.reset();
   cout << c;

   a.deplace(1.0,2.0);
   a.affiche();

   return 1;
}

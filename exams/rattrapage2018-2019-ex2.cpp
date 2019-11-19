#include <iostream>
#include <math.h>
using namespace std;
 
class Point {
   double m_x, m_y;
public:

   //Point () : m_x(0), m_y(0) {}
   Point (double x=0, double y=0) : m_x(x), m_y(y) {}
   Point (const Point& p) : m_x (p.m_x), m_y (p.m_y) {}

   double getX() const { return m_x; } ;
   double getY() const { return m_y; }
   void setX  (double x) { m_x = x; } 
   void setY (double y) { m_y = y; } 

   void setPoint (double x, double y) {
      m_x = x;
      m_y = y;
   }
   void deplace (double dx, double dy) {
      m_x += dx;
      m_y += dy;
   }

   void change (double x, double y) {
      m_x = x;
      m_y = y;
   }

   void reset() {
      change(0,0);
   }

   void affiche () {
      cout << "x = " << m_x << " - y = " << m_y << endl; 
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

   friend ostream& operator << (ostream &output, const Point &p) {
      output << "x = " << p.m_x << " - y = " << p.m_y << endl;
      return output;
   }

};

class Segment {
   Point a,b;
public:
   // Question 1
   Segment (double ax, double ay, double bx, double by) : a(ax, ay), b (bx, by) {}
   Segment (const Point &p1, const Point &p2) : a(p1), b(p2) { cout << "ok " << endl;}

   // Question 2
   double longueur () {
      double dx = a.getX() - b.getX();
      double dy = a.getY() -a.getY();
      return sqrt (dx*dx + dy*dy);
   }

   // Question 3
   Point milieu () {
      Point m;
      m.setX( (a.getX() + b.getX())/2);
      m.setY( (a.getY() + b.getY())/2);
      return m;
   }

   // Question 4
   double coeff_directeur() {
      double c;
      c = (b.getY() - a.getY()) / (b.getX() - a.getX());
      return c;
   }

   double origine() {
      double o;
      o = a.getY() - coeff_directeur()*a.getX();
      return o;
   }

   // Question 5
   bool comprend_le_point (Point &p) {
      if (p.getY() == coeff_directeur()*p.getX() + origine()) {
         return true;
      }
      else {
         return false;
      }
   }
} ;

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

   Segment s (1,2,3,4);

   Segment s2 (a, b);

   cout << a;
   cout << b;
   cout << s2.longueur() << endl; 

   Point mi = s2.milieu();
   cout << mi;
   

   return 1;
}

#include <iostream>
using namespace std;
 
template <typename T=int, int count=3> T XXXX(T x) {
   for(int i=1; i<=count; i++) {
      cout <<  i << ": " << x << endl;
      x += i * x;
   }
   return x;
};

int main() {
   int xi = 2;
   int rxi = XXXX<>(xi);
   cout << xi << ":: " << rxi  << endl;
   float xf = 2.5;
   float rxf = XXXX<float, 4>(xf);
   cout << xf << ":: " << rxf  << endl;
   return 1;
}

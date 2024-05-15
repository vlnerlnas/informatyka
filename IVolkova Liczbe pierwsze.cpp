#include <iostream>
using namespace std;
int main() {
   int n;
   cout << "Ile liczb pierwszych chcesz wyswietlic: ";
   cin >> n;
   int lp = 0;
   int p = 2; 
   for (lp = 0; lp < n; ) {
       int d;
       for (d = 2; d < p; ++d) {
           if (p % d == 0) {
               break;
           }
       }
       if (d == p) {
           cout << p << " ";
           ++lp;
       }
       ++p;
   }
   cout << endl;
   return 0;
}

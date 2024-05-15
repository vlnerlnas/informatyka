#include <iostream>
using namespace std;
void lmao(int n) {
   int k = 2;
   cout << "Czynniki pierwsze liczby " << n << ": ";
   for (k = 2; n > 1; k++) {
       for (; n % k == 0; n /= k) {
           cout << k << " ";
       }
   }
   cout << endl;
}
int main() {
   int liczba;
   cout << "Podaj liczbe: ";
   cin >> liczba;
   lmao(liczba);
   return 0;
}
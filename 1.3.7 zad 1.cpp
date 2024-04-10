#include <iostream>
using namespace std;

int silnia(int n) {
   if (n == 0) {
       return 1;
   } else {
       return n * silnia(n - 1);
   }
}
int main() {
   int liczba;
   cout << "Podaj liczbe: ";
   cin >> liczba;
   int wynik = silnia(liczba);
   cout << liczba << "! = " << wynik << endl;
   return 0;
}

#include <iostream>
using namespace std;
int main() {
   int n = 3;
   int* wsk = &n;
   cout << "Zawartosc wskaznika wsk: " << *wsk << ;
   cout << "Adres zmiennej n: " << &n << ;
   cout << "Adres zmiennej n: " << wsk << ;
   return 0;
}
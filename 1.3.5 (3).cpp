#include <iostream>
using namespace std;
void modyfikuj(float* a, float* b, float* c) {
   *a += 1;
   *b += 2;
   *c += 3;
}
int main() {
   float a = 1.0f, b = 1.0f, c = 1.0f;
   cout << "wartosci zmiennych";
   cout << "a: ", << a <<;
   cout << "b: " << b <<;
   cout << "c: " << c <<;
   modyfikuj(&a, &b, &c);
   cout << "wartosci zmiennych po modyfikacji" << ;
   cout << "a: " << a << ;
   cout << "b: " << b << ;
   cout << "c: " << c << ;
   return 0;
}
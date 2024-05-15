#include <iostream>
namespace std {
   void WyszukiwanieLiniowe(int szukana, int tab[], int rozmiar) {
       int* liczby = new int[rozmiar]; 
       int index = 0;
       for (int i = 0; i < rozmiar; ++i) {
           liczby[i] = -1; 
       }
           }
       }
       cout << "Poszukiwana liczba znajduje sie na pozycji: ";
       for (int i = 0; i < rozmiar; ++i) {
           if (liczby[i] != -1) {
               cout << liczby[i];
               }
           }
       }
       cout << endl;
    
       delete[] liczby;
   }
}
int main() {
   int szukana;
   std::cout << "ktora liczbe poszukujesz: ";
   std::cin >> szukana;
   int tab[] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
   std::WyszukiwanieLiniowe(szukana, tab, rozmiar);
   return 0;
}

   
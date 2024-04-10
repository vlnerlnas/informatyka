#include <iostream>
using namespace std;

int main()
{
	 char tablica[100];
    cout<<"Podaj imie i nazwisko: "; 
    cin.getline(tablica,100); 
    cout<<"Twoje dane osobowe: "<<tablica<<endl;

 int spaceIndex = -1;
   int nullIndex = -1;
   for (int i = 0; tablica[i] != '\0'; ++i) {
       if (tablica[i] == ' ' & spaceIndex == -1) {
           spaceIndex = i;
       }
       nullIndex = i;
   }
   std::cout << "Pozycja spacji: " << spaceIndex << std::endl;
   std::cout << "Pozycja konca tekstu: " << nullIndex << std::endl;
   return 0;
}


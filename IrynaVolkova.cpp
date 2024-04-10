#include<iostream>
using namespace std;
void slay(int tablica[]){
	cout << "daj 10 liczb prosze";
	for (int i = 0; i < 10; ++i){
		cin >> tablica[i]
	}
}
		
	}
bool nwm(int tablica [], int szukanaliczba) {  
	for (int i = 0; i < 10; ++i) {
	if (tablica[i] == szukanaliczba){
	return true;
	}
		} 
		return false;
}
int main() {
	int tablica[10];
	slay(tablica);
	int szukanaliczba;
	cout << "daj inna liczbe";
	cin >> szukana liczba;
	
	if (nwm(tablica, szukanaliczba)){
		cout << "git znajduje sie tu";
		
	} else {
		cout << "lmao liczba sie tu nie znajduje";
	}
 return 0
}
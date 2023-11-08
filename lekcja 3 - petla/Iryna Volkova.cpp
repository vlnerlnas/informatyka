#include <iostream>
using namespace std;

int main(){
	/* inkrementacja
		i = 1 + 1
		i += 1
		i++
		Dekrementacja
		i = i - 1
		i -= 1
		i--
		for(wartoscPoczatkowa; warunekKonczacy; krok)
	*/
	for(int i = 7; i < 69; i++){
		cout << i << endl;
	}
	
	// petla zagniedzona
	for(int i = 0; i < 5; i++){
	for(int j = 3; j < 6; j++ ){
		cout << "*";			
	}
	cout << endl;
	}
	
cout << endl;
system("pause");
}
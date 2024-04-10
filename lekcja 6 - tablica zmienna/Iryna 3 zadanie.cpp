#include <iostream>
using namespace std;

int main()
{
	 cout << "Wprowadż 5 liczb" << endl;
int liczba[ 5 ];
	for(int i=0; i <5; i++)
	{
    cin >> liczba[ i ];
}
	cout << "Liczby Uiemne sa zaminione nA 0: ";
		for(int i=0; i <5; i++)
{	if(liczba[i]<=0 ){


    cout << "0" << ", ";
}
    else cout << liczba[ i ] << ", ";
}
	
}

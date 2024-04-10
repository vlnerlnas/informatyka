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
	cout << "Liczby odwrotne: ";
		for(int i=4; i >=0; i--)
{	

    cout << liczba[ i ] << ", ";
}
}

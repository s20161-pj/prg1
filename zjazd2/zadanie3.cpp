//Walkiewicz Joanna

#include <iostream>
int main()
{
using std::cout;
using std::cin;
using std::endl;

int doZgadniecia;
int liczba;
cout <<"Podaj liczbę do zgadnięcia: ";
cin>> doZgadniecia;
cout <<"Podaj swoją liczbę ";
cin>> liczba;
while(doZgadniecia != liczba)
{
	if(liczba > doZgadniecia) {
	cout <<"Liczba jest za duża" << endl;
	} else {
	cout << "Liczba jest za mała" << endl;
	}

	cout << "Podaj swoją liczbę " << endl;
	cin>> liczba;
}

cout <<"Zgadłeś!"<< endl;
}

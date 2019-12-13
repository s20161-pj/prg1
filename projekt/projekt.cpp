#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

string WyswietlHaslo(string haslo) {
	string h = "";

	for (int i = 0; i < haslo.length(); i++) {
		h = h + haslo[i] + " ";
	}

	return h;
}

int main()
{
	string haslo = "supermarket";
	string hasloDoOdgadniecia = "";
	for (int i = 0; i < haslo.length(); i++)
	{
		hasloDoOdgadniecia = hasloDoOdgadniecia + "_";
	}
	cout << WyswietlHaslo(hasloDoOdgadniecia);
	// l - wczytywana litera
	char l;
	//r - ilosc rund
	
	for (int r = 1; r <= 5; r++)
	{
		cout << endl << "Gracz pierwszy podaje litere: ";
		cin >> l;
		for (int j = 0; j < haslo.length(); j++)
		{
			char literaSprawdzana = haslo[j];
			if (l == literaSprawdzana)
			{
				hasloDoOdgadniecia[j] = l;
			}
		}
		cout << WyswietlHaslo(hasloDoOdgadniecia);

		cout << endl << "Gracz drugi podaje litere: ";
		cin >> l;
		for (int j = 0; j < haslo.length(); j++)
		{
			char literaSprawdzana = haslo[j];
			if (l == literaSprawdzana)
			{
				hasloDoOdgadniecia[j] = l;
			}


		}
		cout << WyswietlHaslo(hasloDoOdgadniecia);
	}

}


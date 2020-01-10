#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

void UsunLitere(string &tekst, char c)
{
	string result;
	remove_copy_if(begin(tekst), end(tekst), back_inserter(result), bind1st(equal_to<char>{}, c));
	tekst = result;
}

string WyswietlHaslo(string haslo) {
	string h = "";

	for (int i = 0; i < haslo.length(); i++) {
		
		h = h + haslo[i] + " ";
	}

	return h;
}
string PobierzHasloDlaRundy(int numerRundy)
{
	int losowaliczba;
	vector<string>vector;
	fstream plik;

	int losowaLiczbaPliku = rand() % 5 + 1;
	string nazwaPliku = "runda" + to_string(numerRundy) + "_plik_" + to_string(losowaLiczbaPliku) + ".txt";
	plik.open(nazwaPliku, ios::in);
	if (plik.good() == false)
	{
		cout << "plik" + nazwaPliku + " nie istnieje";
		exit(0);
	}
	std::string linia;
	while (std::getline(plik, linia))
	{
		vector.push_back(linia);
	}
	losowaliczba = rand() % vector.size();
	plik.close();

	return vector[losowaliczba];

}
string LosujNagrode ()
{
	int losowaNagroda = rand() % 20;
	string nagrody[20] = { "100 zl","200 zl", "300 zl", "400 zl", "500 zl", "600 zl", "700 zl", "800 zl", "900 zl", "1000 zl", "1500 zl", "2000 zl", "2500 zl", "3000 zl", "5000 zl","10000 zl", "15000 zl", "wycieczka zagradniczna dla 2 osób", "voucher do spa dla 2 osób", "ekspres do kawy" };
	return nagrody[losowaNagroda];

}
string WylosowaneNagrody(vector<string> &LosowaneNagrody)
{
	string wylosowane = "";
	int i;
	for (i = 0; i < LosowaneNagrody.size(); i++)
	{
		wylosowane = wylosowane + LosowaneNagrody.at(i) + " ";
	}
	return wylosowane;
}
int main()
{
	srand(time(0));
	setlocale(LC_CTYPE, "Polish");
	vector<string>nagrodyGracza1;
	vector<string>nagrodyGracza2;

	for (int r =  1; r <= 5; r++)
	{
		vector<char>zgadnieteLitery;

		cout << endl << endl<< "Runda " + to_string(r) << endl;
		
		
		string haslo = PobierzHasloDlaRundy(r);
		cout<<haslo;
		vector<char> literyDoOdgadniecia(haslo.begin(), haslo.end());
		int iloscLiterDoOdgadniecia = literyDoOdgadniecia.size();
		string hasloDoOdgadniecia = "";

		int dlugoscHasla = haslo.length();
		for (int i = 0; i < dlugoscHasla; i++)
		{
			hasloDoOdgadniecia = hasloDoOdgadniecia + "_";
		}
		cout << WyswietlHaslo(hasloDoOdgadniecia);

		while (iloscLiterDoOdgadniecia > 0) {
			cout << endl << "Gracz pierwszy podaje litere: ";
			char l;
			cin >> l;
			bool trafione = false;
			for (int j = 0; j < dlugoscHasla; j++)
			{
				char literaSprawdzana = haslo[j];
				if (tolower(l) == tolower(literaSprawdzana) && (std::find(literyDoOdgadniecia.begin(), literyDoOdgadniecia.end(), literaSprawdzana) != literyDoOdgadniecia.end()))
				{
					hasloDoOdgadniecia[j] = tolower(l);
					literyDoOdgadniecia[j] = '\0';
					iloscLiterDoOdgadniecia = iloscLiterDoOdgadniecia - 1;
					nagrodyGracza1.push_back(LosujNagrode());
					trafione = true;
				}
			}

			if (!trafione) {
				nagrodyGracza1.clear();
			}

			cout << "Nagrody gracza pierwszego: " + WylosowaneNagrody(nagrodyGracza1) << endl;
			cout << WyswietlHaslo(hasloDoOdgadniecia);

			if (iloscLiterDoOdgadniecia > 0) {
				cout << endl << "Gracz drugi podaje litere: ";
				cin >> l;
				bool trafione = false;
				for (int j = 0; j < dlugoscHasla; j++)
				{

					char literaSprawdzana = haslo[j];
					if (tolower(l) == tolower(literaSprawdzana) && (std::find(literyDoOdgadniecia.begin(), literyDoOdgadniecia.end(), literaSprawdzana) != literyDoOdgadniecia.end()))
					{

						hasloDoOdgadniecia[j] = tolower(l);
						literyDoOdgadniecia[j] = '\0';
						iloscLiterDoOdgadniecia = iloscLiterDoOdgadniecia - 1;
						nagrodyGracza2.push_back(LosujNagrode());
						trafione = true;
					}
				}

				if (!trafione) {
					nagrodyGracza2.clear();
				}

				cout << "Nagrody gracza drugiego: " + WylosowaneNagrody(nagrodyGracza2) << endl;
				cout << WyswietlHaslo(hasloDoOdgadniecia);

			}
			
			
		}
	}
}

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;
int main()
{
	int n = 0;
	vector<string>nazwaKlas;
	vector<string>imionaGraczy;

	while (n <= 0)
	{
		cin >> n;
	}
	string nazwa;
	for (int i = 0; i < n; i++)
	{
		cin >> nazwa;
		nazwaKlas.push_back(nazwa);
		
	}
	string imiona;
	for (int j = 0; j < n; j++)
	{
		cin >> imiona;
		imionaGraczy.push_back(imiona);
	}
	int liczba;

	for (int i = 0; i < nazwaKlas.size(); i++)
	{	
		liczba = rand() % n;
		
		cout << nazwaKlas.at(i) << "-" << imionaGraczy.at(liczba) << endl;
		imionaGraczy.erase(imionaGraczy.begin() + liczba);
		n = n - 1;
	}

}

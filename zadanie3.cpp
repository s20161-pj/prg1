#include <iostream>
using namespace std;

int main() {
	int i, j;
	cin >> i;
	do {
		cin >> j;
	} while (i != j) 
	{
		if (i ==j) cout << "Brawo wygrales";
		if (j > i) cout << "Liczba jest za duza";
		if (j < i) cout << "Liczba jest za mala";
	}
	return 0;
}

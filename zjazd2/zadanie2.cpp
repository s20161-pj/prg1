//Walkiewicz Joanna


#include <iostream>

using namespace std;

int main()
{
	cout << "Podaj rozmiar diamentu: ";
	int r;
	int w;
	int s;
	int x;
	int y;
	int g;
	cin >> r;
	y = (2 * r) + 1;
	for (w=0; w<((2*r)+1); w++)
	{
		x = r - w;
		if (x < 0)
		{
			x = -x;
		}
       for (s=0; s<x; s++) 
	   { 
		   cout << " ";
	   }
	 
	   for (g=0; g<y-(2*s);g++)
	   {
		   if (g == 0)
		   {
			   cout << "*";
		   }
		   else if(g==y-(2*s)-1) 
		   {
			   cout << "*";
		   }
		   else 
		   {
			   cout << " ";
		   }
	   }
	   cout << endl;
	}

	return 0;
}

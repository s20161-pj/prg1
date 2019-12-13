#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	
	int i;
	std::vector<int>vector;
	while (cin>>i)
	{
		if (i > 0)
		{
			vector.push_back(i);
		}
		if (i==0)
		{
			break;
		}
	}
	float suma = 0;
	for (i = 0; i <= vector.size() - 1; i++)
	{
		suma = vector[i] + suma;
	}
	cout << suma / vector.size();
}


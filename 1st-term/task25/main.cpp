// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double funkcja(int n, unsigned int *tab)
{
	double suma = 0;
	for (int i = 0; i < n - 1; i++)
	{
		suma += tab[i];
	}
	return suma/n;


}
int main()
{
	int n;
	cin >> n;
	unsigned int *tab = new unsigned int[n];
	cout << funkcja(n, tab);
	system("pause");
    return 0;
}


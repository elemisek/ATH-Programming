#include "stdafx.h"
#include <iostream>
using namespace std;
void dodawanie (int tab1[10][10], int tab2[10][10])
{
	cout << endl << "DODAWANIE" << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << tab1[i][j] + tab2[i][j] << '  ';
		}
		cout << endl;
	}
}
void mnozenie(int tab1[10][10], int tab2[10][10])
{
	int suma = 0;
	int tab3[10][10];
	cout << endl << "MNOZENIE" << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			suma = 0;
			for (int k = 0; k < 10; k++)
			{
				suma += tab1[i][j] * tab2[j][i];
				tab3[i][j] = suma;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << tab3[i][j] << ' ';

		}
		cout << endl;
	}

}
int main()
{
	int tab1[10][10];
	int tab2[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			tab1[i][j] = 1;
			tab2[i][j] = 2;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << tab1[i][j] << '  ';
			
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << tab2[i][j] << '  ';

		}
		cout << endl;
	}
	dodawanie(tab1, tab2);
	mnozenie(tab1, tab2);

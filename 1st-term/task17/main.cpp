// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int zwraca(int *tab,int ile)
{
	int wynik = *tab;
	for (int i = 0; i < ile; i++)
	{
		if (*tab > wynik) wynik = *tab;
		tab++;
	}
	
	return wynik;
	
}


int main()
{
	
	int n,ile;
	cout << "ile chcesz podac liczb";
	cin >> ile;
	int *tablica;
	tablica = new int[ile];

	for (int i = 0; i < ile; i++)
	{
		cin >> tablica[i];
		
	}

	for (int i = 0; i < ile; i++)
	{
		cout<< tablica[i]<<endl;
		
		
	}

	cout << "najwiksza wartosc to : "<< zwraca(tablica,ile);
	system("pause");
	return 0;
}


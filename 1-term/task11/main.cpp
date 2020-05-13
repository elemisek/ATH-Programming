// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int dwa(int a)
{
	int wynik = 2;
	for(int i = 1; i < a; i++)
	{
		wynik = wynik * 2;
}
	return wynik;
}


int main()
{
	int n;
	cin >> n;
	cout<<dwa(n);
	system("pause");
    return 0;
}


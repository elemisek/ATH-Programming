// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int funkcja(int x)
{
	int p = 0, k = x, sr;
	while (k - p > 1)
	{
		sr = (p + k) / 2
			if (sr*sr <= x)
				p = sr;
			else
				k = sr;
	}
	if (x <= 1)
		return k;
	else
		return p;
}
void wypisz((int n)
{
	int p;
	for (int i = 1; i < funkcja(n); i++)
	{
		p=funkcja(n-i*i)
			if((i*i+p*p==n)&&(i<p))
				cout << 
	}
}
int main()
{
    return 0;
}


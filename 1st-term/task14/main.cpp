// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
double pseudolosowe(int n)
{
	double * tab = new double[n];
	tab[0] = 0.5;
	for (int i = 1; i < n; i++)
	{
		tab[i] = 1 - (tab[i - 1] * tab[i - 1])
	}

}

int main()
{
    return 0;
}


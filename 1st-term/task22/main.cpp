// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double*funkcja(int n)
{
	double *b = new double[n];
	return b;
}
int main()
{
	int n;
	cin >> n;
	cout << funkcja(n);
	system("pause");
    return 0;
}


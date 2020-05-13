// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int funkcja(int n)
{
	if (n < 1)
		return 1;
	return 2 * funkcja(n - 1) + 5;
}

int main()
{
	int a;
	cin >> a;
	cout << funkcja(a);
	system("pause");
    return 0;
}


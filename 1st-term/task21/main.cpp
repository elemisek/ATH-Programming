// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

void zamien(int & a, int & b) {
	int pom;
	pom = a;
	a = b;
	b = pom;
}

int main()
{


	int a = 2;
		int b = 3;
		cout << a<<" "; cout << b;
		zamien(a, b);
		cout << "po zamianie";
		cout << a<<" " ; cout << b;
		system("pause");
    return 0;
}


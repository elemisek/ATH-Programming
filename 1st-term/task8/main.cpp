#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, suma=0;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		suma += i*i;
	}
	cout << suma;
    return 0;
}


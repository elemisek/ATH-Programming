#include "stdafx.h"
#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n < 2)
		return 1;
	return n*factorial(n - 1);
}
int main()
{
	int k;
	cin >> k;
	cout << factorial(k);
	system("pause");
    return 0;
}


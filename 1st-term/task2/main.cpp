#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, iloczyn = 1;
	cin >> n; //n > 2
	if (n%2)
	{
		n -= 1;
	}
	for (int i = 2; i <= n; i += 2)
	{
		iloczyn*=i;
	}
	cout << iloczyn;
    return 0;
}


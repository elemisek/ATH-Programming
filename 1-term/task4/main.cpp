#include "stdafx.h"
#include <iostream>
using namespace std;
void dzielnik(int n, int m)
{
		for (int i = n; i > 0; i--)
		{
			if (n%i == 0 && m%i == 0)
				cout << i;
		}
		cout << "nie istnieje";
}
int main()
{
	int n, m;
	cin >> n >> m;
dzielnik(n, m);
    return 0;
}


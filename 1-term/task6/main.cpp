#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n, fact=1;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		fact *= (i + 1);
	}
	cout << fact;
    return 0;
}

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n, t[1000];
	t[0] = 1;
	t[1] = 1;
	cin >> n;
	for (int i = 2 ; i < n; i++)
	{
		t[i] = t[i - 1] + t[i - 2];
	}
	cout << t[n-1];
    return 0;
}


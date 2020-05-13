#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n, m, iloczyn = 1;;
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		iloczyn *= i;
	}
    return 0;
}


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int M;
	bool x=0;
	cin >> M;
	for (int i = M; i > 1; i--)
	{
		for (int j = 0; j <= M; j++)
		{
			if ((i*j) == M)
			{
				for (int k = 1; k < i; k++)
				{
					if (i%k)
					{
						x = 1;
					}
				}
				if (x == 0)
				{
					cout << i << " ";
				}
				x = 0;
			}
		}
	}
	
	return 0;

}


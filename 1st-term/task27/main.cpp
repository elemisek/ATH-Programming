#include "stdafx.h"
#include <iostream>
using namespace std;

int funkcja()
{
	int tab[10][10];
	int tab1[11][11];
	int wynik[2][2];
	for (int k = 0, k < 11, k++)
	{
		tab1[k][0] = 0;
	}
	for (int k = 0, k < 11, k++)
	{
		tab1[k][11] = 0;
	}
	for (int k = 0, k < 11, k++)
	{
		tab10[0][k] = 0;
	}
	for (int k = 0, k < 11, k++)
	{
		tab1[11][k] = 0;
	}
	for (int i = 0, i < 10; i++)
	{
		for (int j = 0, j < 10, j++)
		{
			tab1[i + 1][j + 1] = tab[i][j];
		}

	}
	int max = -99999;
	for (int l=1, l < 11, l++)
	{
		for (int m = 1, m < 11, m++)
		{
			if (tab1[l][m] + tab1[l + 1][m] > max)
			{
				max = tab1[l][m] + tab1[l + 1][m] > max;
				wynik[0][0] = l;
				wynik[0][1] = m;
				wynik[1][0] = l + 1;
				wynik[1][1] = m;
			}
			if (tab1[l][m] + tab1[l - 1][m] > max)
			{
				max = tab1[l][m] + tab1[l - 1][m] > max;
				wynik[0][0] = l;
				wynik[0][1] = m;
				wynik[1][0] = l -1;
				wynik[1][1] = m;
			}
			if (tab1[l][m] + tab1[l][m + 1] > max)
			{
				max = tab1[l][m] + tab1[l][m + 1];
				wynik[0][0] = l;
				wynik[0][1] = m;
				wynik[1][0] = l;
				wynik[1][1] = m+1;
			}
			if (tab1[l][m] + tab1[l][m - 1] > max)
			{
				max = tab1[l][m] + tab1[l][m - 1];
			wynik[0][0] = l;
			wynik[0][1] = m;
			wynik[1][0] = l;
			wynik[1][1] = m-1;
			}
			if (tab1[l][m] + tab1[l + 1][m + 1] > max)
			{
				max = tab1[l][m] + tab1[l + 1][m + 1];
				wynik[0][0] = l;
				wynik[0][1] = m;
				wynik[1][0] = l + 1;
				wynik[1][1] = m + 1;
			}
			if (tab1[l][m] + tab1[l - 1][m - 1] > max)
			{
				max=tab1[l][m] + tab1[l - 1][m - 1];
				wynik[0][0] = l;
				wynik[0][1] = m;
				wynik[1][0] = l - 1;
				wynik[1][1] = m - 1;
			}
			if (tab1[l][m] + tab1[l + 1][m - 1] > max)
			{
				max=tab1[l][m] + tab1[l + 1][m - 1];
				wynik[0][0] = l;
				wynik[0][1] = m;
				wynik[1][0] = l + 1;
				wynik[1][1] = m-1;
			}
			if (tab1[l][m] + tab1[l - 1][m + 1] > max)
			{
				max=tab1[l][m] + tab1[l - 1][m + 1];
				wynik[0][0] = l;
				wynik[0][1] = m;
				wynik[1][0] = l - 1;
				wynik[1][1] = m + 1;
			}

			
		}
	}
	return wynik;
}
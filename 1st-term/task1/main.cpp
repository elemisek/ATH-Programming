#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double suma = 0; // zadanie 1
	for (double i = 0; i <= 10; i++)
	{
		suma += (i*i - sqrt(i*i*i - sin(i)*sin(i)));
	}

	double iloczyn=0; // zadanie 2
	for (double i = 1; i <= 10; i++)
	{
		iloczyn *= ((1/((2*i)*(2*i)))*exp(i*3.14));
	}

	double suma2 = 0, iloczyn2 = 1; //zadanie 3
	for (double i = 1; i <= 10; i++)
	{
		iloczyn2 = 1;
		for (double j = 1; j <= 5; j++)
		{
			iloczyn2 *= (1 / (i*i + 4 * i*j + j*j))*sqrt(i*j);
			
		}
		suma2 += iloczyn2;
	}
	
    return 0;
}


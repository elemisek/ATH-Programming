#include "stdafx.h"
#include "Tablica.h"
#include <iostream>
using namespace std;

Tablica::Tablica(int w)
{
	this->w = w;
	T = new int[w];
	for (int i = 0; i < w; i++)
	{
		cin >> T[i];
	}
}
Tablica::~Tablica()
	{
	if (T != nullptr)
		delete[] T;
	}

Tablica::Tablica(const Tablica & other)
{
	this->w = w;
	for (int i = 0; i < w; i++)
	{
		T[i] = other.T[i];
	}


}

Tablica & Tablica::operator=(const Tablica & other)
{
	Tablica::~Tablica();
	this->w = other.w;

	T = new int[w];
	for (int i = 0; i < w; i++)
	{
		T[i] = other.T[i];
	}
	return *this;
}

Tablica & Tablica::operator+(const Tablica & other)
{
	Tablica result(*this);
	for (int i = 0; i < w; i++)
	{
		result.T[i] += other.T[i];
	}
	return result;
}

Tablica & Tablica::operator++(int)
{
	for (int i = 0; i < w; i++)
	{
		T[i]++;
	}
	return *this;
}

int & Tablica::operator[](int i)
{
	return this->T[i];
}

Tablica::operator int()
{
	return this->T[0];
}

bool Tablica::operator==(const Tablica & other)
{
	for (int i = 0; i < w; i++)
	{
		if (T[i] != other.T[i])
			return false;

	}
	return true;
}



void Tablica::display() const
{
	for (int i = 0; i < w; i++)
	{
		cout << T[i] << " ";
	}
}



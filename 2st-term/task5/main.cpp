#include "stdafx.h"
#include <iostream>
using namespace std;

#pragma once
class TintArray
{
private:
	int *wskInt;
	int _size;

public:
	TintArray(int size, int value);
	~TintArray();
	TintArray(const TintArray &other);
	TintArray& operator=(const TintArray &other);
	TintArray operator+(const TintArray &other);
	TintArray& operator++();
	TintArray& operator*=(int);
	bool operator!=(const TintArray & other);
	int& operator[](int i);
	void print()const;

};

TintArray::TintArray(int size, int value)
{
	_size = size;
	wskInt = new int[size];
	for (int i = 0; i < size; i++)
	{
		wskInt[i] = value;
	}
}


TintArray::~TintArray()
{
	if (wskInt != nullptr)
	{
		delete[] wskInt;
		wskInt = nullptr;
	}
}

TintArray::TintArray(const TintArray & other)
{
	_size = other._size;
	wskInt = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		wskInt[i] = other.wskInt[i];
	}
}

TintArray& TintArray::operator=(const TintArray &other)
{
	delete[] wskInt;
	_size = other._size;
	wskInt = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		this->wskInt[i] = other.wskInt[i];
	}
	return *this;
}

TintArray  TintArray::operator+(const TintArray & other)
{
	TintArray result(this->_size + other._size, 0);
	for (int i = 0; i<this->_size; i++)
	{
		result.wskInt[i] = this->wskInt[i];
	}
	for (int i = this->_size,j=0; i<(other._size+ (this->_size)); i++,j++)
	{
		result.wskInt[i] = other.wskInt[j];
	}

	return result;
}

TintArray & TintArray::operator++()
{
	int * newArray = new int[_size + 1];

	for (int i=0; i < _size; i++)
	{
		newArray[i] = this->wskInt[i];
	}
	delete[] this->wskInt;
	this->wskInt = newArray;
	_size++;
	return *this;
}
TintArray & TintArray::operator*=(int m)
{
	TintArray oldValue(*this);
	int * newArray = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		newArray[i] = m*(this->wskInt[i]);
	}
	delete[] this->wskInt;
	this->wskInt = newArray;
	return oldValue;
}
bool TintArray::operator!=(const TintArray & other)
{
	if (this->_size != other._size) return false;

	for (int i = 0; i < _size; i++)
	{
		if (this->wskInt[i] != other.wskInt[i]) return true;
	}
	return false;
}

int & TintArray::operator[](int i)
{
	if ( i < _size)
	return wskInt[i];
	throw "Index out of bounds";
}

void TintArray::print()const
{
	for (int i = 0; i < _size; i++)
	{
		cout << wskInt[i] << " ";
	}
}


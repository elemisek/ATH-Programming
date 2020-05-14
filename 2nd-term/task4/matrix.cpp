#include "stdafx.h"
#include "Matrix.h"
#include <iostream>
using namespace std;



Matrix::Matrix(int w, int k)
{
	this->w = w;
	this->k = k;

	M = new double*[w];
	for (int i = 0; i < w; i++)
	{
		M[i ]= new double[k];
		for (int j = 0; j < k; j++)
		{
			M[i][j] = 0;
		}
	}
}

Matrix::Matrix(const Matrix & other)
{
	this->w = other.w;
	this->k = other.k;

	M = new double*[w];
	for (int i = 0; i < w; i++)
	{
		M[i] = new double[k];
		for (int j = 0; j < k; j++)
		{
			M[i][j] = other.M[i][j];
		}
	}
}

Matrix::~Matrix()
{
	if (M != nullptr)
	{
		for (int i = 0; i < w; i++)
		{
			delete M[i];
		}
		delete[] M;
		M = nullptr;
	}
}

void Matrix::setValue(int i, int j, double Value)
{
	if (i < w && j < k && i>=0 && k>=0)
		M[i][j] = Value;
	else throw "Index out of bounds";
}

void Matrix::Display() const
{
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
}

Matrix & Matrix::operator=(const Matrix & other)
{
	Matrix::~Matrix();
	this->w = other.w;
	this->k = other.k;

	M = new double*[w];
	for (int i = 0; i < w; i++)
	{
		M[i] = new double[k];
		for (int j = 0; j < k; j++)
		{
			M[i][j] = other.M[i][j];
		}
	}
	return *this;
}

Matrix  Matrix::operator+(const Matrix & other) const
{
	//if (this->w.other)
	Matrix result(*this);
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			result.M[i][j] += other.M[i][j];
		}
	}
	return result;

}

Matrix operator-(const Matrix & left, const Matrix & right)
{
	Matrix result(left);
	for (int i = 0; i < left.w; i++)
	{
		for (int j = 0; j < left.k; j++)
		{
			result.M[i][j] -= right.M[i][j];
		}
	}
	return result;
}

Matrix operator*(const Matrix & left, int n)
{
	Matrix result(left);
	for (int i = 0; i < left.w; i++)
	{
		for (int j = 0; j < left.k; j++)
		{
			result.M[i][j] *= n;
		}
	}
	return result;
}

Matrix operator*(int n, const Matrix & right)
{
	Matrix result(right);
	for (int i = 0; i < right.w; i++)
	{
		for (int j = 0; j < right.k; j++)
		{
			result.M[i][j] *= n;
		}
	}
	return result;
}

ostream &  operator << (ostream & out, const Matrix & other)
{
	for (int i = 0; i < other.w; i++)
	{
		for (int j = 0; j < other.k; j++)
		{
			out << other.M[i][j] << " ";
		}
		out << endl;
	}
	return out;
}
bool operator==(const Matrix & left, const Matrix & right)
{
	if (left.w != right.w || left.k != right.k)
		return false;

	for (int i = 0; i < right.w; i++)
	{
		for (int j = 0; j < right.k; j++)
		{
			if (left.M[i][j] != right.M[i][j])
			return false;
		}

	}
	return true;
}
bool operator!=(const Matrix & left, const Matrix & right)
{
	if (left.w != right.w || left.k != right.k)
		return true;

	for (int i = 0; i < right.w; i++)
	{
		for (int j = 0; j < right.k; j++)
		{
			if (left.M[i][j] != right.M[i][j])
				return true;
		}

	}
	return false;
}

double * Matrix::operator[](int i)  
{
	return M[i];
}

Matrix Matrix::operator()(string p)const
{
	if (p == "T")
	{
		Matrix result(this->k, this->w);
		for (int i = 0; i < w; i++)
		{
			for (int j = 0; j < k; j++)
			{
				result.M[j][i] = M[i][j];
			}
		}
		return result;
	}
	else if (p == "180")
	{
		Matrix result(this->k, this->w);
		for (int i = 0; i < w; i++)
		{
			for (int j = 0; j < k; j++)
			{
				result.M[i][j] = M[w-i][j];
			}
		}
		return result;
	}


	return Matrix();
}





#pragma once
#include <iostream>
using namespace std;


class Matrix
{
private:
	int w, k;
	double **M;
public:
	Matrix(int w = 3, int k = 3);
	Matrix(const Matrix & other);
	~Matrix();

	void setValue(int i, int j, double Value);
	void Display() const;

	Matrix & operator=(const Matrix & other);
	Matrix  operator+(const Matrix & other) const;
	friend Matrix operator-(const Matrix & left, const Matrix & right);
	friend Matrix operator*(const Matrix & left, int n);
	friend Matrix operator*(int n, const Matrix & right);
	friend ostream & operator << (ostream & out, const Matrix & other);
	friend bool operator== (const Matrix & left,const Matrix & right);
	friend bool operator!= (const Matrix & left, const Matrix & right);
	double * operator[](int i);
	Matrix operator()(string p) const;
	
};

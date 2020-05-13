#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
protected:
	double r;
public:
	Circle(double r);
	virtual double Perimeter() const;
	~Circle();
};


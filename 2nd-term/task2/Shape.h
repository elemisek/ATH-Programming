#pragma once
#include <string>
using namespace std;
class Shape
{
protected:
	string shapeType;

public:
	Shape(string shapeType);
	virtual double Perimeter() const;
	virtual double Area() const;
	virtual ~Shape();

	friend ostream & operator<<(ostream & out, const Shape & shape);
};


#include "stdafx.h"
#include "Shape.h"


Shape::Shape(string shapeType)
{
	this->shapeType = shapeType;
}

double Shape::Perimeter() const
{
	return 0.0;
}

double Shape::Area() const
{
	return 0.0;
}


Shape::~Shape()
{
}

ostream & operator<<(ostream & out, const Shape & shape)
{
	out << shape.shapeType
		<< endl
		<< "Obwod = " << shape.Perimeter()
		<< endl
		<< "Pole = " << shape.Area()
		<< endl;
	return out;

}

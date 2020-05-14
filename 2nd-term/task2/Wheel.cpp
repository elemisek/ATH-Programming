#include "stdafx.h"
#define _USE_MATH_DEFINES
#include "Wheel.h"
#include "Circle.h"
#include <math.h>

Wheel::Wheel(double r) :Circle(r)
{
	shapeType = "Wheel";
}

double Wheel::Area() const
{
	return  M_PI * r * r;
}


Wheel::~Wheel()
{
}

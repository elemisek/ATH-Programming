#include "stdafx.h"
#define _USE_MATH_DEFINES
#include "Circle.h"
#include <math.h>



Circle::Circle(double r):Shape("Circle"), r(r)
{
}

double Circle::Perimeter() const
{
		return 2 * M_PI * r;
}


Circle::~Circle()
{
}

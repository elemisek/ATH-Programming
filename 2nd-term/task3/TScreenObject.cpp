#include "stdafx.h"
#include "TScreenObject.h"


TScreenObject::TScreenObject(int x, int y)
{
	this->x = x;
	this->y = y;
}

TScreenObject::TScreenObject(const TScreenObject & other)
{
	this->x = other.x;
	this->y = other.y;
}

TScreenObject::~TScreenObject()
{

}

void TScreenObject::PrzesunOWektor(int deltaX, int deltaY)
{
	x += deltaX;
	y += deltaY;
}



TScreenWall::TScreenWall() : TScreenObject(1, 1)
{
	wysokosc = 1;
	dlugosc = 2;

}

TScreenWall::~TScreenWall()
{
}

inline void TScreenWall::Wyswietl() const
{
	cout << x << " " << y << " "
		<< wysokosc << " " << dlugosc << endl;
}


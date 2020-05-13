#pragma once
#include <iostream>

using namespace std;

class TScreenObject
{
public:
	TScreenObject(int x, int y);
	TScreenObject::TScreenObject(const TScreenObject & other);
	virtual ~TScreenObject();
	virtual void PrzesunOWektor(int deltaX, int deltaY);
	virtual void Wyswietl() const  = 0;

protected:
	int x, y;
};

class TScreenWall : public TScreenObject
{
public:
	TScreenWall();
	~TScreenWall();
	virtual void Wyswietl() const;
protected:

	int wysokosc, dlugosc;

};
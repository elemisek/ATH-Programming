#include <iostream>


class TMechObj 
{
protected:
	double x;
	double y;
	double fi;

public:
	TMechObj(double _x, double _y, double _fi) 
	{
		this->x = _x;
		this->y = _y;
		this->fi = _fi;
	}

	void PrzesunPodwojnie(double deltaX, double deltaY) 
	{
		this->x += (deltaX * 2);
		this->y += (deltaY * 2);
	}

	double operator[](int a) 
		{
		switch (a)
		{
		case 1:
			return this->x;
				break;
		case 2:
			return this->y;
				break;
		case 3:
			return this->fi;
				break;
		}
	}

	virtual void Zapisz() = 0;
};

class TBox : public TMechObj 
{
private:
	double Wysokosc;
	double Szerokosc;

public:
	TBox(double _x, double _y, double _fi, double _Wysokosc, double _Szerokosc) : TMechObj(_x, _y, _fi), Wysokosc(_Wysokosc), Szerokosc(_Szerokosc)
	{

	}

	void Zapisz() 
	{
		cout << this->x << " " << this->y << " " << this->fi << " " << this->Wysokosc << " " << this->Szerokosc;

		
		
	}

	double operator[](int a) 
	{	
		switch (a)
		{
		case 1:
			return this->x;
			break;
		case 2:
			return this->y;
			break;
		case 3:
			return this->fi;
			break;
		case 4:
			return this->Wysokosc;
			break;
		case 5:
			return this->Szerokosc;
			break;
		}
	}
};


int main() 
{

	TBox box(20, 3, 27, 12, 4);
	TMechObj * objectTMO = &box;
	objectTMO->Zapisz();
	return 0;
}
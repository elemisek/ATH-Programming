#include "Shape.h"
#include "Circle.h"
#include "Wheel.h"
#include <iostream>
using namespace std;

int main()
{
	Circle c1(10);
	Wheel w1(10);
	cout << c1;

	cout << w1;
	system("pause");
    return 0;
}


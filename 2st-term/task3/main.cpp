#include <iostream>
#include "TScreenObject.h"



using namespace std;

int main()
{
	TScreenObject* wSO;

	TScreenWall wall;
	

	wSO = &wall; //polimorfizm

	wSO->Wyswietl(); //dynamiczne wiazanie


	system("pause");
    return 0;
}


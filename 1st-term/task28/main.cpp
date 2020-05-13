

int NWD(int a, int b)
{
    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowuj¹ wynik NWD(a,b)
}

int NWD(int a, int b)
{
	if (a != b)
		return NWD(a>b ? a - b : a, b>a ? b - a : b);
	return a;
}


#include <iostream>
using namespace std;


float funkcja(int tab[], float n)
{float b=0;
	for(int i=0; i<n;i++)
	{
		b=b+tab[i];
	}
	b=b/n;
	return b;
}
int funkcja2(int tab[],int n)
{
	int b=0;
	for(int i=0; i<n;i++)
	{
		b=b+tab[i];
	}
	return b;
}
int funkcja3(int tab[],int n)
{
	int b=0;
	for(int i=0; i<n;i++)
	{
		tab[i]*=tab[i];
		b=b+tab[i];
		
	}
	
	return b;
}
int main(int argc, char** argv) {
	
	float n=5;
	int tab[] = {2,2,2,2,2};
	cout<<"srednia elementow tablicy"<<endl<<funkcja(tab,n);
	cout<<endl;
	cout<<"suma elementow tablicy"<<endl<<funkcja2(tab,n);
	cout<<endl;
	cout<<"suma kwadratow elementow tablicy"<<endl<<funkcja3(tab,n);
	
	
	
	return 0;
}

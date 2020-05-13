#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void funkcja1(int tab[],int n)
{
	for(int i=0;i<n;i++)
	{
		tab[i]=0;
		cout<<tab[i];
	}
	
}
void funkcja2(int tab[],int n)
{
	for(int i=0;i<=n;i++)
	{
		tab[i]=i;
		cout<<tab[i];
	}
}
void funkcja3(int tab[],int n)
{
	for(int i=0;i<n;i++)
	{
		tab[i]=i*2;
		cout<<tab[i];
	}
}
int main(int argc, char** argv) {
	int n;
	int tab[n];
	cout<<"Podaj wielkoœc tablicy"<<endl;
	cin>>n;
	cout<<"wypelenienie komorek zerami"<<endl;
	funkcja1(tab,n);
	cout<<endl;
	cout<<"wypelenienie komorek warosciami indeksu"<<endl;
	funkcja2(tab,n);
	cout<<endl;
	cout<<"podwojenie wartoœci komorek"<<endl;
	funkcja3(tab,n);
	
	return 0;
}

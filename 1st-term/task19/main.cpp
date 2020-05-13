#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
funkcja(int *a, int *b)
{
	return *a+*b;
}



int main(int argc, char** argv) {
	int a=5, b=10;
	int *wska;
	int *wskb;
	 wska=&a;
	 wskb=&b;
	cout<<funkcja(wska,wskb);
/*	cout<<"ile w tablicy"<<endl;
	cin>>c;
	int *tab;
	tab = new int [c];
	for(int i=0; i<c;i++)
{
	cout<<(uintptr_t)tab<<endl;
	tab++;
}
	
	delete [] tab;
	*/
	system("pause");
	return 0;
}

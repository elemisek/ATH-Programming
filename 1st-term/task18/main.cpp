#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void funkcja(int *a, int*b)
{ 
	if(*a>*b)
	{
		cout<<b;
		cout<<*b;
	}
	else {
	
	cout<<a;
	cout<<*a;
}
}
int main(int argc, char** argv) {
	
	int a=5, b=10;
	
int	*wska=&a;
int	*wskb=&b;
	funkcja(wska,wskb);
	
	
	return 0;
}

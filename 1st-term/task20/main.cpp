#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int n=5, a=0;
void funkcja(int *w, int a)
{
	 *w=a;
cout<<a;
}
int main(int argc, char** argv) {
	int a=5,n=6;
	int *w=&n; 
		
	funkcja(w,n);
	
	return 0;
}

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void funkcja(int tab1[],int tab2[], int tab3[],int n)
{int k=10;
	for(int i=0; i<n;i++)
	{
		tab3[i*2]=tab1[i];
		for(int b=0;b<n;b++)
		{
			tab3[b*2+1]=tab2[b];
		}	
	
	}	
	
}
int main(int argc, char** argv) {
	int tab1[]= {1,3,5,7,9};
	int tab2[]={2,4,6,8,10};
	int tab3[10];
	int n=5;
funkcja(tab1,tab2,tab3,n);

	for(int i=0;i<10;i++)
	{
	cout<<tab3[i];
}

	return 0;
}

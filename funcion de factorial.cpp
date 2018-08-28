#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int factorial(int n)
{
	int f=1;
	for(int i=1; i<=n; i++)
	{
		f = f*i;
	}
	
	return f;
}

	void des()
	{
		cout<<"muchas gracias    ........."<<endl<<endl;
	}

	
int main()
{
	int n,fac;
	cout<<"ingrese los numeros";
	cin>>n;
	
	fac=factorial(n);
	
	cout<<" la factorial"<<fac<<endl;
	
	des();
	getch();
	
}

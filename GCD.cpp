#include<iostream>
using namespace std;
int main()
{
	int n1,n2,gcd;
	cout<<"Enter first number: ";
	cin>>n1;
	cout<<"Enter second number: ";
	cin>>n2;
	if(n2>n1)
	{
		int temp=n2;
		n2=n1;
		n1=temp;
	}
	for(int i=1;i<=2;i++)
	{
		if(n2%i==0 && n1%i==0)
		{
			gcd=i;
		}
	}
	cout<<"The GCD of two numbers: "<<gcd;
	return 0;
}

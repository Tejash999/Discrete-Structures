#include<iostream>
using namespace std;

int factorial(int x)
{
	if (x==0)
	return 1;
	
	if (x==1)
	return 1;
	
	return x*factorial(x-1);
}

int main()
{
	int x;
	cout<<"Enter any integer:";
	cin>>x;
	cout<<"The factorial of "<<x<<" is "<<factorial(x);
	return 0;
}


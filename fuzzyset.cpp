#include<iostream>
using namespace std;
double max(double A, double B)
{
	if(A>B)
	return A;
	else
	return B;
}
double min(double A, double B)
{
	if(A<B)
	return A;
	else 
	return B;
}
double complement(double A)
{
	return 1-A;
}
int main()
{
	double A[7], B[7];
	int i;
	cout<<"Enter the members of set A: ";
	for(int i=0;i<7;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the members of set B: ";
	for(int i=0;i<7;i++)
	{
		cin>>B[i];
	}
	cout<<"Union of A and B: "<<endl;
	cout<<"A"<<"\t"<<"B"<<"max(A,B)"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<A[i]<<"\t"<<B[i]<<"\t"<<max(A[i],B[i])<<endl;
	}
	cout<<"Intersection of A and B: "<<endl;
	cout<<"A"<<"\t"<<"B"<<"min(A,B)"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<A[i]<<"\t"<<B[i]<<"\t"<<min(A[i],B[i])<<endl;
	}
	cout<<"Complement of set A: "<<endl;
	cout<<"A"<<"\t"<<"1-A"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<A[i]<<"\t"<<complement(A[i])<<endl; 
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a[2][2], b[2][2];
	cout<<"Enter the elements of matrix A:\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of matrix B:\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Meet opertation of matrix A and B: "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			int result=a[i][j]&&b[i][j];
			cout<<" "<<result<<"\t";
		}
			cout<<"\n";
		}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the number of elements in row: ";
	cin>>x;
	cout<<"Enter the number of elements in column: ";
	cin>>y;
	int a[x][y], b[x][y];
	cout<<"Enter the elements of matrix A:\n";
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of matrix B:\n";
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Joint opertation of matrix A and B: "<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<"|";
		for(int j=0;j<y;j++)
		{
			int result=a[x][y]||b[x][y];
			cout<<" ";
			cout<<result;
			cout<<" ";
		}
		cout<<"|\n"<<endl;
	}
	return 0;
}

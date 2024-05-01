#include<iostream>
using namespace std;
int main()
{
	int set1[35];
	int set2[46];
	int size1;
	int size2;
	cout<<"Enter the number of elements in set 1: ";
	cin>>size1;
	cout<<"Enter the number of elements in set 2: ";
	cin>>size2;
	cout<<"Enter the elements in set 1: ";
	for(int i=0;i<size1;i++)
	{
		cin>>set1[i];
	}
	cout<<"Enter the elements in set 2: ";
	for(int k=0;k<size2;k++)
	{
		cin>>set2[k];
	}
	int l;
	cout<<"The difference of two sets is { ";
	for(int i=0;i<size1;i++)
	{
		for(l=0;l<size2;l++)
		{
			if(set1[i]==set2[l])
			{
				break;
			}
		}
		if(l==size2)
		{
			cout<<set1[i]<<",";
		}
	}
		cout<<"}";
	return 0;
}

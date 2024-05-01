#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,j;
	cout<<"Enter the number of elements of the first set: ";
	cin>>n1;
	int set1[n1];
	cout<<"Enter the elements of the first set: ";
	for(i=0;i<n1;i++)
	{
		cin>>set1[i];
	}
	cout<<"Enter the number of elements of the second set: ";
	cin>>n2;
	int set2[n2];
	cout<<"Enter the elements of the second set: ";
	for(i=0;i<n2;i++)
	{
		cin>>set2[i];
	}
	cout<<"Intersection of two sets: ";
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(set1[i]==set2[j])
			{
				cout<<set1[i]<<" ";
			}
		}
		
	}
	return 0;
}

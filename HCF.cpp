#include<iostream>
using namespace std;
int hcf(int n)
{
	int h;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			h=i;
		}
	}
	return h;
}


int main()
{
	int n;
	cout<<"Enter any integer: ";
	cin>>n;
	cout<<"The HCF of "<<n<<" is "<<hcf(n)<<endl;
	return 0;
}

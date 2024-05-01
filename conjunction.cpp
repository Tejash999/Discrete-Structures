#include<iostream>
using namespace std;
int main()
{
	cout<<"A\t"<<"B\t"<<"A^B"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			int result=a&&b;
			cout<<a<<"\t"<<b<<"\t"<<result<<endl;
		}
	}
	return 0;
}

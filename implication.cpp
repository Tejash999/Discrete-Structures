#include<iostream>
using namespace std;
int main()
{
	cout<<"Implication - \n";
	cout<<"p\t"<<"q\t"<<"p->q"<<endl;
	for(int p=0;p<2;p++)
	{	
		for(int q=0;q<2;q++)
		{
			int result=0;

			if(p==1 & q==0)
				result=0;
			else
			 	result=1;
		
			cout<<p<<"\t"<<q<<"\t"<<result<<endl;
		}
	}
	return 0;
}

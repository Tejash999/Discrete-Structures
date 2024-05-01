#include<iostream>
using namespace std;
int main()
{
	cout<<"Contradiction - \n";
	cout<<"p\t"<<"q\t"<<"pvq\t"<<"!p\t"<<"!q\t"<<"((!p)^(!q))\t"<<"(pvq)^((!p)^(!q))"<<endl;
	for(int p=0;p<2;p++)
	{	
		for(int q=0;q<2;q++)
		{
			int disjunc=p||q; // pvq
			
			int negationOfp=!p;
			int negationOfq=!q;
			
			int conjuncOfRHS = negationOfp&&negationOfq; //((!p)^(!q))
			
			int result=conjuncOfRHS&&disjunc;
			cout<<p<<"\t"<<q<<"\t"<<disjunc<<"\t"<<!p<<"\t"<<!q<<"\t\t"<<conjuncOfRHS<<"\t\t"<<result<<endl;
		}
	}
	return 0;
}

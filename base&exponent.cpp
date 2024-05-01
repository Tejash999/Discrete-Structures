#include <iostream>
using namespace std;

float power(float a,int n)
{
	float result=1;
	int i=n;
    while (i != 0) 
	{
        result =result * a;
        --i;
   	}	
   	
    return result;	
}

int main() 
{
    int n;
    float a;
    cout<<"Enter any real number as base(a): ";
    cin>>a;
    cout<<"Enter any integer number as exponent(n): ";
	cin>>n;
	
	cout<<"(a^n) "<<a<<"^"<<n<<" = "<<power(a,n);
    return 0;
}

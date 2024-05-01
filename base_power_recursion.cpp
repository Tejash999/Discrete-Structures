#include<iostream>
using namespace std;
int power(int a,int n)
{
    if(n==0)
    {
        return 1;

    }
    else
    {
        return a*(power(a,n-1));
    }
}
int main()
{
    int number,p,m;
    cout<<"Enter the base number:"<<endl;
    cin>>number;
    cout<<"Enter the power number:"<<endl;
    cin>>p;
    cout<<"Enter the value of m:"<<endl;
    cin>>m;
    int result=power(number,p);
    result=result%m;
    cout<<"Result="<<result<<endl;
    return 0;

}

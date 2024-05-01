#include<iostream>
using namespace std;
int main( )
{
    int A[10],m;
    cout<<"How many elements do you want in set A:"<<endl;
    cin>>m;
    cout<<"Enter the"<<m<<"elements in set a:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
    }
    cout<<"Cartesian Product:"<<endl;
    cout<<"{";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"("<<A[i]<<","<<A[j]<<")"<<",";

        }
    }
    cout<<"}";
    cout<<endl;
    cout<<"The relation is:R={";
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            cout<<"("<<A[i]<<","<<A[j]<<")"<<",";

        }
    }
    cout<<"}";
    cout<<endl;
    //Testing properties
    //Reflexive or irreflexive.
    int c=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(A[i]==A[j])
           {
            c ++;
           }

        }
    }
    if (c==m*m)
    {
        cout<<"The  given relation R is reflexive:"<<endl;
    }
    else
     cout<<"The given relation is irreflexive"<<endl;
    return 0;
}

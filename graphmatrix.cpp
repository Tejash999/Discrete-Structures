#include<iostream>
using namespace std;
void readgraph(int adjmat[50][50],int n)
{
    char reply;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
            {
                adjmat[i][j]=0;
                continue;
            }
            cout<<"Vertices"<<i<<"and"<<j<<"are adjacent?(Y?N):";
            cin>>reply;
            if(reply=='y'|| reply=='Y')
                adjmat[i][j]=1;
            else
                adjmat[i][j]=0;
        }

    }
    cout<<"The matrix elements are"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cout<<adjmat[i][j]<<endl;

        }
    }
}


void undirgraph( )
{
    int adjmat[50][50];
    int n,deg;
    cout<<"Enter the number of vertices:"<<endl;
    cin>>n;
    readgraph(adjmat,n);
    cout<<endl<<"Vertex\tDegree";
    for(int i=1;i<=n;i++)
    {
        deg=0;
        for(int j=1;j<=n;j++)
        {
            if(adjmat[i][j]==1)
                deg ++;
        }
    cout<<endl<<i<<"\t"<<deg<<endl;

    }
}

int main( )
{
    undirgraph( );
    return 0;
}


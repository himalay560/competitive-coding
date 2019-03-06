#include<bits/stdc++.h>
using namespace std;
int a[20]; //array size to be declared based on the constraints
int x,z=0;
int check(int u,int v)
{
    for(int j=0;j<u;j++)
        if(a[j]==v)
            return 0;
    for(int j=0;j<u;j++)
        if(abs(a[j]-v)==abs(j-u))
            return 0;
    return 1;
}
int back(int n)
{
    int j;
    for(j=0;j<x;j++)
    {
        if(check(n,j))
        {
            a[n]=j;
            if(n==x-1)
            {
                z=1;
                return 1;
            }
            else
                back(n+1);
        }
        if(z==1)
            break;
        a[n]=-1;
    }
}
int main()
{
    int n;
    cin>>n;
    x=n;
    if(n==2 or n==3)
        cout<<"Not possible";
    else
    {
        for(int i=0;i<n;i++)
            a[i]=-1;
        back(0);
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n;k++)
            {
                if(a[i]==k)
                    cout<<"1"<<" ";
                else
                    cout<<"0"<<" ";
            }
            cout<<"\n";
        }
    }
}

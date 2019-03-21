#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,m,j,y;
    cin>>n>>k>>x;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i+1;
    x=x-1;
    j=x;
    m=n;
    while(m)
    {
        y=a[j]%k;
        while(y)
        {
            j=(j+1)%n;
            if(a[j]!=0)
            {
                a[j]=0;
                y--;
                m--;
            }
            if(m==1)
                break;
        }
        if(m==1)
            break;
        else
        {
            j=(j+1)%n;
            while(a[j]==0)
            {
                j=(j+1)%n;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            cout<<a[i];
            break;
        }
    }
}

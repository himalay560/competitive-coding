#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d,x,y=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            y++;
        d=0;
        if(a[i]==0)
        {
            x=i-1;
            while(x>=0 and a[x]==1)
            {
                d++;
                x--;
            }
            x=i+1;
            while(x<n and a[x]==1)
            {
                d++;
                x++;
            }
            if(d>c)
                c=d;
        }
    }
    //cout<<y<<" "<<c<<endl;
    if(y==n)
        cout<<y;
    else if(y==c)
        cout<<c;
    else
        cout<<c+1;
}

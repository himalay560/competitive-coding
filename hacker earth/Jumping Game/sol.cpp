#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b,x=0,y=0,c;
        cin>>n>>a>>b;
        while(n)
        {
            x=n/2;
            if(n%2==0)
            {
                if(b<x*a)
                {
                    y=y+b;
                    n=n/2;
                }
                else
                {
                    y=y+x*a;
                    n=n/2;
                }
            }
            else
            {
                y=y+a;
                n--;
            }
        }
        cout<<y<<endl;
    }
}

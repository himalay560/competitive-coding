#include<bits/stdc++.h>
using namespace std;
int find(long long int n)
{
    int c=0;
    long long int m=n;
    while(n>0)
    {
        n=n/2;
        c++;
    }
    if(m&(m-1))
        return c;
    else
        return c-1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c=0,d,i=0,f;
        cin>>a>>b;
        d=find(b);
        a=a-1;
        while(a>0)
        {
            if(i==0)
            {
                i++;
                f=0;
            }
            else
            {
                f=pow(2,i-1);
                if(b>f)
                    i++;
                if(b<=f)
                {
                    f=b;
                    break;
                }
            }
            a=a-f;
            c++;
        }
        if(a<=0)
            c=c;
        else if(a%b==0)
            c=c+a/b;
        else
            c=c+a/b+1;
        cout<<c<<"\n";
    }
}

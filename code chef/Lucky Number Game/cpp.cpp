#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b,i,d,e=0,f=0,g=0;
        cin>>n>>a>>b;
        long long int c[n];
        for(i=0;i<n;i++)
        {
            cin>>c[i];
        }
        d=a*b/gcd(a,b);
        for(i=0;i<n;i++)
        {
            if(c[i]%a==0)
                e++;
            if(c[i]%b==0)
                f++;
            if(c[i]%d==0)
                g++;
        }
        f=f-g;
        if(e>f)
            cout<<"BOB"<<endl;
        else
            cout<<"ALICE"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
long long int prime(long long int n)
{
    for(long long int i=3;i*i<=n+1;i=i+2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long int n,f,c,k=1;
        cin>>n;
        if(n%2==1)
        {
            cout<<"YES\n";
        }
        else
        {
            if(prime(n+1))
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
}

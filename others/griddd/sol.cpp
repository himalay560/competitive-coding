#include<bits/stdc++.h>
using namespace std;
long long int s=0;
int f(int n,int m)
{
    if(n==0 || m==0)
    {
        return s++;
    }
    f(n-1,m);
    f(n,m-1);
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        s=0;
        int n,m;
        cin>>n>>m;
        f(n,m);
        cout<<n+m<<" "<<s<<endl;
    }
}

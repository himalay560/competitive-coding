#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,k,a,b;
        cin>>r>>c>>k;
        if((r+k)>8)
            a=8-r;
        else
            a=k;
        if((r-k)<1)
            a=a+r;
        else
            a=a+k+1;
        if((c+k)>8)
            b=8-c;
        else
            b=k;
        if((c-k)<1)
            b=b+c;
        else
            b=b+k+1;
        cout<<b*a<<"\n";
    }
}

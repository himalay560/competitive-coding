#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t,k=1,n,i,c,d,x=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=0;
        c=5;
        while(1)
        {
            d=d+n/c;
            if(d/c==0)
                break;
            c=c*5;
        }
        cout<<d<<"\n";
    }
}


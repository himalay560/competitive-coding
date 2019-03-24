#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,k,l,r,x=0,y=0,h,s,j;
        cin>>n>>q;
        long long a[n];
        int e[n],o[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                x++;
            else
                y++;
            e[i]=x;
            o[i]=y;
        }
        while(q--)
        {
            cin>>k>>l>>r;
            h=r-l+1;
            if(k==0)
                if(l==1)
                    s=e[r-1];
                else
                    s=e[r-1]-e[l-2];
            else
                if(l==1)
                    s=o[r-1];
                else
                    s=o[r-1]-o[l-2];
            if(s==0 or h==s)
                cout<<s/h<<"\n";
            else
            {
                j=gcd(s,h);
                cout<<s/j<<" "<<h/j<<"\n";
            }
        }
    }
}

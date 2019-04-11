#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,c=0,i,j;
        cin>>n>>x;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=i;j<n;j++)
            {
                c=c+a[j];
                if(c>x)
                    break;
                if(c==x)
                    break;
            }
            if(c==x)
                break;
        }
        if(c==x)
            cout<<"YES"<<"\n";
        else
            cout<<"NO\n";
    }
}

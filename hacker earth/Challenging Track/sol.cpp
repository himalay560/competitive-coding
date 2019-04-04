#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,p,i,j;
        cin>>n>>p;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(int i=1;i<n;i++)
        {
            if(a[i]%2==0)
                a[i]=a[i]-i;
            else
                a[i]=a[i]-i+1;
        }
        for(int i=0;i<n;i++)
        {
            //cout<<a[i]<<" ";
            if(a[i]>0)
                p=p-a[i];
        }
        if(p>=0)
            cout<<"Yes "<<p<<"\n";
        else
            cout<<"No\n";
    }
}

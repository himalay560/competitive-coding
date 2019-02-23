#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,c=-1,e=-1;
        cin>>n;
        long int a[n],d[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>d[i];
        if(d[0]>(a[1]+a[n-1]))
            c=d[0];
        for(int i=1;i<n;i++)
        {
            e=a[i-1]+a[(i+1)%n];
            if(d[i]>e && d[i]>c)
                c=d[i];
        }
        cout<<c<<endl;
    }
}

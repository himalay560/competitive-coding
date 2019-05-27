#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    cin>>n;
    vector<long long int>a(n);
    vector<long long int>b(n);
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=0;j<n;j++)
        cin>>b[j];
    map<long long int,long long int>m;
    for(i=0;i<n;i++)
    {
        if(m.find(a[i])==m.end())
            m[a[i]]=b[i];
        else
           m[a[i]]=max(b[i],m[a[i]]);
        //cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
        cout<<m[a[i]]<<" ";
}

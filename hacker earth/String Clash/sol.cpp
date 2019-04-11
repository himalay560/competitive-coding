#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int n,m,c=0,d=0,j,e=0;
    n=s.length();
    m=t.length();
    int a[26]={0};
    for(int i=0;i<n;i++)
        a[int(s[i])-97]++;
    for(int j=0;j<m;j++)
        a[int(t[j])-97]++;
    for(int i=0;i<26;i++)
    {
        if(a[i]%2==0)
            c=c+a[i];
        else
        {
            d++;;
        }
    }
    int b[d];
    j=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]%2==1)
        {
            b[j]=a[i];
            j++;
        }
    }
    sort(b,b+d);
    if(d>1)
    {
        for(j=0;j<d-1;j++)
            e=e+(b[j]-1);
    }
    e=e+b[d-1];
    cout<<c+e;
}

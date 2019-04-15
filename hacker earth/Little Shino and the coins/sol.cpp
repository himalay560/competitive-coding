#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    long long int n,c=0,d,j,i,k;
    n=s.length();
    long int a[26]={0};
    for (i=0;i<n;i++)
    {
        d=0;
        for(j=i;j<n;j++)
        {
            k=int(s[j])-97;
            if(a[k]==0)
            {
                d++;
                a[k]++;
            }
            if(d==t)
            {
                c++;
            }
        }
        for(j=0;j<26;j++)
            a[j]=0;
    }
    cout<<c;
}

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
        long long int n,c=0,d,i,j;
        cin>>n;
        string s;
        cin>>s;
        int a[n];
        if(s[0]=='1')
            d=0;
        else
            d=-1;
        for(i=1;i<n;i++)
        {
            if(s[i]=='0' and d!=-1)
                c=c+d+1;
            if(s[i]=='1')
                d=i;
        }
        cout<<c<<"\n";
    }
}

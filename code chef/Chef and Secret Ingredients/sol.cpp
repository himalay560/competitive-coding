#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,m;
        cin>>n;
        m=n;
        long long int a[26]={0};
        while(n--)
        {
            int l;
            int b[26]={0};
            string s;
            cin>>s;
            l=s.length();
            for(int i=0;i<l;i++)
            {
                b[int(s[i])-97]++;
            }
            for(int i=0;i<26;i++)
            {
                if(b[i]>0)
                    a[i]++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]==m)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}

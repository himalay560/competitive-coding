#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n,f,fl;
        n=s.length();
        int a[n];
        cin>>f;
        for(int i=0;i<n;i++)
            a[i]=int(s[i])-48;
        while(1);
        {
            fl=0;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    fl=1;
                    for(int j=i;j<n-1;j++)
                        a[j]=a[j+1];
                    a[n-1]=f;
                    break;
                }
            }
            if(fl==0)
                break;
        }
        if(a[n-1]>f)
            a[n-1]=f;
        for(int i=0;i<n;i++)
            cout<<a[i];
        cout<<"\n";
    }
}

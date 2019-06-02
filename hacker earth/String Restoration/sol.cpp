#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,i,c=1,f=1;
        cin>>n;
        int a[n];
        char s[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        s[0]='a';
        if(a[0]>1)
        {
            cout<<"-1\n";
            continue;
        }
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                f=0;
                break;
            }
            if(a[i]==a[i-1])
                s[i]='a';
            else if(a[i]==a[i-1]+1 and a[i]<27)
            {
                c++;
                s[i]=char(96+c);
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            for(i=0;i<n;i++)
                cout<<s[i];
        }
        else
            cout<<"-1";
        cout<<"\n";
    }
}

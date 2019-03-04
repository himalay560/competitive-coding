#include<bits/stdc++.h>
using namespace std;
string s;
int print(int l,int n)
{
    if(l<n)
    {
        if((n-l)%2==0)
        {
            int m=l+(n-l)/2;
            cout<<s[m-1];
            print(l,m-1);
            print(m,n);
        }
        else
        {   int m=l+(n-l)/2;
            cout<<s[m];
            print(l,m);
            print(m+1,n);
        }
    }
    //return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin>>s;
        print(0,n);
        cout<<"\n";
    }
}

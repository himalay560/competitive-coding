#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,long int>m;
    int n,l,q;
    string s,u;
    cin>>n>>q;
    while(n--)
    {
        cin>>s;
        l=s.length();
        for(int i=0;i<=l;i++)
        {
            u=s.substr(0,i);
            m[u]++;
        }
    }
    while(q--)
    {
        cin>>s;
        cout<<m[s]<<"\n";
    }
}

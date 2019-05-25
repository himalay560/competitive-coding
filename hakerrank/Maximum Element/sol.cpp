#include<bits/stdc++.h>
using namespace std;
long int a[100005],b[100005];
int t=-1,u=-1;
int main()
{
    long long int n,s,l;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s==1)
        {
            cin>>l;
            a[++t]=l;
            if(t==0)
                b[++u]=l;
            else
            {
                if(b[u]<=l)
                    b[++u]=l;
            }
        }
        else if(s==2)
        {
            if(a[t]==b[u])
                u--;
            t--;
        }
        else
            cout<<b[u]<<"\n";
    }
}

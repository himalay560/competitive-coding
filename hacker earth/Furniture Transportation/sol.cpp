#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,m,j,c=0,k,x;
    cin>>n>>i>>m;
    long long int a[n];
    for(j=0;j<n;j++)
        cin>>a[j];
    for(j=0;j<=n-m;j++)
    {
        x=m;
        k=j;
        while(x)
        {
            if(a[k]<=i)
            {
                x--;
                k++;
            }
            else
                break;
        }
        if(x==0)
            c++;
    }
    cout<<c;
}

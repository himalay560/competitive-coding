#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    int a[m]={0};
    while(n--)
    {
        int k,l;
        cin>>k>>l;
        if(a[l-1]<k)
        {
            a[l-1]=k;
        }
    }
    for(int i=0;i<m;i++)
    {
        c=c+a[i];
    }
    cout<<c<<endl;
}

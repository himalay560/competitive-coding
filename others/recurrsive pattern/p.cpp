#include<bits/stdc++.h>
using namespace std;
int n,l=1;
int space(int k)
{
    if(k==0)
        return 1;
    else
    {
        cout<<"  ";
        space(k-1);
    }
}
int loop(int a)
{
    if(a==0)
        return 1;
    else
    {
        if(l/10==0)
            cout<<l<<" ";
        else
            cout<<l;
        l++;
        loop(a-1);
    }
}
int print(int m)
{
    if(m==0)
        return 1;
    else
    {
        int k;
        k=n-m;
        space(k);
        loop(m);
        cout<<"\n";
        print(m-1);
    }
}
int main()
{
    cin>>n;
    print(n);
}

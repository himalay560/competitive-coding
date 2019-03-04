#include<bits/stdc++.h>
using namespace std;
long long int c=0;
long long int a[31];
int sum(int s)
{
    if(s<0)
    {
        //c++;
        return 0;
    }
    if(s==0)
    {
        c++;
        return 0;
    }
    if(s==2)
    {
        c=c+2;
        return 0;
    }
    if(s==3)
    {
        c=c+4;
        return 0;
    }
    if(s==4)
    {
        c=c+7;
        return 0;
    }
    sum(s-1);
    sum(s-2);
    sum(s-3);
}
int main()
{
    int n;
    cin>>n;
    sum(n);
    cout<<c;
}

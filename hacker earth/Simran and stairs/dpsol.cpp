#include<bits/stdc++.h>
using namespace std;
long int c=0;
long int a[31];
int sum(int s)
{
    if(a[s]!=0)
    {
        c=c+a[s];
        return 0;
    }
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
    sum(s-1);
    sum(s-2);
    sum(s-3);
    a[s]=c;
}
int main()
{
    int n;
    cin>>n;
    sum(n);
    cout<<c;
}

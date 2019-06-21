#include<bits/stdc++.h>
using namespace std;
long int a[78498];
int prime(long int n)
{
    if(n<2)
        return 0;
    if(n==2 || n==3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(long int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
            return 0;
    }
    return 1;
}
long int search(long int k,long int l,long int h)
{
    if(l<h)
    {
        long int m=(l+h)/2;
        if(a[m]==k)
            return m;
        else if(a[m]>k)
            return search(k,l,m);
        else
            return search(k,m,h);
    }
    return 0;
}
int main()
{
    long int c=0;
    for(long int i=0;i<1000000;i++)
    {
        if(prime(i))
            a[c++]=i;
    }
    int t;
    cin>>t;
    while(t--)
    {
        long int n,p,x=0,y=0,t=0,f=0,h=0;
        cin>>n;
        p=search(n,0,78498);
        while(1)
        {
            if(h==p)
                break;
            else if(h>p)
            {
                if(f%4==1)
                    x=x-(h-p);
                else if(f%4==2)
                    y=y-(h-p);
                else if(f%4==3)
                    x=x+(h-p);
                else
                    y=y+(h-p);
                break;
            }
            if(f%4==0)
            {
                t++;
                h=h+t;
                x=x+t;
                f++;
            }
            else if(f%4==1)
            {
                y=y+t;
                h=h+t;
                f++;
            }
            else if(f%4==2)
            {
                t++;
                h=h+t;
                x=x-t;
                f++;
            }
            else
            {
                y=y-t;
                h=h+t;
                f++;
            }
        }
        cout<<x<<" "<<y<<"\n";
    }
}

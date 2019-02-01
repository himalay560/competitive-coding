#include<bits/stdc++.h>
using namespace std;
int a[10][10]={0};
int c=0;
int find(int k,int n,int i,int j)
{
    if(k==n)
        return 0;
    if(i-2>=0 && j-1>=0)
    {
        if(k==n-1 && a[i-2][j-1]==0)
        {
            c++;
            a[i-2][j-1]=1;
        }
        find(k+1,n,i-2,j-1);
    }
    if(i-2>=0 && j+1<10)
    {
        if(k==n-1 && a[i-2][j+1]==0)
        {
            c++;
            a[i-2][j+1]=1;
        }
        find(k+1,n,i-2,j+1);
    }
    if(i+2<10 && j-1>=0)
    {
        if(k==n-1 && a[i+2][j-1]==0)
        {
            c++;
            a[i+2][j-1]=1;
        }
        find(k+1,n,i+2,j-1);
    }
    if(i+2<10 && j+1<10)
    {
        if(k==n-1 && a[i+2][j+1]==0)
        {
            c++;
            a[i+2][j+1]=1;
        }
        find(k+1,n,i+2,j+1);
    }
    if(i-1>=0 && j-2>=0)
    {
        if(k==n-1 && a[i-1][j-2]==0)
        {
            c++;
            a[i-1][j-2]=1;
        }
        find(k+1,n,i-1,j-2);
    }
    if(i+1<10 && j-2>=0)
    {
        if(k==n-1 && a[i+1][j-2]==0)
        {
            c++;
            a[i+1][j-2]=1;
        }
        find(k+1,n,i+1,j-2);
    }
    if(i-1>=0 && j+2<10)
    {
        if(k==n-1 && a[i-1][j+2]==0)
        {
            c++;
            a[i-1][j+2]=1;
        }
        find(k+1,n,i-1,j+2);
    }
    if(i+1<10 && j+2<10)
    {
        if(k==n-1 && a[i+1][j+2]==0)
        {
            c++;
            a[i+1][j+2]=1;
        }
        find(k+1,n,i+1,j+2);
    }
}
int main()
{
    int n,m,k,d=0;
    cin>>n>>m>>k;
    find(0,k,n-1,m-1);
    cout<<c;
}

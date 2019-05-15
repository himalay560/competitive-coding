#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }

    int c[n][n];
    int x,y;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            c[i][j]=a[j][i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            x=c[i][j];
            y=c[i][n-j-1];
            c[i][j]=y;
            c[i][n-j-1]=x;
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(c[i][j]==1)
                b[i][j]=c[i][j];
    x=y=0;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--)
        {
            if(a[i][j]==1)
                b[x][y]=a[i][j];
            y++;
        }
        x++;
        y=0;
    }
    x=y=0;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--)
        {
            if(c[i][j]==1)
                b[x][y]=1;
            y++;
        }
        x++;
        y=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<b[i][j]<<" ";
        cout<<"\n";
    }
}

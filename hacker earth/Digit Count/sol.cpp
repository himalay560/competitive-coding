#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    long int n,l,r,i,c,d,m;
    cin>>n;
    m=s.length();
    long int a[m][10]={0};
    a[0][int(s[0])-48]++;
    for(i=1;i<m;i++)
    {
        for(int j=0;j<10;j++)
            a[i][j]=a[i-1][j];
        a[i][int(s[i])-48]++;
    }
    while(n--)
    {
        cin>>l>>r;
        l--;
        if(l==0)
        {
            c=a[r-1][0];
            d=0;
            for(int j=1;j<10;j++)
            {
                if(c<=a[r-1][j])
                {
                    c=a[r-1][j];
                    d=j;
                }
            }
        }
        else
        {
            c=a[r-1][0]-a[l-1][0];
            d=0;
            for(int j=1;j<10;j++)
            {
                if(c<=(a[r-1][j]-a[l-1][j]))
                {
                    c=a[r-1][j]-a[l-1][j];
                    d=j;
                }
            }
        }
        cout<<d<<" "<<c<<"\n";
    }
}

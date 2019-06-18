#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long int n,c=0,i,m=0,j,k;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]=='x')
            c++;
        else
            c=0;
        if(c>=m)
        {
            if(abs(n/2-i)<abs(n/2-j) and c==m)
                j=i;
            else if(c>m)
                j=i;
            m=c;
        }
    }
    k=j;
    c=0;
    for(i=j+1;i<n;i++)
    {
        if(s[i]=='x')
        {
            c=c+(i-j-1);
            j++;
        }
    }
    k=k-m+1;
    for(i=k-1;i>=0;i--)
    {
        if(s[i]=='x')
        {
            c=c+(k-i-1);
            k--;
        }
    }
    cout<<c;
}

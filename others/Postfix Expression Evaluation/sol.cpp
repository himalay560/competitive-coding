#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int n,i,d,b;
    n=s.length();
    long long int a[n];
    long long int top=-1;
    for(i=0;i<n;i++)
    {
        if(int(s[i])>=65 && int(s[i])<=90)
        {
            long long int x;
            cin>>x;
            top++;
            a[top]=x;
        }
        else if(s[i]=='+')
        {
            b=a[top];
            top--;
            d=a[top];
            a[top]=b+d;
        }
        else if(s[i]=='-')
        {
            b=a[top];
            top--;
            d=a[top];
            a[top]=d-b;
        }
        else if(s[i]=='/')
        {
            b=a[top];
            top--;
            d=a[top];
            a[top]=d/b;
        }
        else if(s[i]=='*')
        {
            b=a[top];
            top--;
            d=a[top];
            a[top]=d*b;
        }
    }
    cout<<a[top];
}

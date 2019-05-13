#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int n,i;
    n=s.length();
    char a[n];
    int top=-1;
    for(i=0;i<n;i++)
    {
        if(s[i]!='+' && s[i]!='*' && s[i]!='-' && s[i]!='/' && s[i]!='(' && s[i]!=')')
            cout<<s[i];
        else
        {
            if(s[i]=='(')
            {
                top++;
                a[top]=s[i];
            }
            else if(s[i]==')')
            {
                while(a[top]!='(')
                {
                    cout<<a[top];
                    top--;
                }
                top--;
            }
            else if(s[i]=='+' || s[i]=='-')
            {
                while((a[top]=='+' || a[top]=='*' || a[top]=='-' || a[top]=='/') && top!=-1)
                {
                    cout<<a[top];
                    top--;
                }
                top++;
                a[top]=s[i];
                //cout<<a[top]<<endl;
            }
            else
            {
                while((a[top]=='*' ||  a[top]=='/') && top!=-1)
                {
                    cout<<a[top];
                    top--;
                }
                top++;
                a[top]=s[i];
            }
        }
    }
    while(top!=-1)
    {
        cout<<a[top];
        top--;
    }
}

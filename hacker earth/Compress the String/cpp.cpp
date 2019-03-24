#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,c,i,d=0;
        string s;
        cin>>n;
        cin>>s;
        n=s.length();
        cout<<char(int(s[0])-32);
        c=0;
        for(i=1;i<n;i++)
        {
            if((s[i]==s[i-1]) && (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
            {
                if(i==1)
                    cout<<s[i];
                c=0;
            }
            else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                if(c!=0)
                    cout<<c;
                c=0;
                d=0;
                cout<<s[i];
            }
            else
            {
                c++;
                d=1;
            }
        }
        if(d!=0)
        {
            cout<<c;
        }
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int f,g,c,d,n=s.length();
        c=int(s[0])-int('a');
        if(c>=0 and c<14)
            cout<<c<<" ";
        else
            cout<<c-26<<" ";
        for(int i=1;i<n;i++)
        {
            c=int(s[i])-int(s[i-1]);
            if(c>=0 and c<14)
                cout<<c<<" ";
            else if(c==-13)
                cout<<"13 ";
            else if(c<0 and c>-13)
                cout<<c<<" ";
            else if(c>0)
                cout<<c-26<<" ";
            else
                cout<<c+26<<" ";
        }
        cout<<"\n";
    }
}

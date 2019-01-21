#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0,i,d;
    cin>>n;
    string s,t;
    cin>>s;
    cin>>t;
    for(i=0;i<n;i++)
    {
        if(int(s[i])<=int(t[i]))
        {
            d=(int(t[i])-int(s[i]));
            c=c+(d/13)+(d%13);
        }
        else
        {
            d=(int(s[i])+13)-91+1;
            if((d+64)>int(t[i]))
            {
                d=26-int(s[i])+int(t[i]);
                c=c+d;
            }
            else
            {
                d=abs(65+d-1-int(t[i]));
                c=c+1+(d%13);
            }
        }
        //cout<<d<<" ";
    }
    //cout<<c<<" ";
    cout<<c;
}

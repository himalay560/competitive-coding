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
       long long int n,c=0,j;
       n=s.length();
       for(j=0;j<n;j++)
       {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'|| s[j]=='I' || s[j]=='O' || s[j]=='U')
                c=c+(n-j)*(j+1);  //a character at position i will occur in (n-i)*(i+1) number of sub strings where i starts from 0
       }
       cout<<c<<endl;
    }
}

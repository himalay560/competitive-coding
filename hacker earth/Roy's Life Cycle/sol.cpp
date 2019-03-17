#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int f,c,e=0,m=0,n=0,j,l;
    cin>>f;
    char **s;
    s=(char**)malloc(sizeof(char**)*f);
    for(int i=0;i<f;i++)
    {
        s[i]=(char*)malloc(1440);
        cin>>s[i];
    }
    for(int i=0;i<f;i++)
    {
        //cout<<s[i]<<endl;
        c=0;
        for(j=0;j<1440;j++)
        {
            //cout<<s[i][j];
            if(s[i][j]=='C')
            {
                e++;
                c++;
                if(c>m)
                    m=c;
                if(e>n)
                    n=e;
            }
            else
            {
                c=0;
                e=0;
            }
        }
    }
    cout<<m<<" "<<n;
}

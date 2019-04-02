#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,d=0,b=0;
        char a[4][4];
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                cin>>a[i][j];
                //cout<<a[i][j]<<" ";
                if(a[i][j]=='x')
                    d++;
                if(a[i][j]=='o')
                    b++;
            }
            //cout<<endl;
        }
        //cout<<endl;
        //cout<<d<<" "<<b<<"\n";
        if(d==b)
        {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<2;j++)
            {
                if((a[i][j]=='x' and a[i][j+1]=='x' and a[i][j+2]=='.')||(a[i][j]=='x' and a[i][j+1]=='.' and a[i][j+2]=='x')||(a[i][j]=='.' and a[i][j+1]=='x' and a[i][j+2]=='x'))
                {
                    //cout<<"1\n";
                    c=1;
                    break;
                }
            }
            if(c==1)
                break;
        }
        if(c!=1)
        {
            for(int j=0;j<4;j++)
            {
                for(int i=0;i<2;i++)
                {
                    if((a[i][j]=='x' and a[i+1][j]=='x' and a[i+2][j]=='.')||(a[i][j]=='x' and a[i+1][j]=='.' and a[i+2][j]=='x')||(a[i][j]=='.' and a[i+1][j]=='x' and a[i+2][j]=='x'))
                    {
                        //cout<<"2\n";
                        c=1;
                        break;
                    }
                }
                if(c==1)
                    break;
            }
        }
        if(c!=1)
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    if((a[i][j]=='x' and a[i+1][j+1]=='x' and a[i+2][j+2]=='.')||(a[i][j]=='x' and a[i+1][j+1]=='.' and a[i+2][j+2]=='x')||(a[i][j]=='.' and a[i+1][j+1]=='x' and a[i+2][j+2]=='x'))
                    {
                        //cout<<"3\n";
                        c=1;
                        break;
                    }
                }
                if(c==1)
                    break;
            }
        }
        if(c!=1)
        {
            for(int i=0;i<2;i++)
            {
                for(int j=3;j>1;j--)
                {
                    if((a[i][j]=='x' and a[i+1][j-1]=='x' and a[i+2][j-2]=='.')||(a[i][j]=='x' and a[i+1][j-1]=='.' and a[i+2][j-2]=='x')||(a[i][j]=='.' and a[i+1][j-1]=='x' and a[i+2][j-2]=='x'))
                    {
                        //cout<<"4\n";
                        c=1;
                        break;
                    }
                }
                if(c==1)
                    break;
            }
        }
        }
        else
        {
            for(int i=0;i<4;i++)
        {
            for(int j=0;j<2;j++)
            {
                if((a[i][j]=='o' and a[i][j+1]=='o' and a[i][j+2]=='.')||(a[i][j]=='o' and a[i][j+1]=='.' and a[i][j+2]=='o')||(a[i][j]=='.' and a[i][j+1]=='o' and a[i][j+2]=='o'))
                {
                    //cout<<"1\n";
                    c=1;
                    break;
                }
            }
            if(c==1)
                break;
        }
        if(c!=1)
        {
            for(int j=0;j<4;j++)
            {
                for(int i=0;i<2;i++)
                {
                    if((a[i][j]=='o' and a[i+1][j]=='o' and a[i+2][j]=='.')||(a[i][j]=='o' and a[i+1][j]=='.' and a[i+2][j]=='o')||(a[i][j]=='.' and a[i+1][j]=='o' and a[i+2][j]=='o'))
                    {
                        //cout<<"2\n";
                        c=1;
                        break;
                    }
                }
                if(c==1)
                    break;
            }
        }
        if(c!=1)
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    if((a[i][j]=='o' and a[i+1][j+1]=='o' and a[i+2][j+2]=='.')||(a[i][j]=='o' and a[i+1][j+1]=='.' and a[i+2][j+2]=='o')||(a[i][j]=='.' and a[i+1][j+1]=='o' and a[i+2][j+2]=='o'))
                    {
                        //cout<<"3\n";
                        c=1;
                        break;
                    }
                }
                if(c==1)
                    break;
            }
        }
        if(c!=1)
        {
            for(int i=0;i<2;i++)
            {
                for(int j=3;j>1;j--)
                {
                    if((a[i][j]=='o' and a[i+1][j-1]=='o' and a[i+2][j-2]=='.')||(a[i][j]=='o' and a[i+1][j-1]=='.' and a[i+2][j-2]=='o')||(a[i][j]=='.' and a[i+1][j-1]=='o' and a[i+2][j-2]=='o'))
                    {
                        //cout<<"4\n";
                        c=1;
                        break;
                    }
                }
                if(c==1)
                    break;
            }
        }
        }
        if(c==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

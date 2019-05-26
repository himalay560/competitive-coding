#include <bits/stdc++.h>

using namespace std;
char a[100];
// Complete the superReducedString function below.
string superReducedString(string s) {
    int t=-1,n;
    n=s.length();
    for(int i=0;i<n;i++)
    {
        if(t==-1)
        {
            a[++t]=s[i];
            continue;
        }
        if(a[t]==s[i])
            t--;
        else
            a[++t]=s[i];
    }
    if(t==-1)
    {
        string u="Empty String";
        return u;
    }
    else
    {
        char *b;
        b=(char *)malloc(sizeof(char)*(t+1));
        for(int i=0;i<=t;i++)
            b[i]=a[i];
        return b;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


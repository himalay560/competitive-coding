#include <bits/stdc++.h>

using namespace std;
char a[1000];
// Complete the isBalanced function below.
string isBalanced(string s) {
    int t=-1,n;
    string u="YES";
    string v="NO";
    n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            a[++t]=s[i];
        else if(t<0)
            return v;
        else if(s[i]==')')
        {
            if(a[t]=='(')
                t--;
            else
                return v;
        }
        else if(s[i]==']')
        {
            if(a[t]=='[')
                t--;
            else
                return v;
        }
        else
        {
            if(a[t]=='{')
                t--;
            else
                return v;
        }
    }
    if(t==-1)
        return u;
    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


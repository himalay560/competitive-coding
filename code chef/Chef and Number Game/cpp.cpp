#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,c=0,d,i;
	    cin>>n;
	    d=n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]<0)
	            c++;
	    }
	    if(c!=0)
	        cout<<max(d-c,c)<<" "<<min(d-c,c)<<endl;
	   else
	        cout<<d<<" "<<d<<endl;
	}
	return 0;
}


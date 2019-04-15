#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,c=0,d=-1;
	    string s;
	    char a;
	    cin>>n;
	    cin>>s>>a;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]==a)
	        {
	            c=c+(n-i)*(i+1)-(d+1)*(n-i);
	            d=i;
	        }
	    }
	   cout<<c<<"\n";
	}
	return 0;
}


#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,a,b,k,c,d,e,f;
	    cin>>n>>a>>b>>k;
	    c=(a*b)/gcd(a,b);
	    f=n/c;
	    e=(n/a)-f;
	    d=(n/b)-f;
	    if((d+e)>=k)
	        cout<<"Win"<<endl;
	    else
	        cout<<"Lose"<<endl;
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int prime(long long int n)
{
	if(n==2)
		return 1;
	if(n%2==0 || n<2)
		return 0;
	for(long long int i=3;i*i<=n;i=i+2)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		for(long long int i=n;i<=m;i++)
		{
			if(prime(i))
				cout<<i<<endl;
		}
		cout<<" "<<endl;
	}
	return 0;
}

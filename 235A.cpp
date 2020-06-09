#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	if(n<3)
	cout<<n;
	else
	{
		if(n&1)
		cout<<n*(n-1)*(n-2);
		else
		{
			if(n%3==0)
			cout<<(n-3)*(n-1)*(n-2);
			else
			cout<<(n-3)*(n-1)*(n);
		}
	}
}

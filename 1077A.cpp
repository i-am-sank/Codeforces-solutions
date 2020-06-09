#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,k;
		cin>>a>>b>>k;
		ll ans=0;
		if(k&1)
		{
			ans=(k+1)/2*a-(k-1)/2*b;
		}
		else
		{
			ans=k/2*(a-b);
		}
		cout<<ans<<endl;
	}
}

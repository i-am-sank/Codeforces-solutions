#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool islucky(ll n)
{
	int c4=0,c7=0;
	while(n>0)
	{
		if(n%10==4)
		c4++;
		else if(n%10==7)
		c7++;
		else
		return false;
		
		n/=10;
	}
	if(c4==c7)
	return true;
return false;	
}
int main()
{
	ll n;
	cin>>n;
	ll l=n,r=1e18,ans=0;
	while(l<=r)
	{
		ll mid=l+r;
		mid>>=1;
		if(islucky(mid))
		r=mid-1,ans=mid;
		else
		l=mid+1;
	}
	cout<<ans;
}


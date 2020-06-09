#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(ll v,ll n,ll k)
{
	ll sum=v;
	while(v>0)
	{
		v/=k;
		sum+=v;
	}
	if(sum>=n)
	return true;
	
 return false;	
}
int main()
{
	ll n,ans=0;
	int k;
	cin>>n>>k;
	ll l=1,r=n,mid;
	while(l<=r)
	{
		mid=l+r;
		mid>>=1;
		if(check(mid,n,k))
		r=mid-1,ans=mid;
		else
		l=mid+1;
	}
	cout<<ans;

}

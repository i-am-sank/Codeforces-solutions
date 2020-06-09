#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll power(ll a, ll b)
{
    ll m=1e9+7,ans;
	if(b==0)
	return 1;
	ll pow=(power(a,b/2))%m;
	if(b&1)
	{ 
	   ans=((pow%m)*(pow%m)*(a%m))%m;
		return ans;
	}
	else
	{
		ans= ((pow%m)*(pow%m))%m;
		return ans;
	}
}
int main()
{
int i;
ll a[100001],ans,sum,x,n;
cin>>n>>x;
//for(i=0;i<n;i++)
//cin>>a[i];
cout<<power(n,x);
}

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll power(ll a,ll b,ll m)
{
	a%=m;
	ll res=1;
	while(b>0){
		
		if(b&1)
		res=res*a%m;
		
		a=a*a%m;
		b>>=1;
	}
	return res;
}
int main(){
	int n,m;
	cin>>n>>m;
	ll k=1e9+7;
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans%k+power(n-i,m,k);
	}
	cout<<ans;
}

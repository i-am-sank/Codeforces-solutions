#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll ceil(ll a,ll b)
{
	return a%b==0?a/b:a/b+1;
}
int main(){
	int t;
	ll n,g,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>g>>b;
		if(g>=ceil(n,2))
		cout<<n;
		else
		{
			ll te=ceil(n,2)/g;
			ll ans= te*g+(te-1)*b+ceil(n,2)%g;
			if(ceil(n,2)%g!=0)
			{
				ans+=b;
			}
			cout<<ans;
		}
		cout<<endl;
	}
}

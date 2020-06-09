#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		ll ans=0;
		if(a==b)
		{
			ans=0;
		}
		else if(a<b)
		{
			if(a&1&&b&1||!(a&1)&&!(b&1))
			ans=2;
			else
			ans=1;
		}
		else
		{
		if(a&1&&b&1||!(a&1)&&!(b&1))
			ans=1;
			else
			ans=2;	
		}
		cout<<ans<<endl;
	}
}

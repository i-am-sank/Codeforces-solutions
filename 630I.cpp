#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll power(ll a,ll b)
{
	ll res=1;
	while(b>0){
		if(b&1)
		res=res*a;
		
		a*=a;
		b>>=1;
	}
	return res;
}
int main(){
	ll n;
	cin>>n;
	
	ll ans=6*power(4,n-2)+9*(n-3)*power(4,n-3);
	cout<<ans;
}

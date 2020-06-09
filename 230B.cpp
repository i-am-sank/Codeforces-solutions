#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
bool isprime(ll n)
{
	if(n==1)
	return false;
	
	for(int i=2;i*i<=n;i++)
	if(n%i==0)
	return false;
	
	return true;
}
/*ll sqrt(ll x){
	ll l=1,r=x,mid,ans;
	while(l<=r)
	{
	    mid=(l+r)/2;
	    
	    if(mid*mid==x)
	    return mid;
	    
	    if(mid*mid<x)
	    l=mid+1,ans=mid;
	    else if(mid*mid>x)
	    r=mid-1;
}
  return ans;
}*/
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		
		ll c=pow(x,0.5);

		if(c*c%x==0&&isprime(c))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}

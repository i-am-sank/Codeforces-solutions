#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;

bool check(ll n,ll a[],ll x)
{
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		ll temp = x-a[i];
		if(temp<0)
		return false;
		
		sum+=temp;
	}
	if(sum>=x)
	return true;
	
	return false;
}
int main(){
    fastio;
    ll n;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
   ll l=1,r=10e10,mid,ans;
   while(l<=r)
   {
   	 mid=l+r;
   	 mid>>=1;
   	 if(check(n,a,mid))
   	 {
   	 	ans=mid;
   	 	r=mid-1;
   	 }
   	 else
   	 l=mid+1;
   }
   cout<<ans;
    return 0;
}

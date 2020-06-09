#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define vpii vector<pair<int,int> >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;

bool check(ll n,ll a[],ll x)
{
	if(a[(x%n)]-x<=0)
	return true;
	
return false;	
}
int main(){
    fastio;
    
    ll n,x=-1;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++)
    cin>>a[i],x=max(x,a[i]);
    
    ll l=0,r=x,ans=0;
    while(l<=r)
    {
    	ll mid=(l+r)>>1;
    	if(check(n,a,mid))
    	{
    		ans=mid%n;
    		r=mid-1;
    		cout<<mid<<endl;
    	}
    	else
    	l=mid+1;
    }
    cout<<ans+1;
    return 0;
}

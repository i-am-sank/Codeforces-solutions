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


int main(){
    fastio;
    
    ll t,n,k;
    cin>>t;
    while(t--)
    {
    	cin>>n>>k;
    	ll i=0;
    	for( i=1;i<=n;i++)
    	{
    		ll tem=i*(i+1)/2;
    		if(tem>=k)
    		{
    			break;
    		}
    	}
    	ll x,y;
    	x=n-i;
    	y=n-k+i*(i-1)/2+1;
    	string s="";
    	for(ll j=1;j<=n;j++)
    	{
    		if(j==x||j==y)
    		s+='b';
    		else
    		s+='a';
    	}
    	cout<<s<<endl;
    }
    return 0;
}

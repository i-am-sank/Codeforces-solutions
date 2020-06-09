#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define vpii vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;


int main(){
    fastio;
    
    ll n,k,t;
    cin>>t;
    while(t--)
    {
    	cin>>n>>k;
    	string s;
    	cin>>s;
    	int ans=0;
    	unordered_map<char,int> mp;
    	for(int j=0;j<(k+1)/2;j++)
    	{
    		int m=0;
    		for(int i=j;i<n;i+=k)
    		{
    			mp[s[i]]++;
    			m=max(m,mp[s[i]]);
    		}
    		if((2*j)!=k-1)
    		for(int i=k-j-1;i<n;i+=k)
    		{
    			mp[s[i]]++;
    			m=max(m,mp[s[i]]);
    		}
    		
    		if((2*j)!=k-1)
    		ans=ans+2*(n/k)-m;
    		else
    		ans=ans+n/k-m;
    		mp.clear();
    	}
    	cout<<ans<<endl;
    }
    return 0;
}

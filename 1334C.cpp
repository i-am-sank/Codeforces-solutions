#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define pii pair<int,int> 
#define pll pair<ll,ll>
#define vpii vector<pii >
#define vpll vector<pll >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 

using namespace std;



int main(){
    fastio;
    ll t,n;
    cin>>t;
    while(t--){
    	cin>>n;
    	ll a[n+1],b[n+1];
    	for(ll i=0;i<n;i++) cin>>a[i]>>b[i];
    	b[n]=b[0],a[n]=a[0];
    	ll sum=0;
    	set<pll> s;
    	for(ll i=1;i<=n;i++)
    	{
    		if(a[i]>b[i-1])
    		{
    		   sum+=(a[i]-b[i-1]);
    		    pll x;
    		    x=mp(a[i],(a[i]-b[i-1]));
    		    s.insert(x);
    	    }
    }
    set<pll>::iterator it;
    for(ll i=1;i<=n;i++)
    {
    	pll x=mp(a[i],(ll)0);
    	it=s.lower_bound(x);
    	pll y;
    	y=*it;
    	if(x.ff==y.ff&&(a[i]-b[i-1])==y.ss){
    		a[i]+=(sum-y.ss);
    		if(!s.empty())
    		s.erase(y);
    	}
    	else if(x.ff==y.ff&&(a[i]-b[i-1])!=y.ss&&(a[i]-b[i-1])>0){
    		while(y.ss!=(a[i]-b[i-1])){
    			it++;
    			y=*it;
    		//	cout<<"fdd";
    		}
    		a[i]+=(sum-y.ss);
    		if(!s.empty())
    		s.erase(y);
    	}
    	else
    	{
    		a[i]+=sum;
    	}
    }
    ll m=a[1];
    for(ll i=1;i<=n;i++)
    {
    	m=min(a[i],m);
    }
    s.clear();
    cout<<m<<"\n";
    }
    return 0;
}

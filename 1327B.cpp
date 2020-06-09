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
    
    ll t,n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	ll x,y;
    	vi a[n];
    	vi g;
    	for(int i=0;i<n;i++)
    	{
    		cin>>x;
    		for(int j=0;j<x;j++)
    		cin>>y,a[i].pb(y);
    	}
    	set<int> s;
    	for(int i=0;i<n;i++)
    	{
    		if(!s.count(a[i][0]))
    		s.insert(a[i][0]);
    		else
    		g.pb(i);
    	}
    	bool p=true;
    	for(int i=0;i<g.size();i++)
    	{
    		for(int j=1;j<=n;j++)
    		if(!s.count(j))
    		{
    			for(int k : a[g[i]])
    			if(k==j)
    			break;
    			
    			cout<<"IMPROVE\n";
    			cout<<g[i]+1<<" "<<j<<endl;
    			p=false;
    			break;
    		}
    		if(!p)
    		break;
    	}
    	if(p)
    	cout<<"OPTIMAL\n";
    }
    return 0;
}

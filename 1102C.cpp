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
    
    ll n,x,y,t;
    priority_queue<ll ,vll ,greater<ll> > pq; 
    cin>>n>>x>>y;
    for(int i=0;i<n;++i)
    cin>>t,pq.push(t);
    ll ans=0;
    if(x>y)
    {
    	ans=n;
    }
    else
    {
    	int cnt=0;
    	t=pq.top();
    	while(t<=x)
    	{
    		cnt++;
    		pq.pop();
    		if(pq.empty())
    		break;
    		t=pq.top();
    	}
    	ans=(cnt+1)/2;
    }
    cout<<ans;
    return 0;
}

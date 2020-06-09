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
    ll n,m;
    cin>>n>>m;
    int ans[n+2]={};
    set<ll> alive;
     set<ll>::iterator it;
    for(int i=1;i<=n;i++)
    alive.insert(i);
    ll l,r,x;
    while(m--)
    {
        cin>>l>>r>>x;
       it=alive.lower_bound(l);
        vi te;
        while(it!=alive.end()){
        	ll cur=*it;
        	if(cur>r) break;
        	
        	if(cur!=x){
        		te.pb(cur); ans[cur]=x;
        	}
        	it++;
        }
        for(int j=0;j<te.size();j++)
        alive.erase(te[j]);
    }
   for(int i=1;i<=n;i++)
   cout<<ans[i]<<" "; 
    return 0;
}

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

vi g[103];
queue<int> q;
vector<bool> vis(103,false);
void bfs(int u){
	q.push(u);
	vis[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x:g[v]){
			if(!vis[x]){
				q.push(x);
				vis[x]=true;
			}
		}
	}
}
bool pp(pair<int,pii> a,pair<int,pii> b){
	return a.ss.ff<b.ss.ff;
}
int main(){
    fastio;
    int n,u,v,c;
    cin>>n;
    vector<pair<int,pii>> a;
    for(int i=1;i<=n;i++){
    	cin>>u>>v;
    	a.pb(mp(u,mp(v,i)));
    }
    sort(a.begin(),a.end(),pp);
 //  for(pair<int,pii> x:a) cout<<x.ff<<" "<<x.ss.ff<<" "<<x.ss.ss<<"\n";
    
    u=a[0].ff,v=a[0].ss.ff,c=a[0].ss.ss;
    for(int i=1;i<n;i++){
    	if((a[i].ff-u==0)||(a[i].ss.ff-v==0)){
    		g[c].pb(a[i].ss.ss);
    		g[a[i].ss.ss].pb(c);
    	}
    	u=a[i].ff,v=a[i].ss.ff,c=a[i].ss.ss;
    }
    sort(a.begin(),a.end());
//    for(pair<int,pii> x:a) cout<<x.ff<<" "<<x.ss.ff<<" "<<x.ss.ss<<"\n";
    u=a[0].ff,v=a[0].ss.ff,c=a[0].ss.ss;
    for(int i=1;i<n;i++){
    	if(a[i].ff-u==0||a[i].ss.ff-v==0){
    		g[c].pb(a[i].ss.ss);
    		g[a[i].ss.ss].pb(c);
    	}
    	u=a[i].ff,v=a[i].ss.ff,c=a[i].ss.ss;
    }
    
    int ans=0;
    for(int i=1;i<=n;i++)
    if(!vis[i])
    {
    	ans++;
    	bfs(i);
    }
    
    cout<<ans-1;
    return 0;
}

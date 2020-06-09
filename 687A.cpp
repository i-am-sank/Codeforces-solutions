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
vi g[100001];
queue<int> q;
vector<bool> vis(100001,false);
vi d(100001,0);
void bfs(int u){
	q.push(u);
	vis[u]=true;
	d[u]=1;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x:g[v]){
			if(!vis[x]){
				vis[x]=true;
				q.push(x);
				d[x]=1-d[v];
			}
		}
	}
}


int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vpii a;
    int u,v;
    while(m--){
    	cin>>u>>v;
    	a.pb(mp(u,v));
    	g[u].pb(v);
    	g[v].pb(u);
    }
    for(int i=1;i<=n;i++)
    if(!vis[i]) 
    bfs(i);
    set<int> b,c;
    for(int i=0;i<a.size();i++){
    	if(d[a[i].ff]==d[a[i].ss]){
    		cout<<"-1";
    		return 0;
    	}
    	else{
    		if(d[a[i].ff]==0)b.insert(a[i].ff),c.insert(a[i].ss);
    		else
    		b.insert(a[i].ss),c.insert(a[i].ff);
    	}
    //	cout<<d[a[i].ff]<<" "<<d[a[i].ss]<<"\n";
    }
    
  cout<<b.size()<<"\n";
  for(auto const &x:b) cout<<x<<" ";
  cout<<"\n"<<c.size()<<"\n";
  for(auto const &x:c) cout<<x<<" ";
    return 0;
}

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
int c[1001][1001];
vi g[1001];
vector<bool> vis(1001,false);
queue<int> q;
pii bfs(int u){
	q.push(u);
	vis[u]=true;
	int d=INT_MAX,f;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x:g[v]){
			if(!vis[x]){
				vis[x]=true;
				q.push(x);		
				d=min(c[v][x],d);	
			}
		}
		
		if(g[v].size()==0) f=v;
	}
	return mp(f,d);
}
int main(){
    fastio;
    int n,p,fr[1001]={},u,v;
    
    set<int> s;
    cin>>n>>p;
    for(int i=0;i<p;i++) {
    	cin>>u>>v>>c[u][v];
    	s.insert(v);
    	g[u].pb(v);
    	fr[u]++,fr[v]++;
    }
    vector<pair<int,pii> > ans;
    for(int i=1;i<=n;i++){
    	 if(!vis[i]&&fr[i]==1&&!s.count(i)){
    	 	ans.pb({i,bfs(i)});
    	 }
    }
    cout<<ans.size()<<"\n";
    for(pair<int,pii> x:ans) cout<<x.ff<<" "<<x.ss.ff<<" "<<x.ss.ss<<"\n";
    return 0;
}

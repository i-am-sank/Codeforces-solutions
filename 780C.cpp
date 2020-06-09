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
vi g[200001];
queue<int> q;
vector<bool> vis(200001,false);
vi p(200001,0);
vi c(200001,0);
set<int> s;
void bfs(int u){
	q.push(u);
	vis[u]=true;
	int k=1;
	c[u]=k;
	s.insert(0);
	while(!q.empty()){
		int v=q.front();
		q.pop();
		s.insert(c[v]);
		if(v!=1) s.insert(c[p[v]]);
		k=1;
		for(int x:g[v])
		{
			if(!vis[x]){
			q.push(x);
			vis[x]=true;
			p[x]=v;
			while(s.count(k)) k++;
			c[x]=k;
			s.insert(k);
		}
		}
		s.clear();
	}
}
int main(){
    fastio;
    int n,u,v;
    cin>>n;
    for(int i=0;i<n-1;i++) {
    	cin>>u>>v;
    	g[u].pb(v);
    	g[v].pb(u);
    }
    bfs(1);
    int k=INT_MIN;
    for(int i=1;i<=n;i++ ) k=max(c[i],k);
    cout<<k<<"\n";
    for(int i=1;i<=n;i++ ) cout<<c[i]<<" ";
    return 0;
}

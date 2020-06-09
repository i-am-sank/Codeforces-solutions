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
vi ans;
void bfs(int u,int c[]){
	 q.push(u);
	 vis[u]=true;
	 while(!q.empty()){
	 	int v=q.front();
	 	q.pop();
	 	int cn=0,c1=0;
	 	for(int x:g[v]){
	 		if(!vis[x]){
	 			q.push(x);
	 			vis[x]=true;
	 			if(c[x]==1)
	 			cn++;
	 			c1++;
	 		}
	 	}
	 	if(c[v]==1&&cn==c1) ans.pb(v);
	 }
}
int main(){
    fastio;
    int n,u,c[100001],x;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>u>>c[i];
    	if(u==-1){
    		 x=i;
    		 continue;
    	}
    	g[i].pb(u);
    	g[u].pb(i);
    }
    bfs(x,c);
    sort(ans.begin(),ans.end());
    if(ans.size()==0) cout<<"-1";
    else
    for(int i:ans) cout<<i<<" ";
    return 0;
}

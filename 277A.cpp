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
vi g[101];
vector<bool> vis(101,false);
queue<int> q;
void bfs(int u){
	
	q.push(u);
	vis[u]=true;
	
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x:g[v]){
			if(!vis[x]){
				vis[x]=true;
				q.push(x);
			}
		}
	}
}

int main(){
    fastio;
    int n,m,k,x,c=0;
    vi a[101];
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	cin>>k;
    	if(k==0) c++;
    	for(int j=0;j<k;j++){
    		cin>>x;
    		a[x].pb(i+1);
    	}
    }
    for(int i=1;i<=m;i++)
    {
    	for(int x=0;x<a[i].size();x++){
    		for(int j=x+1;j<a[i].size();j++)
    		{
    			g[a[i][x]].pb(a[i][j]);
    			g[a[i][j]].pb(a[i][x]);
    		}
    	}
    }
    int ans=0;
    for(int i=1;i<=n;i++){
    	if(!vis[i]){
    		ans++;
    		bfs(i);
    	}
    }
    if(c+1>ans)
    ans=c+1;
    cout<<ans-1;
    return 0;
}

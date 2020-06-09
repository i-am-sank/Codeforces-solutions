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

vector<int> g[100011];
vector<bool > vis(100011,false);
vector<int> d(100011,0);
vi maxd(100011,0);
vi leaf;
queue<int > q;
void bfs(int u,int a[])
{
    q.push(u);
    vis[u]=true;
    //p[u]=-1;

    d[u]=a[1];
    maxd[u]=a[1];
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        int cnt=0;
        for(int x: g[v])
         {
            if(!vis[x])
             {
                 vis[x]=true;
                 q.push(x);
                 if(a[x]!=0)
                 d[x]=d[v]+a[x];
                 maxd[x]=max(maxd[v],d[x]);
             }
             else
             cnt++;             
         }
         if(cnt==g[v].size())
         leaf.pb(v);
    } 
}

int main(){
    fastio;
      int n,m;
    cin>>n>>m;
    int a[n+2];
    for(int i=1;i<=n;i++) cin>>a[i];
    int u,v;
    for(int i=1;i<n;i++){
    	cin>>u>>v;
    	g[u].pb(v);
    	g[v].pb(u);
    }
    bfs(1,a);
    vi an=leaf;
    int ans=0;
    for(int i:leaf) {
    	if(maxd[i]<=m) ans++;
    }
  cout<<ans;
    return 0;
}

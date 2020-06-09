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
vector<int > g[100011];
vector<bool > vis(100011,false);
queue<int > q;
ll bfs(int u,ll a[])
{
    q.push(u);
    vis[u]=true;
    ll ans=a[u];
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int x: g[v])
         {
            if(!vis[x])
             {
                 vis[x]=true;
                 q.push(x);
                 ans=min(ans,a[x]);
             }
         }
    }
   return ans;
}


int main(){
    fastio;
    int n,m,u,v;
    cin>>n>>m;
    ll a[100001];
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    }
    while(m--){
    	cin>>u>>v;
    	g[u].pb(v);
    	g[v].pb(u);
    }
    ll sum=0;
    for(int i=1;i<=n;i++){
    	if(!vis[i])
    	{
    		sum+=bfs(i,a);
    	}
    }
    cout<<sum;
    return 0;
}

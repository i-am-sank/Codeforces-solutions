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

vector<int > g[10011];
vector<bool > vis(10011,false);
queue<int > q;
ll bfs(int u,int a[])
{
    q.push(u);
    vis[u]=true;
    ll ans=1;
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
                 if(a[x]!=a[v]) ans++;
             }
         }
    }
  return ans;
}

int main(){
    fastio;
    int n,a[10001],x;
    cin>>n;
    for(int i=0;i<n-1;i++){
            cin>>x;   
    		g[i+2].pb(x);
    		g[x].pb(i+2);
    }
    for(int i=1;i<=n;i++) cin>>a[i];
    
    cout<<bfs(1,a);
    return 0;
}

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
//vector<int> d(100001,0);//p(100);
queue<int > q;
void bfs(int u)
{
    q.push(u);
    vis[u]=true;
    //p[u]=-1;
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
               //  d[x]=d[v]+1;
               //  p[x]=v;
             }
         }
    }
  
}

int main(){
    fastio;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	int a;
    	cin>>a;
    	g[i].pb(a);
    	g[a].pb(i);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
    	if(!vis[i])
    	{
    		ans++;
    		bfs(i);
    	}
    }
    cout<<ans;
    return 0;
}

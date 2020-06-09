#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;
vi g[2003];
//bool vis[2003]={};
int level[2003]={};
int level_bfs(int s)
{
	//vis[s]=true;
	queue<int> q;
	q.push(s);
	level[s]=0;
	int l=0;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int i=0;i<g[v].size();i++)
		{
		 //  if(!vis[g[v][i]])
		 //  {
		  // 	 vis[g[v][i]]=true;
		    level[g[v][i]]=level[v]+1;
		    q.push(g[v][i]);	
		    l=max(l,level[g[v][i]]);
		 //  }
		}
	}
	return l;
}

int main(){
    fastio;
    int n,u;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>u;
    	if(u==-1) u=0; 
    	g[u].pb(i);
    }
    int ans=level_bfs(0);
    cout<<ans;
    return 0;
}

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

vector<int > g[30011];
vector<bool > vis(30011,false);
//vector<int> d(100001,0);
queue<int > q;
void bfs(int u)
{
    q.push(u);
    vis[u]=true;
    //p[u]=-1;

//    d[u]=1;
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
             }
         }
    }
  
}

int main(){
    fastio;
    int n,k;
    cin>>n>>k;
    int u,v;
    int a[n+2];
    for(int i=1;i<n;i++) cin>>a[i];
    
    for(int i=1;i<n;i++){
         u=i,v=i+a[i];
    	g[u].pb(v);
    	//g[v].pb(u);
    }

   bfs(1);  
   if(vis[k])
   cout<<"YES";
   else
   cout<<"NO"; 
    return 0;
}

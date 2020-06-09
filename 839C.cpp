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
vector<int > g[100001];
vector<bool > vis(100011,false);
vector<int> d(100001,0);
vector<unsigned ll> p(100001,1);
vi leaf;
queue<int > q;
void bfs(int u)
{
    q.push(u);
    vis[u]=true;
    p[u]=1;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        int c=0,c1=0;
        for(int x: g[v])
         {
            if(!vis[x])
             {
                // vis[x]=true;
                 q.push(x);
                 d[x]=d[v]+1;
               c++;
              }
              else c1++;
         }
        if(c1==g[v].size()) leaf.pb(v); 
        for(int x:g[v]) {
        	if(!vis[x]) p[x]=p[v]*c,vis[x]=true;
        }
    }
  
}

double add(double a,double b){
	return (a+b);
}
int main(){
    fastio;
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++) {
    	int u,v;
    	cin>>u>>v;
    	g[u].pb(v);
    	g[v].pb(u);
    }
    bfs(1);
   double sum=0.00;
   for(int i:leaf){
   	double f=d[i],c=p[i];
   	f=f/c;
   	sum=add(sum,f);
   }
   cout<<setprecision(10)<<fixed<<sum;
    return 0;
}

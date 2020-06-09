#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
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
#define PI 3.14159265358979323846
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 

using namespace std;
map<pii,vpii> g;
bool vis[51][51];
queue<pii> q;

void bfs(pii x){
	vis[x.ff][x.ss]=true;
	q.push(x);
	
	while(!q.empty()){
		pii v=q.front();
		q.pop();
		for(pii u:g[v])
		{
			if(!vis[u.ff][u.ss])
			{
			
				vis[u.ff][u.ss]=true;
				q.push(u);
			}
		}
	}
}

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
    	int n,m;
    	cin>>n>>m;
    	string a[n+1];
    	for(int i=0;i<n;i++) cin>>a[i];
    	bool p=true,f=false;
        char c=a[n-1][m-1];
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			if(a[i][j]=='B')
    			{
    				a[i][j]='#';
    				if(i>0&&a[i-1][j]=='.') 
    				{
    					a[i-1][j]='#';
    				}
    				 if(j>0&&a[i][j-1]=='.') a[i][j-1]='#';
    				 if(i<n-1&&a[i+1][j]=='.') a[i+1][j]='#';
    				 if(j<m-1&&a[i][j+1]=='.') a[i][j+1]='#';
    				
    				 if(i>0&&a[i-1][j]=='G'||j>0&&a[i][j-1]=='G'||i<n-1&&a[i+1][j]=='G'||j<m-1&&a[i][j+1]=='G'){
    					p=false;
    					break;
    				}
    			}
    			else if(a[i][j]=='G') f=true;
    		}
    		if(!p) break;
    	}
    	//for(int i=0;i<n;i++) cout<<a[i]<<"\n";
    	
    	if(!p||(f&&a[n-1][m-1]=='#')) { cout<<"No\n";continue;}
    	a[n-1][m-1]=c;
    	memset(vis,false,sizeof(vis));

    	for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(i>0&&(a[i][j]=='.'&&a[i-1][j]=='.'||a[i][j]=='G'&&a[i-1][j]=='G'||a[i][j]=='G'&&a[i-1][j]=='.'||a[i][j]=='.'&&a[i-1][j]=='G'))
    		{
    			g[{i,j}].pb({i-1,j});
    			g[{i-1,j}].pb({i,j});
    		}
    		if(j>0&&(a[i][j]=='.'&&a[i][j-1]=='.'||a[i][j]=='G'&&a[i][j-1]=='G'||a[i][j]=='G'&&a[i][j-1]=='.'||a[i][j]=='.'&&a[i][j-1]=='G'))
    		{
    			g[{i,j}].pb({i,j-1});
    			g[{i,j-1}].pb({i,j});
    		}
    	}
    	
    }
    bfs(mp(n-1,m-1));
    	
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++){
    		if(a[i][j]=='G'&&!vis[i][j])
    		{
    			p=false;
    			break;
    		}
    		
    	  }if(!p) break;
    	}
    	
    	if(!vis[n-1][m-1]) p=false;
    	
    	if(p) cout<<"Yes\n";
    	else cout<<"No\n";
    	g.clear();
    }
    return 0;
}

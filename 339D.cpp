#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define vpii vector<pair<int,int> >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;
ll t[550000]={};
void build(ll a[],ll v,ll tl,ll tr,bool p)
{
	if(tl==tr){
		t[v]=a[tl];
	}
	else{
		int tm=(tl+tr)>>1;
		build(a,2*v,tl,tm,!p);
		build(a,2*v+1,tm+1,tr,!p);
		
		if(!p)
		t[v]=(t[v*2]|t[v*2+1]);
		else
		t[v]=(t[v*2]^t[v*2+1]);
	}
}
void update(ll v,ll tl,ll tr,ll p,ll x,bool f){
	
	if(tl==tr) t[v]=x;
	
	else{
		int tm = (tl+tr)>>1;
		if(p<=tm)
		  update(2*v,tl,tm,p,x,!f);
		  else
		  update(2*v+1,tm+1,tr,p,x,!f);
		
		if(f)  
		t[v]=t[v*2]^t[v*2+1];
		else
		 t[v]=t[v*2]|t[v*2+1];
	}
}
ll power(ll a,ll b){
	
	ll res=1;
	while(b>0)
	{
		if(b&1)
		res*=a;
		a*=a;
		b>>=1;
	}
	return res;
}
int main(){
    fastio;
    
    ll n,m,p,x;
    cin>>n>>m;
    ll a[150000];
    ll tn=power(2,n);
    for(int i=0;i<tn;i++)
    cin>>a[i];
     bool f=true;
    if(n&1)
    f=false;
    build(a,1,0,tn-1,f);
   
    while(m--)
    {
    	cin>>p>>x;
    	update(1,1,tn,p,x,f);
    	cout<<t[1]<<"\n";
    }
    return 0;
}

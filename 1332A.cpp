#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define vpii vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;


int main(){
    fastio;
    
    ll a,b,c,d;
    ll x,y,x1,x2,y1,y2;
    ll t;
    cin>>t;
    while(t--)
    {
    	cin>>a>>b>>c>>d;
    	cin>>x>>y>>x1>>y1>>x2>>y2;
    	
    	if(x1<=(x+b-a)&&(x+b-a)<=x2&&y1<=(y+d-c)&&y2>=(y+d-c))
    	{
    		if((x1==x2&&a!=0)||(y1==y2&&d!=0))
    		cout<<"No\n";
    		else
    		cout<<"Yes\n";
    	}
    	else
    	cout<<"No\n";
    }
    return 0;
}

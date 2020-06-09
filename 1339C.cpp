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



int main(){
    fastio;
    int t,n;
   
    cin>>t;
    while(t--){
    	cin>>n;
    	ll a[n+1];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	ll x=0;
    	
       	for(int i=1;i<n;i++)
    	{
    		if(a[i]<a[i-1])
    		{
    			ll d=a[i]-a[i-1];
    			d=-d;
      			ll tem=0,s=d;
      			while(d>0){
      				d/=2;
      				tem++;
      			}
    		    x=max(x,tem);
    		   a[i]+=s;
    		}
    	}
    	cout<<x<<"\n";
    }
    
    return 0;
}

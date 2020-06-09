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
    	double x;
    	cin>>n>>x;
    	
    	ll a[n+1]={},sum=0;
    	for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
    	
    	sort(a,a+n);
    	double f=sum/n;
    	ll ans=0;
    	if(f>=x)
    	{
    		ans=n;
    	}
    	else
    	{
    		 for(int i=0;i<n;i++)
    		 {
    		 	sum-=a[i];
    		 	int c=(n-i-1)>0?n-i-1:1;
    		 	f=sum/(c);
    		 	if(f>=x) {
    		 		ans=n-i-1;
    		 		break;
    		 	}
    		 }
    	}
    	cout<<ans<<"\n";
    }
    	
    
    
    return 0;
}

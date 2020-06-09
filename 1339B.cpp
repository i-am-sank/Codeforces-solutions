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
    	{
    		cin>>a[i];
    	}
    	sort(a,a+n);
    	vll res;
    	int i=0,j=n-1;
    	while(i<=j){
    		if(i==j)
    		res.pb(a[i]);
    		else
    		{
    			res.pb(a[i]);
    			res.pb(a[j]);
    		}
    		i++;
    		j--;
    	}
    	for(int i=n-1;i>=0;i--)
    	cout<<res[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}

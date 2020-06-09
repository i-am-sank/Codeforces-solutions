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
    	int a[n+1][2];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i][0]>>a[i][1];
    	}
    	
    	bool p=true;
    	if(a[0][0]<a[0][1]) p=false;
    	for(int i=1;i<n;i++)
    	{
    		int l=a[i][0]-a[i-1][0];
    		int r=a[i][1]-a[i-1][1];
    		
    		if(l<r||l<0||r<0)
    		{
    			p=false;
    			break;
    		}
    	}
    	if(p) cout<<"YES\n";
    	else
    	cout<<"NO\n";
    }
    return 0;
}

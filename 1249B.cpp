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


int main(){
    fastio;
    
    ll n,q;
    cin>>q;
    while(q--)
    {
    	cin>>n;
    	ll a[n+2],ans[n+2]={};
    	for(int i=1;i<=n;i++)
    	cin>>a[i];
    	
    	for(int i=1;i<n+1;i++)
    	{
    		 if(ans[i]==0)
    		 {
    		 	int cnt=1;
    		 	int j=a[i];
    		 	while(j!=i){
    		 		j=a[j];
    		 		cnt++;
    		 	}
    		 	ans[i]=cnt;
    		 	j=a[i];
    		 	while(j!=i)
    		 	{
    		 		j=a[j];
    		 		ans[j]=cnt;
    		 	}
    		 }
    	}
    	
    	for(int i=1;i<n+1;i++)
    	cout<<ans[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}

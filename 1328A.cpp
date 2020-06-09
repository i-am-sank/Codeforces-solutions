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
    
    ll t,a,b;
    cin>>t;
    while(t--)
    {
    	cin>>a>>b;
    	ll ans=b-a%b;
    	if(ans==b)
    	ans=0;
    	
    	cout<<ans<<endl;
    }
    return 0;
}

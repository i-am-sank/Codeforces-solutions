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
    
    int n;
    cin>>n;
    ll dp[n+1],res;
    dp[0]=1;
    ll m=998244353;
    for(int i=1;i<=n;i++)
    {
    	dp[i]=(dp[i-1]*10)%m;
    }
    
    for(int i=1;i<n;i++)
    {
    	res=2*10*9*dp[n-i-1];
    	res+=(n-1-i)*10*9*9*dp[n-i-2];
    	res=res%m;
    	
    	cout<<res<<" ";
    }
    cout<<"10";
    return 0;
}

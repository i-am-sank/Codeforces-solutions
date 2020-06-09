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
 ll dp[200004][2]={};
int a[200001],b[200001];
int main(){
    fastio;
    
    int n,c;
    cin>>n>>c;
    
    for(int i=1;i<n;i++)
    cin>>a[i];
    
    for(int i=1;i<n;i++)
    cin>>b[i];
    
   
    dp[0][0]=c;
    dp[0][1]=0;
    cout<<"0 ";
    for(int i=1;i<n;i++)
    {
    	dp[i][0]=min(dp[i-1][0]+b[i],dp[i-1][1]+c+b[i]);
    	dp[i][1]=min(dp[i-1][0]+a[i],dp[i-1][1]+a[i]);
    	
    	cout<<min(dp[i][0],dp[i][1])<<" ";
    }

    return 0;
}

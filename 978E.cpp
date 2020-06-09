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
    
    ll n,w;
    ll a[1002]={};
    cin>>n>>w;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    
    for(int i=1;i<=n;i++)
    a[i]+=a[i-1];
    
    sort(a,a+n+1);
  ll  mi=a[0],mx=a[n];
    ll ans=0;
    ans=w-mx+mi+1;
    if(ans<0)
    cout<<"0";
    else
    cout<<ans;
    return 0;
}

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
    ll b[n+2],a[n+2]={},s=0,m;
    for(int i=0;i<n;i++)
    cin>>b[i];
    
    a[0]=b[0];
    m=max(s,a[0]);
    for(int i=1;i<n;i++)
    {
    	a[i]=b[i]+m;
    	m=max(m,a[i]);
    }
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";   
    return 0;
}

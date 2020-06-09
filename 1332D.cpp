#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define mp make_pair
#define vpii vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false) , cin.tie(NULL) ,cout.tie(NULL) 
using namespace std;


int main(){
    fastio;
    ll k;
    cin>>k;
    int n=3,m=3;
    ll a[3][3]={262143,131071,65535,131072,131071,0,262143,262143,131071};
    a[1][2]=131071-k;
    cout<<n<<" "<<m<<"\n";
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	cout<<a[i][j]<<" ";
    	
    	cout<<endl;
    }
    
    return 0;
}

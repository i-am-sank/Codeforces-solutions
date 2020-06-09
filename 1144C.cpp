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
    int n;
    
    cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    sort(a.begin(),a.end());
    
    vi b,inc;
    inc.pb(a[0]);
    for(int i=1;i<n;i++)
    {
    	if(a[i]==a[i-1])
    	b.pb(a[i]);
    	else
    	inc.pb(a[i]);
    }
    bool p=true;
    for(int i=1;i<b.size();i++){
    	if(b[i]==b[i-1])
    	{
    		p=false;
    		break;
    	}
    }
    if(p){
    	cout<<"YES\n";
    	reverse(b.begin(),b.end());
    	cout<<inc.size()<<"\n";
    	for(int i:inc) cout<<i<<" ";
    	cout<<"\n";
    	cout<<b.size()<<"\n";
    	for(int i:b) cout<<i<<" ";
    }
    else
    {
    	cout<<"NO";
    }
    return 0;
}

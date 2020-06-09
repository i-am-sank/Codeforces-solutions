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
    
    int t,n,x;
    cin>>t;
    while(t--)
    {
    	cin>>n>>x;
    	int a[n+1];
    	set<int> s;
    	for(int i=0;i<n;i++)
    	cin>>a[i],s.insert(a[i]);
    	set<int>::iterator it;
    	vi b;
    	for(it=s.begin();it!=s.end();it++)
    	b.pb(*it);
    	int ans=1;
    	for(int i=0;i<b.size();i++)
    	{
    		if(b[i]<=x+i+1)
    		ans=x+i+1;
    	}
    	cout<<ans<<endl;
    }
    
    return 0;
}

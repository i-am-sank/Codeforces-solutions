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
    
    ll t,n,k;
    cin>>t;
    while(t--)
    {
    	cin>>n>>k;
    	if(n&1)
    	{
    		if(k&1)
    		{
    			ll p=k*k;
    			if(n>=p)
    			cout<<"YES";
    			else
    			cout<<"NO";
    		}
    		else
    		cout<<"NO";
    	}
    	else
    	{
    		if(k&1)
    		cout<<"NO";
    		else
    		{
    			ll p=k*k;
    			if(n>=p)
    			cout<<"YES";
    			else
    			cout<<"NO";
    		}
    	}
    	cout<<"\n";
    }
    return 0;
}

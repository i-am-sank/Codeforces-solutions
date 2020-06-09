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
    	int a[n+1];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	
    	sort(a,a+n);
    	bool p=false;
    	for(int i=1;i<n;i++)
    	if(a[i]-a[i-1]==1)
    	{
    		p=true;
    		break;
    	}
    	if(p)
    	cout<<"2\n";
    	else
    	cout<<"1\n";
    }
    return 0;
}

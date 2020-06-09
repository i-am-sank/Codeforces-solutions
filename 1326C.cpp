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
    int n,m=998244353,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll sum=0,res=1,j=1;
    set<int> s;
    for(int i=n;i>n-k;i--)
    {
    	sum+=i;
    	s.insert(i);
    }
    bool p=false;
    for(int i=0;i<n;i++)
    {
    	if(s.count(a[i]))
    	res=res*j%m,j=1,p=true;
    	else if(p)
    	j++;
    }
    cout<<sum<<" "<<res;
    return 0;
}

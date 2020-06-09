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

bool check(int n,int a[],int k,int sum)
{
	int res=0;
	for(int i=0;i<k;i++)
	{
		res+=a[i];
	}
	if(res<=sum)
	return true;
	for(int i=k;i<n;i++)
	{
		res+=a[i];
		res-=a[i-k];
		
		if(res<=sum)
		return true;
	}
	return false;
}
int main(){
    fastio;
    
    int n,t;
    cin>>n>>t;
    int a[n+1],ans=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int l=0,r=n,mid;
    while(l<=r)
    {
    	mid=l+r;
    	mid>>=1;
    	if(check(n,a,mid,t))
    	{
    		ans=mid;
    		l=mid+1;
    	
    	}
    	else
    	r=mid-1;
    }
    cout<<ans;
    return 0;
}

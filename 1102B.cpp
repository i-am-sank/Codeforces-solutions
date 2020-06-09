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
    int n,k;
    int a[5001],m;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>a[i],m=max(a[i],m);
    pair<int,int> freq[5001]={};
 
    for(int i=0;i<n;i++)
    freq[a[i]].ff+=1,freq[a[i]].ss=a[i];
    
    sort(freq+1,freq+m+1);
    
    if(k<freq[m])
    {
    	cout<<"NO";
    }
    else
    {
    	cout<<"YES"<<endl;
    	int ans[n+1]={};
    	if(k==freq[m])
    	{
    		for(int i=0;i<n;i++)
    		{
    			cout<<freq[freq[a[i].ss].ff<<" ";
    			freq[freq[a[i].ss].ff--;
    		}
    	}
    	else
    	{
    		int rem = k-freq[m],j=0;
    		for(int i=1;i<=m;i++)
    		if(rem<=freq[i])
    		{
    			 j=i;
    			break;
    		}
    		for(int i=0;i<n;i++)
    		{
    			if(j==a[i])
    			cout<<rem<<" ",rem--;
    			else if(m==a[i])
    			cout<<k<<" ",k--;
    			else
    			cout<<freq[a[i]]<<" ",freq[a[i]]--;
    		}
    	}
    }
    return 0;
}

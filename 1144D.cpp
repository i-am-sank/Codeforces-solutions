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
    map<int,int> p;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int m=0,tem=0;
    for(int i:a){
    	p[i]++;
    	if(m<p[i])
    	{
    		m=p[i];
    		tem=i;
    	}
    }
    int ans[n][3],k=0;
    for(int i=0;i<n-1;i++)
    {
    	
    	if(a[i]==tem&&a[i]<a[i+1])
    	{
    		ans[k][0]=2;
    		ans[k][1]=i+2;
    		ans[k][2]=i+1;
    		k++;
    		a[i+1]=tem;
    	}
    	if(a[i]==tem&&a[i]>a[i+1])
    	{
    		ans[k][0]=1;
    		ans[k][1]=i+2;
    		ans[k][2]=i+1;
    		k++;
    		a[i+1]=tem;
    	}
    	
    }
     for(int i=n-1;i>0;i--)
    {
    	
    	if(a[i]==tem&&a[i]<a[i-1])
    	{
    		ans[k][0]=2;
    		ans[k][1]=i;
    		ans[k][2]=i+1;
    		k++;
    		a[i-1]=tem;
    	}
    	if(a[i]==tem&&a[i]>a[i-1])
    	{
    		ans[k][0]=1;
    		ans[k][1]=i;
    		ans[k][2]=i+1;
    		k++;
    		a[i-1]=tem;
    	}
    	
    }
    cout<<k<<"\n";
    for(int i=0;i<k;i++)
    {
    	cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<"\n";
    }

   
    return 0;
}

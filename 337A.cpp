#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,ans=0,f[51],i,mx=50000;
	cin>>n>>m;
	for(i=0;i<m;i++)
	cin>>f[i];
	
	sort(f,f+m);

	for(i=0;i<=m-n;i++)
	{
	  	
	  ans=f[i+n-1]-f[i];
	
	  mx=min(ans,mx);	
	}
	cout<<mx;
}

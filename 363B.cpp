#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k,ans,m=0,i,j=0;
	cin>>n>>k;
	
	int h[n];
	for( i=0;i<n;i++)
	{
		cin>>h[i];
		if(i<k)
		m+=h[i];
	}
	ans=m;
	for(i=1;i<=n-k;i++)
	{
	  m=m-h[i-1]+h[k+i-1];
	  if(m<ans)
	  ans=m,j=i;	
	}
/*	if(n-k==1)
	{ 
	  m=m-h[0]+h[n-1];
	  if(m<ans)
	  ans=m,j=1;
	}*/
	cout<<j+1;
}

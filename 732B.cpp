#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,a[501];
	cin>>n>>k;
	for(int i=0;i<n;i++)
	cin>>a[i];
	long long int dp[n]={};
	dp[0]=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]+a[i-1]<k)
	{
		dp[i]=k-a[i-1]-a[i]+dp[i-1];
		a[i]=k-a[i-1];
	}
	else
	{
		dp[i]=dp[i-1];
	}
	}

		cout<<dp[n-1]<<endl;
	
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
}

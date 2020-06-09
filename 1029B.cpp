#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,a[200001],i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	int dp[n]={};
	dp[0]=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]<=2*a[i-1])
		dp[i]=1+dp[i-1];
		else
		dp[i]=1;
	}
	sort(dp,dp+n);
	cout<<dp[n-1];
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,a[100001]={},x,m=0;
//	long long int ans=0;
	cin>>n;
	for(long long int i=0;i<n;i++)
	{
	   cin>>x;
	   a[x]++;
	   if(m<x)
	   m=x;	
	}
    long long int dp[m];
    dp[0]=0;
    dp[1]=a[1];
    for(long long int i=2;i<=m;i++)
    {
    	dp[i]=max(dp[i-1],dp[i-2]+a[i]*i);
	}
	cout<<dp[m];
}

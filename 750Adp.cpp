#include<bits/stdc++.h>
using namespace std;
int foo(int k,int i,int n)
{
	
/*	if(k<0)
	return i-1;
	else if(k==0||i>=n)
	return i;
	
	i++;
	return foo(k-5*i,i,n);*/
	
	int dp[n]={};
	dp[0]=k;
	while(dp[i]>0&&i<=n)
	{
		i++;
		dp[i]=dp[i-1]-5*i;
		
	}
	if(dp[i]==0||i>=n)
	cout<<i;
	else if(dp[i]<0)
	cout<<i-1;
}
int main(){
	int n,k;
	cin>>n>>k;
	k=240-k;
	
   foo(k,0,n);
}

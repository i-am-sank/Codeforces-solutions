#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
	int n,m,i,a[100000]={},x;
	int dp[100001];
	cin>>n>>m;
	unordered_map<int,int> f;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	dp[n]=1;
    f[a[n-1]]=1;
	for(i=n-1;i>=1;i--)
	{
		f[a[i-1]]++;
	   	if(f[a[i-1]]>1)
	   	dp[i]=dp[i+1];
	   	else 
	   	dp[i]=dp[i+1]+1;
	}
	while(m--)
	{
	   cin>>x;
	   cout<<dp[x]<<endl;	
	}
}

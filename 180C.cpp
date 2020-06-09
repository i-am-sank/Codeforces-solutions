#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n,i,ans,j=0,flag=0;
	cin>>s;
	n=s.size();
	int dp[n+1][2]={};
	flag=dp[0][0]=s[0]>='a'&&s[0]<='z'?1:0;	
	for(i=1;i<n;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			dp[i][0]=dp[i-1][0]+1;
			dp[i][1]=dp[i-1][1];
			flag=1;
		}
		else if(flag>0)
		{
			dp[i][0]=dp[i-1][0];
			dp[i][1]=dp[i-1][1]+1;
			j=i;	
		}
	}
	cout<<min(dp[j][0],dp[j][1]);
}

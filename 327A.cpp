#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[101],x=0,ans;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	 cin>>a[i];
	 
	 if(a[i]==1)
	 x++;	
	}
    vector<int > b;
    for(int i=0;i<n;i++)
    {
    	if(a[i]>0)
    	b.push_back(-1);
    	else
    	b.push_back(1);
	}
	int  dp[101]={};
	dp[0]=b[0];
	ans=b[0];
	for(int i=1;i<n;i++)
	{
		dp[i]=max(dp[i-1]+b[i],b[i]);
		
		ans=max(ans,dp[i]);
	//	cout<<ans<<" "<<dp[i]<<endl;
	}
//	cout<<x<<endl;
	cout<<ans+x;
}

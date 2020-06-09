#include<bits/stdc++.h>
using namespace std;
int mod(int x)
{
	if(x>0)
	return x;
	else
	return -1*x;
}
int main(){
	
    int n,m,a[101],ans=0,o=0,e=0,f=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	vector<int> dp;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2==0)
		e++;
		else if(a[i]%2==1)
		o++;
		
		if(o==e)
		{
			if(a[i+1]-a[i]<0)
			dp.push_back(a[i]-a[i+1]);
			else
			dp.push_back(a[i+1]-a[i]);
		}
	
	}
/*	for(int i=0;i<dp.size();i++)
    cout<<dp[i]<<" ";*/
    sort(dp.begin(),dp.end());
    f=0;
    for(int i=0;i<dp.size();i++)
    {
    	if(f+dp[i]<=m)
    	f+=dp[i],ans++;	
	}
	cout<<ans;
}

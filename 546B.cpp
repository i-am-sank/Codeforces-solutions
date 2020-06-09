#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,freq[3001]={0},x,ans=0,m=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		freq[x]++;
		m=max(m,x);
	}
	for(int i=1;i<m;i++)
	{
		if(freq[i]>1)
		{
			freq[i+1]+=freq[i]-1;
			ans+=freq[i]-1;
		}
	}
	ans+=freq[m]*(freq[m]-1)/2;
	cout<<ans;
}

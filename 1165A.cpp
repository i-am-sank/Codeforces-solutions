#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	int i,ans=0;
	for(i=n-1;i>=n-x;i--)
	{
		if(i>=n-y)
		{
			if(s[i]=='1')
			ans++;
		}
	   else	if(i==n-y-1&&s[i]=='0')
	   ans++;
	   else if(i<n-y-1)
		{
			if(s[i]=='1')
			ans++;
		}
		
	}
	cout<<ans;
}

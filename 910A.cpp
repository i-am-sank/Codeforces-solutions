#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d,i,j=0,f,ans=0;
	string s;
	cin>>n>>d;
	cin>>s;
	i=0;
	while(i+d<n)
	{   f=0;
		for(j=i+d;j>i;j--)
		{
			if(s[j]=='1')
			{
				ans++;
				i=j;
				break;
			}
			f++;
		}
		if(f==d)
		break;
	}
	if(j==n-1)
	cout<<ans;
	else if(j<n-1&&j+d>=n)
	cout<<ans+1;
	else
	cout<<"-1";
}

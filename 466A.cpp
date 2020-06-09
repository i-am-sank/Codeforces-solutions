#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,ans=0;
	cin>>n>>m>>a>>b;
	if(a*m>=b)
	{
		ans+=(n/m)*b;
		n=n%m;
		ans+=min(n*a,b);
	}
	else
	ans+=n*a;
	
	cout<<ans;
}

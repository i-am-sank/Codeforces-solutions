#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		
		int ans=0;
		if(a>0)
		ans++,a--;
		if(b>0)
		ans++,b--;
		if(c>0)
		ans++,c--;
		
		if(a>0&&b>0)
		ans++,a--,b--;
		if(b>0&&c>0)
		ans++,b--,c--;
		if(c>0&&a>0)
		ans++,c--,a--;
		
		if(a>0&&b>0&&c>0)
		ans++;
		
		cout<<ans<<endl;
	}
}

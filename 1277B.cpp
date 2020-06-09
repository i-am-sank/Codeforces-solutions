#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll x,ans=0;
		set<ll,greater<ll> > s;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x%2==0)
			s.insert(x);
		}
	//	set<ll >::iterator it;
		while(!s.empty())
		{
			x=*s.begin();
			s.erase(s.begin());
			x/=2;
			if(!(x&1))
			s.insert(x);
			ans++;
	//	cout<<x;
		}
	//	s.clear();
	  cout<<ans<<endl;	
	}
}
